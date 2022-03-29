#include <iostream>
#include <locale>
#include "private.h"
#include "ParClass.h"
#include "protected.h"
#include "public.h"

using namespace std;

/*������� 23 - ���������� ����� ������ ���������*/

template <class T>
void selected_class(T* q, int n_q) //��������� ������� ��� ���������� ������ � �������
{
	setlocale(LC_ALL, "Rus");
	int c;
	bool flag = true;
	int val; //��������� �������� �������������
	int index = 0; //����� �������, � ������� ��������
	int count = 1; //���-�� ��������, � �������� �������� ������������
	int res4 = 0; //���������� ��� ���������� ������ �������
	int selected_queue; //����� ��������� �������

	while (flag)
	{
		cout << "1 > �������� ������� �������" << endl;
		cout << "2 > ������� ������� �������" << endl;
		cout << "3 > ������� ������� �� �����" << endl;
		cout << "4 > ���������� ����� ������ ��������� (�������)" << endl;
		cout << "5 > ������� ����� �������" << endl;
		cout << "6 > ������� ���� ��������" << endl;
		cout << "7 > ������� ������� ��� ������" << endl;
		cout << "8 > ����� �������, � ������� ���������� ������" << endl;
		cout << "0 > ��������� � ������ ������-����������" << endl;
		cout << "-> ";
		cin >> c;

		switch (c)
		{
		case 1: //���������� �������� �������
			system("cls");
			cout << "������� ��������: ";
			cin >> val;
			q[index].push(val);
			cout << "�������� ��������� � �������.\n " << endl;
			break;
		case 2: //���������� �������� �������
			if (q[index].isEmpty())
			{
				cout << "������� ��� �����, ��������� ������.\n " << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				val = q[index].pop();
				cout << "����������� �������: " << val << endl;
				cout << "\n";
			}
			break;
		case 3: //����� ������� �� �����
			if (q[index].isEmpty())
			{
				cout << "������� �����, �������� ������.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				q[index].print();
				cout << "\n";
			}
			break;
		case 4: //���������� ����� ������ ���������
			if (q[index].isEmpty())
			{
				cout << "������� �����, ������� ��������� ����������.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				res4 = q[index].variant23();
				cout << "����� ������ ���������: " << res4 << endl;
				cout << "\n";
			}
			break;
		case 5: //�������� ����� �������
			if (q[index].isEmpty())
			{
				cout << "������� �����, ���������� ������.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				if (count == n_q)
				{
					cout << "���������� ������� ����� �������, ��� ��� ���������� �������� �������� ���������.\n" << endl;
					system("pause");
					break;
				}

				system("cls");
				q[count].copy(q[index]);
				cout << "������� ������� �����������. ������ ���������� ��� ������ �������.\n" << endl;
				count++; //������ � ��� ���� ��� ������� ��� ������� � ��������� 0 � 1...
			}
			break;
		case 6: //������� ���� ��������
			if (count == 1)
			{
				cout << "���������� ������ ���� �������.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "� ����� �������� ���������� �������?" << endl;
				cin >> selected_queue;

				if ((selected_queue < 0) || (selected_queue >= n_q) || (selected_queue == index))
				{
					cout << "������������ ��������!\n" << endl;
					system("pause");
					break;
				}

				if (q[selected_queue].isEmpty())
				{
					cout << "���������� ���������� �������, ��� ��� ������ ������� �����.\n" << endl;
					system("pause");
					break;
				}
				system("cls");
				q[index].merge(q[selected_queue]);
				//count++; //������ ���������� ��� ������� ��� ������� � ��������� 0, 1, 2...
				cout << "\n";
			}
			break;
		case 7: //����� ���� �������
			system("cls");
			cout << "������ �� ��������� � �������� �" << index << endl;
			cout << "������� ����� ������� (�� 0 �� " << n_q - 1 << ") , �� ������� ������ �������������: ";
			cin >> selected_queue;

			if ((selected_queue < 0) || (selected_queue >= n_q) || (selected_queue == index))
			{
				cout << "������������ �������� ��� ���������� �������� ���������!\n" << endl;
				system("pause");
			}
			else
			{
				index = selected_queue;
				count++;
				system("cls");
				cout << "�� ������������� �� ������� �" << index << endl;
				cout << "\n";
			}
			break;
		case 8:
			system("cls");
			cout << "�� ������ ��������� � �������� �" << index << endl;
			cout << "\n";
			break;
		case 0:
			cout << "\n";
			flag = false;
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int n_queue; //���������� ���������� ��������
	int c;
	int flag = 1;

	sonQueue_private* q1 = NULL;
	sonQueue_protected* q2 = NULL;
	sonQueue_public* q3 = NULL;

	//cout << "��� ����������� ���������� ��������� 1-�� ������������ �� ��!" << endl;
	cout << "������� ��������� ��������, � �������� �� ������ ��������: ";
	cin >> n_queue;
	system("cls");

	cout << "��������, � ����� �������-����������� �� ������ ��������: " << endl;

	while (flag == 1)
	{
		cout << "1 > Private (���������)" << endl;
		cout << "2 > Protected (����������)" << endl;
		cout << "3 > Public (���������)" << endl;
		cout << "0 > ����� �� ���������" << endl;
		cout << "-> ";
		cin >> c;

		switch (c)
		{
		case 1:
			q1 = new sonQueue_private[n_queue];
			system("cls");
			selected_class(q1, n_queue);
			delete[] q1;
			break;
		case 2:
			q2 = new sonQueue_protected[n_queue];
			system("cls");
			selected_class(q2, n_queue);
			delete[] q2;
			break;
		case 3:
			q3 = new sonQueue_public[n_queue];
			system("cls");
			selected_class(q3, n_queue);
			delete[] q3;
			break;
		case 0:
			flag = 0;
			break;
		default:
			system("cls");
			cout << "������������ ����!" << endl;
			break;
		}
	}

	return 0;
}
