// str.cpp : Defines the entry point for the console application.
#include <conio.h>
#include <stdio.h>
#include "stdafx.h"
#include "str.h"

//���� ������������ �� ����������
String::String()
{
	str = NULL;
	len = 0;
}

//���� ������ ��������� �����
void String::AddString(char* temp_string)
{
	int i;
	for (i = 0; temp_string[i] != '\0'; i++)
		len++;
	str = new char[len];
	for (i = 0; i < len; i++)
		str[i] = temp_string[i];
	str[len] = '\0';
}

//���� ������ ��������� �����
void String::DelString()
{
	delete [] str;
	len = 0;
}

//���� ������ ��������� �����
void String::Show(int num)
{
	printf ("\n%2d: %s", num, str);
}

//���� ������ ���������� ������� ����������� ���� � �����


//���� �����������
String::~String()
{
   DelString();
}



