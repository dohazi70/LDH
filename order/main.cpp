#pragma once
#include <iostream>
#include <string>
#include "order.h"
//#include "Book.h"
//#include "Student.h"
//#include "Calculator.h"

//Student Class
//int main()
//{
//	Student stu;
//
//	const char* dh_name = "dohan";
//	stu.SetInfo(dh_name, 25);
//	stu.DisplayInfo();
//
//}
// --------------------------------------------------
// Calculator
//int main()
//{
//	Calculator math;
//
//	math.add(3, 5);
//	math.sub(8, 3);
//	math.mult(42, 2);
//	math.divde(81, 9);
//
//}
// ---------------------------------------------------
// book class
//int main()
//{
//	Book bok;
//
//	std::string name, author;
//	int year;
//	std::cout << "book name input: ";
//	std::cin >> name;
//	std::cout << "book author input: ";
//	std::cin >> author;
//	std::cout << "book year input: ";
//	std::cin >> year;
//
//	bok.Setinfo(name, author, year);
//	bok.Displayinfo();
//}
void main()
{
	order ord;
	int count;
	int i;
	std::cout << "1 : ��Ű " << "2 : ��ġ " << "3 : ���� " << "4 : ��� " << std::endl;
	std::cin >> i;
	std::cout << "����: ";
	std::cin >> count;
	ord.Displayinfo(i,count);

}
// 1 ���� 3000��
// 2 ��ġ 15000��
// 3 ���� 5000��
// 4 ��� 10000��