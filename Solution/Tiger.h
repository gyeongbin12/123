#pragma once
#include "Carnivore.h"
#include "Lion.h"

class Tiger	final : public Carnivore
{
public :
	// Carnivore Ŭ�������� Final�� ����� �Լ���
	// �� �̻� ���� Ŭ�������� �������� �� �����ϴ�.
	// void Action();

	void FriendFunction(Lion lion)
	{
		lion.age = 5;
		lion.name = "FAKER";

		std::cout << "lion.age : " << lion.age << std::endl;
		std::cout << "lion.name : " << lion.name << std::endl;
	}
};

