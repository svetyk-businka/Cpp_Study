#include "stdafx.h"
#include <conio.h>
#include "stdlib.h"
#include "text.h"
//опис функції виведення повідомлення
void PrintMessage (char*);

void main()
{
  Text textObj;
  int choice = 0,
      numb;
  char * tmpString = new char [256];
  do {
//виведення меню
     printf ("\n 0 Exit");
     printf ("\n 1 Add String \n 2 Delete String");
     printf ("\n 3 Show Text \n 4 Clear Text");
     printf ("\n 5 Number of Symbols \n 6 Number of Apperances In Text");
     printf ("\n\n Enter your choice -> ");
//введення користувачем номера меню
     scanf ("%d", &choice);
// очищення єкрану
	 system("cls");
//оброблення вибору користувача
     switch (choice)
     {
		case 0:			//вихід з меню	
		{
		 break;
		}

		case 1:			//додавання введеного рядка до тексту 
		{
		  printf ("\nEnter new string ->  ");
		  scanf ("%s", tmpString);
		  if (textObj.Add(tmpString))
			PrintMessage ("Adding Error!!!");
		  else
		   textObj.Show_Text();
		  break;
		}

		case 2:			//видалення рядка з тексту
		{
		  textObj.Show_Text();
		  printf ("\nEnter number of deleting string ->  ");
		  scanf ("%d", &numb);
		  if (textObj.Delete(numb))
			PrintMessage ("Deleting Error!!!");
		  else
		   textObj.Show_Text();
		  break;
		}

		case 3:			//виведення тексту
		{
		  if (textObj.Show_Text())
			PrintMessage ("The text is empty");
		  break;
		}

		case 4:			//очищення тексту
		{
		  if (textObj.Show_Text())
			PrintMessage ("The text is empty");
		  else
		  {
		   textObj.Clear();
		   textObj.Show_Text();
		  }
		  break;
		}

		case 5:			//повернення загальної кількісті символів у тексті
		{
			textObj.Number_Of_Symbols();
			textObj.Show_Text();
			break;
		}

		case 6:			//повернення кількості знаходжень рядка у тексті
		{
			printf ("\nEnter string to count number of appearances -> ");
			scanf ("%s", tmpString);
			int numberOfAppearances = textObj.Number_Of_Appearances(tmpString);
			textObj.Show_Text();
			break;
		}

		default:		//введений номер не відповідає жодному пункту меню
			printf ("\nTry again!!!");
	   break;
     }
     getch();
  }
  while (choice != 0);
}

void PrintMessage (char* msg)
{
	printf ("\n%s", msg);
}