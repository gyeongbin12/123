#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>

// STL <array 라이브러리>
#include<array>

//STL <vector 라이브러리>
#include <vector>

using namespace std;

int main()
{
#pragma region STL 표준 템플릿 라이브러리
	// C++에서 사용할 수 있는 컨테이너 class와 알고리즘을
	// 일반화 시켜서 사용할 수 있는 자료구조를 포함하는 라이브러리입니다.

	//std::array
	/*
	std::array<int, 5> STLarray;
	STLarray[0] = 10;

	std::cout << "STLarray의 크기" << STLarray.size() << std::endl;
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

	// 리듬게임
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
