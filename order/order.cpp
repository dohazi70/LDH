#include "order.h"
#include "string"
#include <iostream>


void order::Setinfo(int _i)
{
	i = _i;
}

void order::cookies(int i)
{
	std::cout << "쿠키" << std::endl;
	std::cout << "3000원" << std::endl;
	std::cout << "주문 갯수는: " << i << std::endl;
	std::cout << "총 가격은: " << i * 3000 << std::endl;
}
void order::kimch(int i)
{
	std::cout << "김치" << std::endl;
	std::cout << "15000원" << std::endl;
	std::cout << "주문 갯수는: " << i << std::endl;
	std::cout << "총 가격은: " << i * 15000 << std::endl;
}
void order::milk(int i)
{
	std::cout << "우유" << std::endl;
	std::cout << "5000원" << std::endl;
	std::cout << "주문 갯수는: " << i << std::endl;
	std::cout << "총 가격은: " << i * 5000 << std::endl;
}
void order::egg(int i)
{
	std::cout << "계란" << std::endl;
	std::cout << "3000원" << std::endl;
	std::cout << "주문 갯수는: " << i << std::endl;
	std::cout << "총 가격은: " << i * 10000 << std::endl;
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

// 1 과자 3000원
// 2 김치 15000원
// 3 우유 5000원
// 4 계란 10000원