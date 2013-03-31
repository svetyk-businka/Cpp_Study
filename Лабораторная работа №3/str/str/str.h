#include "stdafx.h"

//опис класу Ц р€док
class String
{
//в≥дкрит≥ елементи
public:
	String ();
	void AddString(char* );
	void DelString ();
	void Show(int);
	int Length();
	bool EqualsTo(char* );
	~String();

//в≥дкрит≥ елементи
private:
	char* str;		//значенн€ р€дка
	int len;		//довжина р€дка
};