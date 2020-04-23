#include "sdt.h"
int main()//Программа является учебной 
{
	cout << "Enter: A and B";
	int a, b;
	cin >> a >> b;
	cout << "A+B" + (a + b) << '\n'
		<< "A-B" + (a - b) << '\n'

		<< "A*B" + (a * b);
	return 0;
}