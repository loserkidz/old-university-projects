#include <string>
#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//��� ����������� �������� ������
	setlocale(LC_ALL, "Russian");

    //������� ����
	ifstream input("input.txt");
	if (input.fail())//���� �� ���������� ������ �����
    {
        cout<<"�������� ���� input.txt �� ������";
        getch();
        return 0;
	}

	//���� �� ���������� - ����������
	//������ ���� ��� ������:
	ofstream output("output.txt");//�������� ����(��� ������)
	if (output.fail())//���� �� ���������� ������ �����
    {
        cout<<"�������� ���� output.txt �� ������";
        getch();
        return 0;
	}

	int n;//�����, ������� ���������
	int arr[4];//������, � ������� �������� ��� ������������� ����� � ����� �����
	//�����  - �������� ���������
	for (;!input.eof();)//���� �� �������� ���� - NOT end of file
	{
		int j=0;//��� �������� ������������� ���������
		//��� ���������� - �������� ��� ������ �������������, ��������� ��� ������������� - ��������� � �����
		for(int i=0; i<2 && !input.eof(); i++)
		{
			//���� �� �����:
			input>>n;
			//��������
			output<<n<<" ";
		}
		//���������� 2 �������������
		for(int i=0; i<2 && !input.eof(); i++)
		{
			//���� �� �����:
			input>>n;
			arr[i]=n;
		}
		//________________________________
		//����� � ��� � ����� ���� 4 �������������. �� ��� - ������ ��� ����� ��������, � ���������� 2 ����� - ����������
		for(int i=0; i<2 && !input.eof(); i++)
		{
			//���� �� �����:
			input>>n;
			//��������
			output<<n<<" ";
		}
		//���������� 2 ���������� ������������� �����
		for(int i=0; i<2 && !input.eof(); i++)
		{
			//���� �� �����:
			input>>n;
			arr[i+2]=n;
		}
		//�� ���������� ��� ������������� � ��� �������������. ������ - ���������� ����������� � ������� arr 4 ����� - ���� 2 ������������� � 2 �������������
		for(int i=0; i<4; i++)
			output<<arr[i]<<" ";
	}

	cout<<"END";//����������, ��� ��� ������ �������
	
    
	getch();
	return 0;
}



