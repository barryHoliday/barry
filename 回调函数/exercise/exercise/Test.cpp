#include "stdafx.h"
#include "iostream"
#include "Test.h"
using namespace std;

//С������ǰ����
int add(int a, int b);

//С������Ľӿں���
int Add(int A, int B)
{
	return add(A, B);
}

//С��д�ľ��庯��ʵ��
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 3;
	int b = 4;
	cout << "����Add����������Ϊ��" << Add(a, b) << endl;
	system("pause");
}