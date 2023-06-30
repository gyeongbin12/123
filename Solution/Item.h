#pragma once
#include <iostream>
#include <memory>

static int itemCode;

class Item
{
public:
	int price;
	std::weak_ptr<Item> ptr;

	// � �ڷ������� Ŭ���� ��� �Լ��� ��üȭ�ؾ� �ϴ���
	// �𸣱� ������ �޸𸮿� ���ǵ��� �ʾҽ��ϴ�.
	template <typename T>
	void Search(T data);

	// ��� ������ ���������� �ʽ��ϴ�.

	// cpp ���� ������ include�� ��� ���� ������
	// ����� �� �Դϴ�.

	// ������ cpp ���ϵ��� ���������� ������ �� ���Ŀ� ��������
	// �Ϸ�� ���� ������Ʈ ���� cpp���ϳ��� ��ŷ�˴ϴ�.

	// ���� �Լ�
	static void Upgrade()
	{
		itemCode = 10153;
		std::cout << "������ ���׷��̵�" << std::endl;
	}

	Item();
	~Item();
};

template<typename T>
void Item::Search(T data)
{
	std::cout << data << std::endl;
}
