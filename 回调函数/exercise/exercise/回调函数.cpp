// exercise.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"

using namespace std;

//����һ������ָ�����ͣ�����ֵ��int���ͣ��β�������int���͵Ĳ��� 
typedef int(*FunAdd)(int a, int b);

//���ú���ָ��FunAdd ����
int callbackAdd(FunAdd pFunAdd, int a, int b)
{
	return pFunAdd(a, b);
}

//int callbackAdd(int(*FunAdd)(int a, int b), int a, int b)
//{
//	return FunAdd(a, b);
//}

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
	int c = callbackAdd((FunAdd)add, a, b);
	cout << c << endl;
	system("pause");
	return 0;	
}



