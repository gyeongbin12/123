#pragma once
#pragma once
// #include <iostream>
#include "Marine.h"
#include "Ghost.h"

using namespace std;

void Recovery(Unit* unit)
{
	unit->SetHP(200);
}

int main()
{
	// �� ĳ����	
	Marine marine; // ü�� 100
	Ghost ghost;   // ü�� 50

	//Unit * uptr = &marine;
	//uptr->Skill();

	//uptr = &ghost;
	//uptr->Skill();

	Recovery(&marine); // 200
	std::cout << "������ ü�� : " << marine.GetHP() << std::endl;

	Recovery(&ghost);  // 200 
	std::cout << "��Ʈ�� ü�� : " << ghost.GetHP() << std::endl;

	return 0;
}
