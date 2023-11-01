// Lab_6.1_re.cpp 
// variant 22

#include <iostream>
#include <cmath>
using namespace std;

void FullArr(int t[], const int size, int a, int b, int index);
void PrintArr(int t[], const int size, int index);



int main()
{
	const int SIZE = 25;
	int a = -5, b = 12;
	int arr[SIZE]{};

	FullArr(arr, SIZE, a, b, 0);

	cout << "PRINT" << endl;
	PrintArr(arr, SIZE, 0);

	return 0;
}



void FullArr(int t[], const int size, int a, int b, int index )
{
	if (index >= size)
	{
		return;
	}

	t[index] = a + rand() % (b - a + 1);
	FullArr(t, size, a, b, index + 1);
}

void PrintArr(int t[], const int size, int index)
{
	if (index >= size)
	{
		return;
	}

	if (t[index] >= 0 || t[index] % 2 == 0)
	{
		cout << t[index] << endl;
	}

	PrintArr(t, size, index + 1);
}