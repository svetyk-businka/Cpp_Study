#include "stdafx.h"

//���� ����� � �����
class String
{
//������ ��������
public:
	String ();
	void AddString(char* );
	void DelString ();
	void Show(int);
	int Length();
	bool EqualsTo(char* );
	~String();

//������ ��������
private:
	char* str;		//�������� �����
	int len;		//������� �����
};