
#include "stdafx.h"
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

/* �������� ��������� �� ��������� ���������� ��������.
���������� ������� �������� � ���� ������� ������������.
������� �������� ������� � ����������.
������������� ���� ������, ��� � ����������, ��� � � �������������� ������� random().
������� ��������� �������� �� ������� ������������ � ������� ������� �� ������ & (C)
��� �� ��������� * (�).
*/

/* 7.	 �����(res_s) � ����������(count_of_elements) ������������� ���������, ������������� �� ������������� ��������. (�) */
/* BSUIR_542801_VolynecAG_OAIP_Lab_1_var7 */

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	int choice = 0;
	int N; //����� ��������� �������
	int max; //������������ ��������
	int index_X;
	int res_s; //����� ���������
	int count_of_elements; //���������� ���������
	srand(time(NULL));

	cout << "������� ����������� �������:\n";
	cin >> N;
	int *arr = new int[N];
	cout << "����������� �������: " << N << "\n";

	cout << "�������� ������ ������� ���������:\n";
	cout << " 1 - ������ ����;\n 2 - ��������� ����������;\n";   
	cin >> choice;

	if (choice == 1){
		for (int i = 0; i < N; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
	}
	
	
	else if (choice == 2){
		cout << "�������� ������� �������� ��������: \n";
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % 200 + 1;
		}
	}

	// ������� �������� ������� ����: arr[������] = ��������

	for (int i2 = 0; i2 < N; i2++){
		cout << "\n arr[" << i2 << "]" << " = " << arr[i2];
	}



	max = arr[0];
	for (int x = 1; x < N; x++){
		if (max <= arr[x]) {

			max = arr[x]; //������������� ���� ���������� �� ����� �-� ��� ���������. 
			index_X = x;
		}
	}
	cout << "\n ������������ ������� �������: " << max << "\n";
	cout << "\n ������ ������������� ��������: " << index_X << "\n"; //��� ��������


	res_s = 0;
	count_of_elements = 0;
	for (int x2 = 0; x2 < index_X + 1; x2++)
	{
		if (arr[x2] >= 0){
			res_s += arr[x2];
			count_of_elements++;
		}
	}
	cout << "\n ����� ������������� ��������� �������: " << res_s << "\n";
	cout << "\n ���������� ������������� ��������� �������: " << count_of_elements << "\n";

	delete[]arr;

	system("pause");
	return 0;
}

