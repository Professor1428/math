#include<iostream>
using namespace std;

/*
	==;
	>= // greater than or equal to
	<= // less than or equal to
	!= 
*/

int main()
{
	int a;
	int b;
	cout << "enter number1" << endl;
	cin >> a;
	cout << "enter number2" << endl;
	cin >> b;

	if (a <= 100)
	{
		cout << "Good" << endl;
		if (b == 200)
		{
			cout << "verygood" << endl;
		}
	}
	else
	{
		cout << "Bye" << endl;
	}
}
