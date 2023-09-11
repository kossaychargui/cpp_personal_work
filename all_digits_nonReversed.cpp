#include <iostream>
using namespace std;
int read_num(string message)
{
	int num;
	cout << message;
	cin >> num;
	return (num);
}
int reverse_number(int num)
{
	int remainder = 0, new_num = 0;
	while (num > 0)
	{
		remainder = num % 10;
		num /= 10;
		new_num = remainder  + new_num *10;
	}
	return (new_num);
}
void print_digits(int num)
{
	int remainder;
	num = reverse_number(num);
	//cout << endl << num << endl;
	while (num > 0)
	{
		remainder = num % 10;
		num /= 10;
		cout << remainder << endl;
	}
}
int main(void)
{
	print_digits(read_num("enter a number: "));
	return (0);
}
