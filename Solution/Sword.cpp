#include "Sword.h"

Sword::~Sword()
{
	std::cout << "Sword() �Ҹ�" << std::endl;
}

void Sword::Stat()
{
	std::cout << "�� ���ݷ� : " << m_attack << std::endl;
	std::cout << "ġ��Ÿ Ȯ�� : " << m_criticalHit << std::endl;
}

void Sword::Attack()									
{
	std::cout << "����" << std::endl;
}
