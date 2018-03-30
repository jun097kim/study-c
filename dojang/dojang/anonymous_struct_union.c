#include <stdio.h>

struct Vector3 {
	/* 익명 구조체, 익명 공용체 멤버에는 바로 접근할 수 있음 */
	union {	// x, y, z와 v[3]이 같은 공간을 공유
		struct {
			float x;
			float y;
			float z;
		};
		float v[3];
	};
};

int main()
{
	struct Vector3 pos;

	for (int i = 0; i < 3; i++)
	{
		pos.v[i] = 1.0f;	// v 배열 인덱스로 접근
	}

	printf("%f %f %f\n", pos.x, pos.y, pos.z);	// x, y, z 멤버로 접근

	return 0;
}