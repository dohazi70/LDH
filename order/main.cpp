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
	std::cout << "1 : 쿠키 " << "2 : 김치 " << "3 : 우유 " << "4 : 계란 " << std::endl;
	std::cin >> i;
	std::cout << "갯수: ";
	std::cin >> count;
	ord.Displayinfo(i,count);

}
// 1 과자 3000원
// 2 김치 15000원
// 3 우유 5000원
// 4 계란 10000원