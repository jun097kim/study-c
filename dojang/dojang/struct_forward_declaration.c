struct Phone;	// Phone ����ü ���� ����

struct Person {
	char name[20];
	int age;
	struct Phone *phone;	// ���� ���ǵ��� ���� ����ü�� �����ͷ� ����
};

struct Phone {	// Phone ����ü ����
	int areacode;
	unsigned long long number;
};