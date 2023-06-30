#pragma once
#include <iostream>
#include "IPhone.h"

using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ �����
// �� �ֵ��� �������ִ� ����Դϴ�.

class Parent
{
public:
    Parent()
    {
        cout << "Parent() Ŭ���� ����" << endl;
    }

    ~Parent()
    {
        cout << "Parent() Ŭ���� �Ҹ�" << endl;
    }

    void Speak(int a)
    {
        // this ������
        // �ڱ� �ڽ��� ����Ű�� �������Դϴ�.
        this->a = a;

        // this �����ʹ� ȣ��� ��ü�� ����Ű�� ��� �������Դϴ�.

        // ��� ������ �ڷ����̹Ƿ� ������ ��ü�� �ٸ� ���� 
        // ����Ű���� �� �� �����ϴ�.
        cout << this << endl;
        cout << "Speak( )" << endl;
    }

    int a;
protected:
    int b;
private:
    int c;
};

class Child : public Parent
{
public:
    Child()
    {
        // public ���
        /*
         a = 100; (o)
         b = 200; (o)
         c = 300; (x)
        */

        // protected ���
        /*
         a = 100; (o)
         b = 200; (o)
         c = 300; (x)
        */

        // private ���
        /*
            a = 100; (o)
            b = 200; (o)
            c = 300; (x)
        */

        cout << "Child() Ŭ���� ����" << endl;
    }

    ~Child()
    {
        cout << "Child() Ŭ���� �Ҹ�" << endl;
    }

    int d;
};

#pragma endregion

int main()
{
#pragma region ���
    // Child child;

    // public ��� ��
    // child.a = 999;
    // protected�� ��� �� ������ �� �ִ� ��� ������ �������� �ʽ��ϴ�.
    // private�� ��� �� ������ �� �ִ� ��� ������ �������� �ʽ��ϴ�.
#pragma endregion

#pragma region this ������
    // Parent parent1;
    // parent1.Speak(10);
    // 
    // Parent parent2;
    // parent2.Speak(20);
    // 
    // Parent parent3;
    // parent3.Speak(30);
#pragma endregion

#pragma region Ŭ������ �޸� ũ��
    // Parent p1; // int (a), (b), (c) 
    // Child c1;  // int (d)

    // cout << "Parent �������� ũ�� : " << sizeof(p1) << endl;
    // cout << "Child �������� ũ�� : " << sizeof(c1) << endl;
#pragma endregion

    IPhone iPhone14;

    iPhone14.SetControlSound(5);

    cout << iPhone14.GetVolume() << endl;

    return 0;
}

