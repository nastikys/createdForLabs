//1.Заданий цілочисельний масив В(n). Визначити різницю між його максимальним і мінімальним елементами. Поміняти місцями мінімальний та останній елементи масиву.
// Бойко А. ИП-81, лаб№ 7.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int inputNumberOfElements() {
	int n;
	cout << "Input n" << endl;
	cin >> n;
	return n;
}

int* inputArray(int n) {
	int* B = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i << "]=" << endl;
		cin >> B[i];
	}
	return B;
}

void print(int n, int B[])
{

	for (int i = 0; i < n; i++) {
		cout << B[i] << " ";
	}
	cout << endl;
}

int findDifferenceOfMaxAndMinElements(int max, int minIndex, int B[])
{
	return max - B[minIndex];
}

int* swapMinAndLastElements(int n, int minIndex, int B[])
{
	int temp;
	temp = B[minIndex];
	B[minIndex] = B[n - 1];
	B[n - 1] = temp;
	return B;
}

int main()
{
	int n, max, minIndex;
	n = inputNumberOfElements();
	int* B = inputArray(n);
	print(n, B);

	max = B[0];
	minIndex = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < B[i])
		{
			max = B[i];
		}
		if (B[minIndex] > B[i])
		{
			minIndex = i;
		}
	}

	cout << "max-min=" << findDifferenceOfMaxAndMinElements(n, minIndex, B) << endl;

	swapMinAndLastElements(n, minIndex, B);
	print(n, B);
	system("pause");
	return 0;
}
