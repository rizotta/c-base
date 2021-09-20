#include<iostream>
using namespace std;

#define ARR_1
//#define CYCLIC_SHIFT

void main() 
{
	setlocale(LC_ALL, "");

#ifdef ARR_1
	const int n = 5;
	int arr[n];
	cout << "Введите значение 5 элементов массива: ";
	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}

	cout << "Массив в прямом порядке:\t";
	for (int i = 0; i < n; i++)	
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "Массив в обратном порядке:\t";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n ; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;

	cout << "Cреднее арифметическое элементов массива: " << float(sum)/ float(n) << endl;
	
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
#endif

#ifdef CYCLIC_SHIFT
	const int n = 10;
	int arr_1[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr_2[n];

	cout << "Исходный массив:\t\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr_1[i] << "\t";
	};
	cout << endl << endl;

	int shift;
	cout << "Введите величину сдвига (больше нуля - влево, иначе - вправо): "; 
	cin >> shift;

	for (int i = 0; i < n; i++)
	{
		if (shift > 0) {
			arr_2[i] = (i + shift - n < 0) ? arr_1[i + shift] : arr_1[i + shift - n];
		} else {
			arr_2[i] = (i < -shift) ? arr_1[n + shift + i] : arr_1[i + shift];
		}
	};
	cout << endl;

	cout << "Массив, сдвинутый на ";
	(shift >= 0) ? cout << shift << " влево:\t" : cout << -shift << " вправо:\t";
	for (int i = 0; i < n; i++) 
	{
		cout << arr_2[i] << "\t";
	}
	cout << endl;
#endif
}