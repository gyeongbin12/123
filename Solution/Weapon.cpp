#include "Weapon.h"				   

Weapon::~Weapon()
{
	std::cout << "Weapon() �Ҹ�" << std::endl;
}

void Weapon::Stat()
{
	std::cout << "���� ���ݷ� : " << m_attack << std::endl;
}

void Weapon::Attack()
{
	std::cout << "����" << std::endl;
}

