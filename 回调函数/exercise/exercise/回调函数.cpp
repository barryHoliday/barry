// exercise.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

//定义一个函数指针类型，返回值是int类型，形参是两个int类型的参数 
typedef int(*FunAdd)(int a, int b);

//调用函数指针FunAdd 方法
int callbackAdd(FunAdd pFunAdd, int a, int b)
{
	return pFunAdd(a, b);
}

//int callbackAdd(int(*FunAdd)(int a, int b), int a, int b)
//{
//	return FunAdd(a, b);
//}

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
	int c = callbackAdd((FunAdd)add, a, b);
	cout << c << endl;
	system("pause");
	return 0;	
}



