#include <stdio.h>

struct Vector3 {
	/* �͸� ����ü, �͸� ����ü ������� �ٷ� ������ �� ���� */
	union {	// x, y, z�� v[3]�� ���� ������ ����
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
		pos.v[i] = 1.0f;	// v �迭 �ε����� ����
	}

	printf("%f %f %f\n", pos.x, pos.y, pos.z);	// x, y, z ����� ����

	return 0;
}