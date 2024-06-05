#include "stdafx.h"
#include "iostream"
#include "Test.h"
using namespace std;

//小方需提前申明
int add(int a, int b);

//小方负责的接口函数
int Add(int A, int B)
{
	return add(A, B);
}

//小明写的具体函数实现
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 3;
	int b = 4;
	cout << "调用Add函数输出结果为：" << Add(a, b) << endl;
	system("pause");
}