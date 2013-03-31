#include "stdafx.h"
#include "str.h"

//опис класу -контейнеру, €кий Ї абстракц≥Їю тексту Ц р€док
class Text
{
//в≥дкрит≥ елементи
public:
	Text();
	int Add (char* );
	int Delete (int);
	int Clear();
	int Show_Text();
	int Number_Of_Symbols();
	int Number_Of_Appearances(char* );
//закрит≥ елементи
private:
	String * ArrayString [20];	//масив р€дк≥в
	int count;					//к≥льк≥сть р€дк≥в у текст≥
};

