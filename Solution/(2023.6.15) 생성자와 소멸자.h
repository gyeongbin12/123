#pragma once
#include "Weapon.h"

using namespace std;

#pragma region ������
// Ŭ������ �ν��Ͻ��� �����Ǵ� ��������
// �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.
class Person
{
	// �������� ��� ��ü�� ������ �� �� �� ���� ȣ��Ǹ�,
	// �����ڴ� ��ȯ���� �������� �ʽ��ϴ�.

	// �׷��Ƿ�, �����ڰ� ȣ��Ǳ� ������ ��ü�� ����
	// �޸𸮴� �Ҵ���� �ʽ��ϴ�.
	int age;

public:
	// default : �⺻ �����ڷ� ��������� �����ϴ� Ű�����Դϴ�.
	Person() = default;

	Person(int x)
	{
		age = x;
		cout << "������ ȣ��" << endl;
	}

	// ���� ������
	// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�.
	Person(Person& clone)
	{
		cout << "���� ������ ȣ��" << endl;
	}

	// �Ҹ���
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�.
	~Person()
	{
		// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� 
		// �� �ѹ��� ȣ��Ǹ�, �Ҹ��ڿ��� �Ű�������
		// �����Ͽ� ����� �� �����ϴ�.
		cout << "Animal ����" << endl;
	}
};
#pragma endregion

#pragma region �⺻ �Ű� ����
// �Ű� ������ �⺻���� �����Ͽ� �Լ��� ȣ��� ��
// �μ����� ȣ��� �� �ֵ��� �����ϴ� �Ű� �����Դϴ�.

void Damage(int x = 100)
{
	cout << "x�� �� : " << x << endl;
}


// �⺻ �Ű� ������ ������ �� �����ʿ��� ���� �����մϴ�.
void Calculator(int x, int y = 100)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}

#pragma endregion


int main()
{
#pragma region ������ & �Ҹ���
	Person animal1;

	Person animal2 = animal1;

	Weapon weapon;

	weapon.Stat();
	Person * aptr = new Person(10);
	delete aptr;

	int a = 10;
	int b(10);

#pragma endregion

#pragma region �⺻ �Ű� ���� 
	// Damage(999);
	// Calculator(1);
#pragma endregion
	return 0;
}

