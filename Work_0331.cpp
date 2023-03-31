#include <iostream>

using namespace std;


int main()
{
	int Plus = 0;
	int Result = 0;

	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			Plus += i;
		}
	}
	cout << Plus << endl;


	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << '*';
			}
		cout << endl;
	}


	int Number = 111;
	int* P = &Number;

	cout << *P << endl;
	cout << P << endl;


	return 0;
}