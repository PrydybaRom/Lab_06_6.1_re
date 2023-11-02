// Lab_6.1_reк.cpp 
// variant 22

#include <iostream>
#include <cmath>
using namespace std;

void FullArr(int t[], const int size, int a, int b, int index);
void PrintArr(int t[], const int size, int index);
void PrintChangeArr(int t[], const int size, int index);
int CountArr(int t[], const int size, int index);
int SumArr(int t[], const int size, int index);



int main()
{
	const int SIZE = 25;
	int a = -5, b = 12;
	int arr[SIZE]{};

	FullArr(arr, SIZE, a, b, 0);
	cout<<"Array - ";
	PrintArr(arr, SIZE, 0);

	cout << endl;
	int count = CountArr(arr, SIZE, 0);
	cout << "Length array - " << count << endl;

	int sum = SumArr(arr, SIZE, 0);
	cout << "Sum item array - " << sum << endl;

	PrintChangeArr(arr, SIZE, 0);
	cout << "Chanch Array - ";
	PrintArr(arr, SIZE, 0);

	return 0;
}


// Заповнення масиву
void FullArr(int t[], const int size, int a, int b, int index )
{
	if (index >= size)
	{
		return;
	}

	t[index] = a + rand() % (b - a + 1);
	FullArr(t, size, a, b, index + 1);
}

// Функія виводу в консоль
void PrintArr(int t[], const int size, int index)
{
	if (index >= size)
	{
		return;
	}
	if (t[index] >= 0 || t[index] % 2 == 0)
	{
		cout << t[index] << " ";
	}
	PrintArr(t, size, index + 1);
}

// Зміна елементів масива
void PrintChangeArr(int t[], const int size, int index)
{
	if (index >= size) 
	{
		return;
	}
	if (t[index] >= 0 || t[3] % 2 == 0) 
	{
		t[index] = 0;
	}
	PrintChangeArr(t, size, index + 1);
}

// Кількість елементів масива
int CountArr(int t[], const int size, int index)
{
	if (index >= size)
	{
		return 0;
	}
	return 1 + CountArr(t, size, index + 1);
}


// Сума елементів масива
int SumArr(int t[], const int size, int index)
{
	if (index >= size)
	{
		return 0;
	}

	return t[index] + SumArr(t, size, index + 1);
}