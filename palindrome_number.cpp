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
bool palindrome_number(int num)
{
	int rev_num;
	rev_num = reverse_number(num);
	
	return (rev_num == num);
}
void print_result(int num)
{
	if (palindrome_number(num))
		cout << "Yes , it's a palindrome number.\n";
	else
		cout << "NO , it's not a palindrome number.\n";
}
int main(void)
{
	print_result(read_num("enter a number: "));
	return (0);
}
