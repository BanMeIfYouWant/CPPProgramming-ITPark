#include <iostream>
using namespace std;

/*
   ******************************
   *       if-else  tasks       *
   ******************************
*/

// task1
int main()
{
	int a = 0;
	cin >> a;
	if(a > 0)
	{
		cout << "The a is positive number" << endl;
	}else
	{
		cout << "The a is negative number" << endl;
	}
}

//task2
int main()
{
	int a = 0;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "The a is even number" << endl;
	}else
	{
		cout << "The a is odd number" << endl;
	}
}

//task3
int main()
{
	int a = 0;
	cin >> a;
	if (a > 9 && a < 100)
	{
		cout << "The a is two-digit number" << endl;
	}else
	{
		cout << "The a is not two-digit number" << endl;
	}
}

//task4
int main()
{
	int a = 0;
	cin >> a;
	if (a != 100)
	{
		cout << "The a is not in the range from 100 to 100" << endl;
	}else
	{
		cout << "The a is in the range from 100 to 100" << endl;
	}
}

//task5
int main()
{
	int a = 0;
	cin >> a;
	if (a % 3 == 0 && a % 5 == 0)
	{
		cout << "The a is divided into 3 and 5" << endl;
	}else
	{
		cout << "The a is not divided into 3 and 5" << endl;
	}
}

//task6
int main()
{
	int a = 0;
	cin >> a;
	if (a % 2 == 0 || a % 7 == 0)
	{
		cout << "The a is divided into 2 or 7" << endl;
	}else
	{
		cout << "The a is not divided into 2 or 7" << endl;
	}
}

//task7
int main()
{
	int a = 0;
	cin >> a;
	if (a > 0)
	{
		cout << a * (-1) << endl;
	}else
	{
		cout << a * (-1) << endl;
	}
}

//task8
int main()
{
	int a = 0;
	cin >> a;
	if (a > 1000)
	{
		cout << a / 10 << endl;
	}else
	{
		cout << a << endl;
	}
}

//task9
int main()
{
	int a = 0;
	cin >> a;
	if (a % 10 == 3)
	{
		cout << (a + 1)/2 << endl;
	}else
	{
		cout << a << endl;
	}
}

//task10
int main()
{
	int a = 0;
	cin >> a;
	if (a > 100)
	{
		cout << a / 100 * 100 + 80 + a % 10 << endl;
	}else
	{
		cout << a << endl;
	}
}


/*
   *********************************
   *       if-if-else  tasks       *
   *********************************
*/

//task1
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a > 0)
	{
		if (b > 0)
		{
			cout << a + b << endl;
		}else
		{
			cout << a - b << endl;
		}
	}else
	{
		if (b > 0)
		{
			cout << a * b << endl;
		}else
		{
			cout << a / b << endl;
		}
	}
}

//task2
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a % 2 != 0)
	{
		if (b % 2 == 0)
		{
			cout << "The b is even number" << endl;
		}else
		{
			cout << "The b is odd number" << endl;
		}
	}
}

//tasl3
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a > 0 && a < 10)
	{
		if (b < a)
		{
			cout << "The b less than a" << endl;
		}
		else
		{
			cout << "The b more than a" << endl;
		}
	}else
	{
		if (b > 100)
		{
			cout << "The b more than 100" << endl;
		}else
		{
			cout << "The b less than 100" << endl;
		}
	}
}

//task4
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (b < a)
	{
		if (b > 0)
		{
			cout << "The b is positive number" << endl;
		}else
		{
			cout << "The b is negative number" << endl;
		}
	}else
	{
		if (a > 0)
		{
			cout << "The a is positive number" << endl;
		}else
		{
			cout << "The a is negative number" << endl;
		}
	}
}

//task5
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a % b == 0)
	{
		if (b % 2 == 0)
		{
			cout << "The b is even number" << endl;
		}else
		{
			cout << "The b is odd number" << endl;
		}
	}else
	{
		if (a % 2 == 0)
		{
			cout << "The a is even number" << endl;
		}else
		{
			cout << "The a is odd number" << endl;
		}
	}
}

//task6
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a != 0 && a < b)
	{
		cout << b * 2 << endl;
		if (b > 10 && b < 100)
		{
			cout << b * 3 << endl;
		}else
		{
			cout << b << endl;
		}
	}
}

//task7
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if ((a >= -100 && a <= 100) && (a % 2 != 0) && (a % 10 != 1))
	{
		if ((b >= -100 && b <= 100) && (b % 2 != 0) && (b % 10 != 1))
		{
			cout << "The a and b are identical numbers" << endl;
		}else
		{
			cout << "The a and b are not identical numbers" << endl;
		}
	}
}

//task8
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a % 3 == 0 && a % 5 == 0)
	{
		if (b % 2 == 0)
		{
			if (a < 100)
			{
				cout << b * a << endl;
			}else
			{
				cout << b + a << endl;
			}
		}else
		{
			cout << a - b << endl;
		}
	}else
	{
		cout << "The a is not divided into 3 and 5. The b is equal to " << b << endl;
	}
}

//task9
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a > 10 && a < 80)
	{
		if (a < b && b != 66)
		{
			cout << a + b << endl;
		}
		if (a > b && a != 44)
		{
			cout << a - b << endl;
		}
		if (a == 44 || a == 66)
		{
			cout << a / 2 << endl;
		}
	}
}

//task10
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (a > 0 && b > 0)
	{
		if (a % 2 == 0)
		{
			cout << "The a is even number" << endl;
		}else
		{
			cout << "The a is odd number" << endl;
		}
		if (b % 2 == 0)
		{
			cout << "The b is even number" << endl;
		}else
		{
			cout << "The b is odd number" << endl;
		}
		if (a % 5 == 0 && a % 7 == 0)
		{
			cout << "The a is divided into 5 and 7" << endl;
		}else
		{
			cout << "The a is not divided into 5 and 7" << endl;
		}
		if (b % 5 == 0 && b % 7 == 0)
		{
			cout << "The b is divided into 5 and 7" << endl;
		}else
		{
			cout << "The b is not divided into 5 and 7" << endl;
		}
		if (a > b)
		{
			cout << "The a more than b" << endl;
		}else
		{
			cout << "The a less than b" << endl;
		}
	}else
	{
		if (a < -100)
		{
			cout << "The a is less than -100" << endl;
		}else
		{
			cout << "The a is more than -100" << endl;
		}
		if (b < -100)
		{
			cout << "The b is less than -100" << endl;
		}else
		{
			cout << "The b is more than -100" << endl;
		}
		if (a < -17 && a > -130)
		{
			cout << "The a is less than -17 and more than -130" << endl;
		}else
		{
			cout << "The a is more than -17 or less than -130" << endl;
		}
		if (b < -17 && b > -130)
		{
			cout << "The b is less than -17 and more than -130" << endl;
		}else
		{
			cout << "The b is more than -17 or less than -130" << endl;
		}
		if (a * b > 15000)
		{
			cout << "Multiplication of a and b more than 15.000" << endl;
		}else
		{
			cout << "Multiplication of a and b less than 15.000" << endl;
		}
	}
}