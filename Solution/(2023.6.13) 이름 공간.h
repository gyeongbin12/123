#pragma once
#include <iostream>	
using namespace std;

int data = 56;

#pragma region �̸� ����
// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

namespace A
{
	void Damage()
	{
		cout << "A ������ Damage( ) �Լ�" << endl;
	}
}

namespace B
{
	void Damage()
	{
		cout << "B ������ Damage( ) �Լ�" << endl;
	}
}
#pragma endregion


// auto�� �Ű� ������ ����� �� �����ϴ�.
void Volume(int x) // 4 byte
{

}

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.

	// (���� ������) ::

	// int data = 100;
	// 
	// // ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��
	// // ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ��
	// // �����ϹǷ� ���� ������ ȣ����� �ʽ��ϴ�.
	// std::cout << "Stack ������ �ִ� data�� �� : " << data << std::endl;
	// std::cout << "Data ������ �ִ� data�� �� : " << ::data << std::endl;
#pragma endregion

#pragma region �̸� ����
	// A::Damage();
	// B::Damage();
#pragma endregion

#pragma region auto	(�ڷ��� �߷�)
	  // ����� ������ �ʱ�ȭ ���� ����Ͽ�
	  // �ش� ������ �߷��ϵ��� �����Ϸ����� �����ϴ� ����Դϴ�.

	  // auto decimal = 6.25;
	  // auto value = 100;
	  //
	  // // auto�� ����� �� ���� �ݵ�� �־��־�� �մϴ�.
	  // // ex) auto b;
	  //
	  // // for(�ʱⰪ; ���ǽ�; ������)
	  //
	  // // ���� ��� for�� (foreach)
	  // int table[5] = { 1,2,3,4,5 };
	  //
	  // // ���� ���� ȣ��
	  // for (const auto & e : table)
	  // {
		//   std::cout << e << std::endl;
	  // }
	  //
	  // for (int i = 0; i < 5; i++)
	  // {
		//   std::cout << table[i] << std::endl;
	  // }
#pragma endregion

	return 0;
}

