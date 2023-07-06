#pragma once
#include <iostream>

// STL <list ���̺귯��>
#include <list>

// STL <map ���̺귯��>
#include <map>

// STL <set ���̺귯��>
#include <set>

using namespace std;

int main()
{
#pragma region ���� �����̳�
	// Key�� valueó�� �����ִ� �����͸� �ϳ��� ������
	//�����ϴ� �����̳��Դϴ�.

	// std::list
	/*
	// std::list<< std::list<int> list;

	//list.push_front(100);
	//list.push_back(45);
	//list.push_back(33);
	//list.push_back(11);
	//list.push_back(7);
	
	//iterator
	//std::list<int>::iterator iter;
	
	// for (iter = list.begin(); iter != list.end(); iter++)
	//{
		//std::cout << "List�� �� : " << *iter << std::endl;
	//}

	//list.pop_front(); // 45, 33, 11, 7
	//list.pop_back(); // 45, 33, 11

	//iter = list.begin();
	 
	//iter++;
	
	//list.insert(iter, 99);
	//list.erase(iter);
	 
	//std::cout << std::endl;

	//for (iter = list.begin(); iter != list.end(); iter++)
	//{
	//std::cout << "List�� �� : " << *iter << std::endl;
	//}
	*/

	// std::map
	/*
	std::map<const char*, int> map;


	map.insert(pair<const char*, int>("Sword", 1000));
	map.insert(pair<const char*, int>("Shoes", 500));


	std::map<const char*, int>::iterator mapIterator;

	for (mapIterator = map.begin(); mapIterator != map.end(); mapIterator++)
	{
		// mapIterator->first
		// mapIterator->second
		std::cout << "KEY : " << mapIterator->first << " VALUE : " << mapIterator->second << std::endl;
	}

	// map.find() : KEY�� �˻��ϴ� �Լ��Դϴ�.
	if (map.find("Sw") != map.end())
	{
		std::cout << "KEY�� �����մϴ�." << std::endl;
	}
	else
	{
		std::cout << "KEY�� �������� �ʽ��ϴ�." << std::endl;
	}
	*/

	// std::set
	std::set<int> set;

	set.insert(45);
	set.insert(96);
	set.insert(7);
	set.insert(12);

	// clear() : ��� ���Ҹ� �����ϴ� �Լ��Դϴ�.
	set.clear();

	// set�� �ڵ����� ������ �Ͼ�ϴ�.
	for (auto& element : set)
	{
		std::cout << element << std::endl;
	}


#pragma endregion


	return 0;
}
