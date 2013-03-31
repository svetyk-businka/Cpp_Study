// str.cpp : Defines the entry point for the console application.
#include <conio.h>
#include <stdio.h>
#include "stdafx.h"
#include "str.h"

//опис конструктору за умовчанням
String::String()
{
	str = NULL;
	len = 0;
}

//опис методу додавання рядка
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

//опис методу видалення рядка
void String::DelString()
{
	delete [] str;
	len = 0;
}

//опис методу виведення рядка
void String::Show(int num)
{
	printf ("\n%2d: %s", num, str);
}

//опис методу обчислення кількості приголосних літер у рядку


//опис деструктора
String::~String()
{
   DelString();
}



