#include "stdafx.h"
#include <conio.h>
#include "text.h" 

//опис конструктору за умовчанням
Text::Text()
{
	for (int i = 0; i < 20; i++)
	{
		ArrayString [i] = NULL;
	}
	count = 0;
}

//опис методу додавання рядка у кінець тексту
int Text::Add(char *temp)
{
	if (count <= 20 && count >= 0)
	{
		ArrayString [count] = new String;
		ArrayString [count] -> AddString(temp);
		count++;
		return 0;
	}
	else
	{
		return 1;
	}
}

//опис методу видалення рядка з тексту за певним номером
int Text::Delete(int number)
{
	if (count != 0 && number <= count && number != 0)
	{
		ArrayString [number-1] -> DelString();
		delete ArrayString [number-1];
		for (int i = number - 1; i < count; i++)
		{
			ArrayString [i] = ArrayString [i + 1];
		}
		count --;
		return 0;
	}
	else
	{
		return 1;
	}
}

//опис методу очищення тексту
int Text::Clear()
{
	if (count != 0)
    {
		for (int i = 0; i < count; i++)
		{
			ArrayString [i] -> DelString();
			delete ArrayString [i];
		}
		count = 0;
		return 0;
    }
    else
	{
		return 1;
	}
}

//опис методу виведення тексту
int Text::Show_Text()
{
	if (count != 0)
	{
	   printf ("\nText begins:");
	   for (int i = 0; i < count; i++)
	   {
	      ArrayString[i] -> Show(i + 1);
	   }
	   printf ("\nText ends...  \n");
	   return 0;
	}
	else
	{
	   return 1;
	}
}

//опис методу, що загальную кількість символів у тексті
int Text::Number_Of_Symbols()
{
	int numberOfSymbols = 0;
	
	for(int i = 0; i < count; i++)
	{
		numberOfSymbols += ArrayString[i] -> Length();
	}

	printf( "\nTotal number of symbols in Text: %d", numberOfSymbols);
	return numberOfSymbols;
}

// опис методу, що рахуэ загальну кількість знайденних рядків
int Text::Number_Of_Appearances(char* string)
{
	int numberOfAppearances = 0;

	for(int i = 0; i < count; i++)
	{
		if ( ArrayString[i] -> EqualsTo(string) )
		{
			numberOfAppearances++;
		}
	}

	printf( "\nTotal number of apperances is %d" , numberOfAppearances);
	return numberOfAppearances;
}