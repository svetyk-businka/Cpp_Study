#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <string.h>
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

//опис методу обчислення довжини рядка
int String::Length()
{
	return len;
}

//опис методу порівняння двох рядків
bool String::EqualsTo(char* string)
{
	bool isEqual = true;
	int result = strcmp(str, string);
	if ( result != 0)
	{
		isEqual = false;
	}
	return isEqual;
}

//опис деструктора
String::~String()
{
   DelString();
}