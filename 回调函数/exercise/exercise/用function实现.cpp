// exercise.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

#include <functional>

using namespace std;

//使用function函数模板类来实现
int callbackAdd(std::function<int(int, int)> func, int a, int b)
{
	return func(a, b);
}

//回调函数实现add
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 3;
	int b = 4;
	//函数调用
	int c = callbackAdd(add, a, b);
	cout << c << endl;
	system("pause");
	return 0;
}



