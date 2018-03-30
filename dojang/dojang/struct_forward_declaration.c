struct Phone;	// Phone 구조체 전방 선언

struct Person {
	char name[20];
	int age;
	struct Phone *phone;	// 아직 정의되지 않은 구조체를 포인터로 선언
};

struct Phone {	// Phone 구조체 정의
	int areacode;
	unsigned long long number;
};