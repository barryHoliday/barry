// exercise.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"

#include <functional>

using namespace std;

//ʹ��function����ģ������ʵ��
int callbackAdd(std::function<int(int, int)> func, int a, int b)
{
	return func(a, b);
}

//�ص�����ʵ��add
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 3;
	int b = 4;
	//��������
	int c = callbackAdd(add, a, b);
	cout << c << endl;
	system("pause");
	return 0;
}



