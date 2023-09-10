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
		new_num = new_num * 10 + remainder;
	}
	return (new_num);
}
void print_result(string message, int num)
{
	cout << message << num << endl;
}
int main(void)
{
	int num = read_num("enter a number: ");
	print_result("reversed number: ", reverse_number(num));
	return (0);
}
