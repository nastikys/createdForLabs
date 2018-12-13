//Дано натуральне число n. Перевірити, чи можна подати n! у вигляді добутку трьох послідовних цілих чисел.
//Бойко А. ИП-81, лаб №5.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fact(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int n = 0, result = 0, factorial = 0;
	cout << "Input n value " << endl;
	cin >> n;
	factorial = fact(n);
	for (int i = 3;; i++)
	{
		int result = i * (i - 1) * (i - 2);
		if (result > factorial)
		{
			cout << "Multiplication does not exist." << endl;
			break;
		}
		else if (result < factorial)
		{
			continue;
		}
		else
		{
			cout << "Multiplication exists." << endl;
			cout << "The numbers are "<<  i  <<", "<< (i - 1) << ", "<< (i - 2) << endl;
			break;
		}

	}
	system("pause");
	return 0;
}
