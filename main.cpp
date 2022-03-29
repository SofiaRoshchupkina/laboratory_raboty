#include <iostream>
#include <locale>
#include "private.h"
#include "ParClass.h"
#include "protected.h"
#include "public.h"

using namespace std;

/*Вариант 23 - Нахождение суммы четных элементов*/

template <class T>
void selected_class(T* q, int n_q) //шаблонная функция для дальнейшей работы с классом
{
	setlocale(LC_ALL, "Rus");
	int c;
	bool flag = true;
	int val; //введенное значение пользователем
	int index = 0; //номер очереди, с которой работаем
	int count = 1; //кол-во очередей, с которыми работает пользователь
	int res4 = 0; //переменная для выполнения пункта задания
	int selected_queue; //номер выбранной очереди

	while (flag)
	{
		cout << "1 > Добавить элемент очереди" << endl;
		cout << "2 > Извлечь элемент очереди" << endl;
		cout << "3 > Вывести очереди на экран" << endl;
		cout << "4 > Нахождение суммы четных элементов (задание)" << endl;
		cout << "5 > Создать копию очереди" << endl;
		cout << "6 > Слияние двух очередей" << endl;
		cout << "7 > Выбрать очередь для работы" << endl;
		cout << "8 > Номер очереди, с которой происходит работа" << endl;
		cout << "0 > Вернуться к выбору класса-наследника" << endl;
		cout << "-> ";
		cin >> c;

		switch (c)
		{
		case 1: //добавление элемента очереди
			system("cls");
			cout << "Введите значение: ";
			cin >> val;
			q[index].push(val);
			cout << "Значение добавлено в очередь.\n " << endl;
			break;
		case 2: //извлечение элемента очереди
			if (q[index].isEmpty())
			{
				cout << "Очередь уже пуста, извлекать нечего.\n " << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				val = q[index].pop();
				cout << "Извлеченный элемент: " << val << endl;
				cout << "\n";
			}
			break;
		case 3: //вывод очереди на экран
			if (q[index].isEmpty())
			{
				cout << "Очередь пуста, выводить нечего.\n" << endl;
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
		case 4: //нахождение суммы четных элементов
			if (q[index].isEmpty())
			{
				cout << "Очередь пуста, задание выполнить невозможно.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				system("cls");
				res4 = q[index].variant23();
				cout << "Сумма четных элементов: " << res4 << endl;
				cout << "\n";
			}
			break;
		case 5: //создание копии очереди
			if (q[index].isEmpty())
			{
				cout << "Очередь пуста, копировать нечего.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				if (count == n_q)
				{
					cout << "Невозможно создать копию очереди, так как количество очередей достигло максимума.\n" << endl;
					system("pause");
					break;
				}

				system("cls");
				q[count].copy(q[index]);
				cout << "Очередь успешно скопирована. Теперь существует две равных очереди.\n" << endl;
				count++; //теперь у нас есть как минимум две очереди с индексами 0 и 1...
			}
			break;
		case 6: //слияние двух очередей
			if (count == 1)
			{
				cout << "Существует только одна очередь.\n" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "С какой очередью произвести слияние?" << endl;
				cin >> selected_queue;

				if ((selected_queue < 0) || (selected_queue >= n_q) || (selected_queue == index))
				{
					cout << "Некорректное значение!\n" << endl;
					system("pause");
					break;
				}

				if (q[selected_queue].isEmpty())
				{
					cout << "Невозможно произвести слияние, так как вторая очередь пуста.\n" << endl;
					system("pause");
					break;
				}
				system("cls");
				q[index].merge(q[selected_queue]);
				//count++; //теперь существует как минимум три очереди с индексами 0, 1, 2...
				cout << "\n";
			}
			break;
		case 7: //выбор иной очереди
			system("cls");
			cout << "Сейчас вы работаете с очередью №" << index << endl;
			cout << "Введите номер очереди (от 0 до " << n_q - 1 << ") , на которую хотите переключиться: ";
			cin >> selected_queue;

			if ((selected_queue < 0) || (selected_queue >= n_q) || (selected_queue == index))
			{
				cout << "Некорректное значение или количество очередей превышено!\n" << endl;
				system("pause");
			}
			else
			{
				index = selected_queue;
				count++;
				system("cls");
				cout << "Вы переключились на очередь №" << index << endl;
				cout << "\n";
			}
			break;
		case 8:
			system("cls");
			cout << "Вы сейчас работаете с очередью №" << index << endl;
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

	int n_queue; //переменная количества очередей
	int c;
	int flag = 1;

	sonQueue_private* q1 = NULL;
	sonQueue_protected* q2 = NULL;
	sonQueue_public* q3 = NULL;

	//cout << "Вас приветсвует консольная программа 1-ой лабораторной по ТП!" << endl;
	cout << "Введите колчество очередей, с которыми Вы будете работать: ";
	cin >> n_queue;
	system("cls");

	cout << "Выберите, с каким классом-наследником Вы будете работать: " << endl;

	while (flag == 1)
	{
		cout << "1 > Private (приватный)" << endl;
		cout << "2 > Protected (защищенный)" << endl;
		cout << "3 > Public (публичный)" << endl;
		cout << "0 > Выйти из программы" << endl;
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
			cout << "Некорректный ввод!" << endl;
			break;
		}
	}

	return 0;
}
