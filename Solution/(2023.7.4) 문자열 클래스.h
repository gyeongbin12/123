#pragma once
#pragma once
#include <iostream>

// STL <string ���̺귯��>
#include <string>

using namespace std;

int main()
{
#pragma region ���ڿ� Ŭ���� (std::string)
	std::string string("���ڿ�");
	std::string name;

	// std::cout << "string ������ �� : " << string << std::endl;
	// 
	// string = "Ŭ���� ";
	// 
	// std::cout << "string ������ �� : " << string << std::endl;

	std::cout << "string ������ ���� �Է����ּ��� : ";
	std::cin >> string;

	std::cout << "name ������ ���� �Է����ּ��� : ";
	std::cin >> name;
	std::cout << std::endl;

	std::cout << "string ������ �� : " << string << "	name ������ �� : " << name << std::endl;

	// 1. ���⸦ ���� �� ����� �̻��ϰ� �Ǵ� �κ� �����ϱ�
	// 2. �� �������� ���ؼ� �ذ� ��� ã�ƺ���

#pragma endregion


	return 0;
}
