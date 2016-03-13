
#include "stdafx.h"
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Написать программу по обработке одномерных массивов.
Реализацию задания оформить в виде функции пользователя.
Размеры массивов вводить с клавиатуры.
Предусмотреть ввод данных, как с клавиатуры, так и с использованием функции random().
Искомые параметры передать из функции пользователя в главную функцию по ссылке & (C)
или по указателю * (У).
*/

/* 7.	 Сумму(res_s) и количество(count_of_elements) положительных элементов, расположенных до максимального элемента. (С) */
/* BSUIR_542801_VolynecAG_OAIP_Lab_1_var7 */

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	int choice = 0;
	int N; //число элементов массива
	int max; //максимальное значение
	int index_X;
	int res_s; //сумма элементов
	int count_of_elements; //количество элементов
	srand(time(NULL));

	cout << "Введите размерность массива:\n";
	cin >> N;
	int *arr = new int[N];
	cout << "размерность массива: " << N << "\n";

	cout << "выберете способ задания элементов:\n";
	cout << " 1 - ручной ввод;\n 2 - рандомное заполнение;\n";   
	cin >> choice;

	if (choice == 1){
		for (int i = 0; i < N; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
	}
	
	
	else if (choice == 2){
		cout << "элементы массива задаются рандомно: \n";
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % 200 + 1;
		}
	}

	// выводит элементы массива вида: arr[индекс] = значение

	for (int i2 = 0; i2 < N; i2++){
		cout << "\n arr[" << i2 << "]" << " = " << arr[i2];
	}



	max = arr[0];
	for (int x = 1; x < N; x++){
		if (max <= arr[x]) {

			max = arr[x]; //дополнительно надо записывать на коком х-е это произошло. 
			index_X = x;
		}
	}
	cout << "\n максимальный элемент массива: " << max << "\n";
	cout << "\n индекс максимального элемента: " << index_X << "\n"; //для проверки


	res_s = 0;
	count_of_elements = 0;
	for (int x2 = 0; x2 < index_X + 1; x2++)
	{
		if (arr[x2] >= 0){
			res_s += arr[x2];
			count_of_elements++;
		}
	}
	cout << "\n сумма положительных элементов массива: " << res_s << "\n";
	cout << "\n количество положительных элементов массива: " << count_of_elements << "\n";

	delete[]arr;

	system("pause");
	return 0;
}

