#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>

// STL <array ���̺귯��>
#include<array>

//STL <vector ���̺귯��>
#include <vector>

using namespace std;

int main()
{
#pragma region STL ǥ�� ���ø� ���̺귯��
	// C++���� ����� �� �ִ� �����̳� class�� �˰�����
	// �Ϲ�ȭ ���Ѽ� ����� �� �ִ� �ڷᱸ���� �����ϴ� ���̺귯���Դϴ�.

	//std::array
	/*
	std::array<int, 5> STLarray;
	STLarray[0] = 10;

	std::cout << "STLarray�� ũ��" << STLarray.size() << std::endl;
	*/

	// std::vector
	/*
	std::vector<int> vector;
	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);
	vector.push_back(60);
	vector.push_back(70);

	vector.pop_back();
	vector.pop_back();
	vector.pop_back();
	vector.pop_back();
	vector.pop_back();

	std::cout << "capacity = " << vector.capacity() << std::endl;

	for (int i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << std::endl;
	}
	*/

	// �������
	std::vector<const char* > vector;
	


	while(1)
	{

		if (_kbhit())
		{
			= _getch();

			{

			}




		}
	}

	






#pragma endregion

	return 0;
}
