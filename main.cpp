/*************************************************************************
	> File Name: main.cpp
	> Author: henjies
	> Mail: heshengjie2011@163.com 
	> Created Time: Thu 09 Apr 2015 10:13:31 PM CST
 ************************************************************************/
#include <iostream>
#include "tesh.h"

int sub(const int &lv, const int &rv)
{
	return lv-rv;
}

int main()
{
	int a(5),b(10);
	std::cout << "a: " << a << "b: " << b << std::endl;
	std::cout << "add:" << add(a,b) << std::endl;
	std::cout << "sub: " << sub(a,b) << std::endl;

	return 0;
}
