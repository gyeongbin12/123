#pragma once
#include <iostream>
#include "Tiger.h"
#include "Lion.h"

using namespace std;



int main()
{
#pragma region ���� ó��
	//	int a;
	//	int b;
	//	int result = 0;
	//	
	//	cin >> a >> b;
	//	
	//	try
	//	{
	//		if (b == 0)
	//		{
	//			throw invalid_argument("������ 0�� �� �� �����ϴ�.");
	//		}
	//	
	//		std::cout << "����մϴ�." << std::endl;
	//		result = a / b;
	//	}
	//	catch (const std::exception & error)
	//	{
	//		std::cout << error.what() << std::endl;
	//	}
	//	catch (int errorID)
	//	{
	//		std::cout << errorID << std::endl;
	//	}
#pragma endregion

#pragma region final 
	// Ŭ������ ���� �Լ��� ���� Ŭ�������� ��������
	// �� ������ �������ִ� ����Դϴ�.
	// Animal animal;
	// animal.Action();
	// 
	// Carnivore carnivore;
	// carnivore.Action();
	// 
	// Tiger tiger;
	// tiger.Action();
#pragma endregion

#pragma region friend
	 // �������� ������ Ŭ�������� ��� ������ 
	 // ������ �� �ֵ��� �������ִ� ����Դϴ�.
	Lion lion;
	Tiger tiger1; {}

	tiger1.FriendFunction(lion);



#pragma endregion


	return 0;
}
