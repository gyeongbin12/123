#pragma once
#include <iostream>

class Unit
{
private :
	int hp;
	// int attack;

public:
	// ���� ���� �Լ�
	// ���� Ŭ�������� �������� ������ ����ϴ� ��� �Լ��Դϴ�.
	virtual void Skill() = 0;	

	virtual void SetHP(int hp) = 0;
	virtual int GetHP() = 0;
};

