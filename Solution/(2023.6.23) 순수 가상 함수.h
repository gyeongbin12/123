#pragma once
#include <iostream>
#include "Marine.h"
#include "Sword.h"

using namespace std;

int main()
{
#pragma region ���� ���� �Լ�

	// �ϳ��� ���� ���� �Լ��� ������ Ŭ������ �߻� Ŭ������ ���ǵ˴ϴ�.
	// Unit unit;

	// �߻� Ŭ������ ��� ������ Ÿ������ ����� �� �ֽ��ϴ�.
	// ex) Unit * ptr;
	// Marine marine;
	// 
	// marine.Skill();
	// 
	// // ���� �Լ��� �� �� �̻��� ���� �Լ��� ���ϴ� Ŭ������ ���� ��
	// // ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�.
	// std::cout << "Marine ��ü�� ũ�� : " << sizeof(marine) << std::endl;
#pragma endregion

#pragma region ���� �Ҹ���
	// ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü��
	// ������� ��� ȣ��Ǵ� �Ҹ����Դϴ�.

	Weapon* ptr = new Sword;
	ptr->Attack();

	// ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ�
	// ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� 
	// �ϱ� ������ ���� �ð��� �޸𸮿� �Ҵ��
	// ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �մϴ�.
	delete ptr;


#pragma endregion


	return 0;
}
