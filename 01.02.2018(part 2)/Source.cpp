#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Pototip.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "������� ����� �������, 0 - ��� ������ "; cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	������������ ������ � ���������� ����� ������������ �����.�������� ���������,
			������� ����������, �������� �� ��������� ����� � ����������(���������� ���������
			������������ �����, � �������� ����� ������ 3 ���� ����� ����� ������ ���� ����).
			���� ������������ ���� �� ������������ ����� � ��������� �� ������.*/
			int ch;
			while (true)
			{
				cout << "������� ������������ ����� "; cin >> ch;
				if (Len(ch) == 6) break;
				else
				{
					
					cout << "�� ����� �� ������������ �����!\n";
				}
				
			}
			if (lucky_number(ch) == true)
			{
				
				cout << "����� ����������!\n";
			}
			else
			{
				
				cout << "����� �� �������� ����������\n";
			}
		}
		else if (nz == 2)
		{
			/*2.	������������ ������ �������������� �����.���������� �������� � ����
			����� 1 � 2 �����, � ����� 3 � 4 �����.���� ������������ ������ �� ��������������
			����� � ������� ��������� �� ������.*/
			int ch;
			while (true)
			{
				cout << "������� �������������� ����� "; cin >> ch;
				if (Len(ch) == 4) break;
				else
				{
					
					cout << "�� ����� �� �������������� �����!\n";
				}
				
			}
			
			cout << "���������� ����� " << new_number(ch) << endl;
			
		}
		else if (nz == 3)
		{
			/*3.	�������� ��������� ���������� 200$ + ������� �� ������.������� �� 500$ - 3 % ,
			�� 500 �� 1000 � 5 % , ����� 1000 � 8 % .������������ ������ � ����������
			������� ������ ��� ���� ����������.���������� �� ��������, ���������� �������
			���������, ��������� ��� ������ 200$, ������� ����� �� �����.*/
			double prod[3];
			double zarp[3];
			
			cout << "������� ����������:\n";
			for (i = 0; i < 3; i++)
			{
				prod[i] = 300 + rand() % 1000;
				cout << i + 1 << " - " << prod[i] << " $" << endl;
			}
			cout << "������ ��������: " << best_m(prod) << endl;
			salary(prod, zarp, best_m(prod) - 1);
			cout << "�������� ����������:\n";
			for (i = 0; i < 3; i++)
			{
				cout << i + 1 << " - " << zarp[i] << " $" << endl;
			}
		}
		else if (nz == 4)
		{
			/*4.	���� �������� ������������� � �������� 50$ �� ������ 100 ����� ����.�� ������
			������ ��������� ���� �������� �� 20$. ����������� ���� :
			a.������������ ������ �������� ����� ���� � ���������� ���������, ���������,
			������� ����� ���� ��� ���� ��������
			b.������������ ������ ���������� ����� ����, ���������� ����� � ��������
			����� ��������. ���������, ������� ��� ���� ����� ��������
			c.������������ ������ ���������� ����� ���� � ���������� ���������, ����������,
			������� ����� �������� ���� � �������� �� ������.*/
			system("cls");
			cout << endl;
			int d, o, s;

			int m;
			while (true)
			{
				cout << "������� ��� ������ ���������: 1 - ���������� �����, 2 - ���������� ���������, 3 - �����, 0 - ����� ";
				cin >> m;
				if (m == 0)
				{
					break;
				}
				else if (m == 1)
				{
					cout << "������� �������� ����� "; cin >> d;
					cout << endl;
					cout << "������� ���������� ��������� "; cin >> o;
					cout << endl;
					count_s(d, o, s);
					cout << "���� ���� �������� " << s << " ����� ����, ��� ��������� " << d << " $" << endl;
				}
				else if (m == 2)
				{
					cout << "������� ���������� ����� "; cin >> s;
					cout << endl;
					cout << "������� �������� ����� "; cin >> d;
					cout << endl;
					count_o(d, o, s);
					cout << "���� ��� ��������� " << d << " $" << ", ����� �������� " << "�� " << o << " �� " << o + 2 << " ���" << endl;
				}
				else if (m == 3)
				{
					cout << "������� ���������� ����� "; cin >> s;
					cout << endl;
					cout << "������� ���������� ��������� "; cin >> o;
					cout << endl;
					count_d(d, o, s);
					cout << "���� ������� " << d << " $" << endl;
				}
				else
				{
					
					cout << "�� ����� �� ���������";
					
				}
			}
		}
		else if (nz == 5)
		{
			/*5.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � �������
			���� ��� ���������� �����*/
			
			cout << "���������� ����� � ��������� �� 100 �� 999, � 2-�� ����������� ������� - " << d_ch(100, 999) << endl;
			
		}
		else if (nz == 6)
		{
			/*6.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ���
			����� ������*/
		
			cout << "���������� ����� � ��������� �� 100 �� 999, �� ����� ������� ������� - " << r_ch(100, 999) << endl;
			
		}
		else if (nz == 7)
		{
			/*7.	������������ ������ ����� ����� �����.���������� �� ����� ������ �����
			������� ��� ����� 3 � 6 � ������� ������� �� �����.*/
			int mas[10];
			rand_arr(mas, 10);
			cout << "�����:\n";
			print_arr(mas, 10);
			clear_ch(mas, 10);
			print_arr(mas, 10);
		}
		else if (nz == 8)
		{
			/*8.	������������ ������ ����� �����.���������� ������� ��� ����� �����,
			�� ������� �������� ����� �������� ��� �������.*/
			int ch;
			ch = 1 + rand() % 300;
			cout << "����� ������� ������� �� " << ch << ", ��� �������" << endl;
			without(ch);
		}
		else if (nz == 9)
		{
			/*9.	������� �� ����� ������ ����������� �����������.������ � �������������
			����������� ��� ������ ����.*/
			int nf;
			while (true)
			{
				cout << "�������� ������ ��� ���������� �� 1 �� 5, 0 - ��� ������"; cin >> nf;
				if (nf == 0)
					break;
				else if (nf == 1)
					tr(1);
				else if (nf == 2)
					tr(2);
				else if (nf == 3)
					tr(3);
				else if (nf == 4)
					tr(4);
				else if (nf == 5)
					tr(5);
			}
		}
		else
		{
			cout << "������ ������� �� ���������� \n";
		}
	}
}