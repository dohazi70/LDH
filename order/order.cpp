#include "order.h"
#include "string"
#include <iostream>


void order::Setinfo(int _i)
{
	i = _i;
}

void order::cookies(int i)
{
	std::cout << "��Ű" << std::endl;
	std::cout << "3000��" << std::endl;
	std::cout << "�ֹ� ������: " << i << std::endl;
	std::cout << "�� ������: " << i * 3000 << std::endl;
}
void order::kimch(int i)
{
	std::cout << "��ġ" << std::endl;
	std::cout << "15000��" << std::endl;
	std::cout << "�ֹ� ������: " << i << std::endl;
	std::cout << "�� ������: " << i * 15000 << std::endl;
}
void order::milk(int i)
{
	std::cout << "����" << std::endl;
	std::cout << "5000��" << std::endl;
	std::cout << "�ֹ� ������: " << i << std::endl;
	std::cout << "�� ������: " << i * 5000 << std::endl;
}
void order::egg(int i)
{
	std::cout << "���" << std::endl;
	std::cout << "3000��" << std::endl;
	std::cout << "�ֹ� ������: " << i << std::endl;
	std::cout << "�� ������: " << i * 10000 << std::endl;
}
void order::Displayinfo(int select, int i)
{
	if (select == 1)
	{
		order::cookies(i);
	}
	else if (select == 2)
	{
		order::kimch(i);
	}
	else if (select == 3)
	{
		order::milk(i);
	}
	else
	{
		order::egg(i);
	}
}

// 1 ���� 3000��
// 2 ��ġ 15000��
// 3 ���� 5000��
// 4 ��� 10000��