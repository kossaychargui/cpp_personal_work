#include <iostream>
using namespace std;
int read_num(string message)
{
	int num;
	cout << message;
	cin >> num;
	return (num);
}
int digit_frequency(int num, int digit)
{
	int digit_count = 0, remainder;
	while (num > 0)
	{
		remainder = num % 10;
		num /= 10;
		if (remainder == digit)
			digit_count++;
	}
	return (digit_count);
}
int clear_digit(int num, int digit)
{
	int remainder = 0, new_num = 0;
	while (num > 0)
	{
		remainder = num % 10;
		num /= 10;
		if (digit == remainder)
			continue;
		else
			new_num = new_num * 10 + remainder;
	}
	return (new_num);
}
void all_digit_freqency(int num)
{
	int remainder = 0, new_num = 0;
	while (num > 0)
	{
		remainder = num % 10;
		cout << remainder << " frecuency is :" << digit_frequency(num, remainder) << endl;
		num /= 10;
		num = clear_digit(num, remainder);
	}
}
void print_result(string message, int num)
{
	cout << message << num << endl;
}
int main(void)
{
	int num = read_num("enter a number: ");
	all_digit_freqency(num);
	return (0);
}
