#include <string>
#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	//����� ������������� ������� ����� � �������
	setlocale(LC_ALL, "Russian");

    //������� ����
	ifstream input("input.txt");
	if (input.fail())//���� �� ���������� ������ �����
    {
        cout<<"input.txt �� ����������";
        getch();
        return 0;
	}

	//���� �� ���������� - ���������� ������:

	//������� ���������� ��� �������� �������
	char c;
	//���� ������� ���������/������:
	while(!input.eof())//���� �� �������� ���� - NOT end of file
	{
		//� �������� ���������� ����� - ���� �� ������� ������ �����������, ������������ � "����" � ������� ��. ������ ����������� - � ����� �������
		//������� ������ 
		//1.- ����� "����" ������ ���� ������!
		//2.- ����������� ��������� �� �����. ���� ����� ��� - ���� �� ���������� �������� ����.
		input.get(c);//����� ����������� - ����� ���������� � ������
		
		//����� - ��������� - ���������� �� ����(!input.eof()). ����� �� ���� ������ ������.
		if (c==' ' && !input.eof() )//���� ������ ������ - �� ��������� ������ ����� ���� "����"! �� ���� - ����� �������� �����������, ������� ����� ������� �� �����
		{
			//���������� ��������, �.�. ��� ����� ���������� ��� ���������, � ���(������) ����� ����� ������� �� �����
			char c2=c;

			input.get(c);
			if (c=='-' && !input.eof())//�������� �� "����"
			{
				//��� ������� ����������� - �������� ��������� ����������� �� ����� ��� ���� ���� �� ����������
				cout<<c2<<c;
				input.get(c);
				while(c!='.' && !input.eof())
				{
					cout<<c;
					input.get(c);
				}
				cout<<c;
				cout<<endl;
			}
		}
	}

	cout<<"END";//�����.
	//��������� �����
	input.close();
	getch();//�������� ������
	return 0;
}



