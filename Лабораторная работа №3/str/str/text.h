#include "stdafx.h"
#include "str.h"

//���� ����� -����������, ���� � ����������� ������ � �����
class Text
{
//������ ��������
public:
	Text();
	int Add (char* );
	int Delete (int);
	int Clear();
	int Show_Text();
	int Number_Of_Symbols();
	int Number_Of_Appearances(char* );
//������ ��������
private:
	String * ArrayString [20];	//����� �����
	int count;					//������� ����� � �����
};

