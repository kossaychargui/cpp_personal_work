#include <iostream>
using namespace std;
/**
 * read_num - function that reads a number
 *
 * @message: message to show to the user.
 *
 * Return: the number.
 */
int read_num(string message)
{
	int num;
	cout << message;
	cin >> num;
	return (num);
}
/**
 * hours_to_days - function that converts hours to days
 *
 * @num_hours: number of hours.
 *
 * Return: the number of days.
 */
float hours_to_days(int num_hours)
{
	return ((float)num_hours / 24);
}
/**
 * hours_to_weeks - function that converts the hours to weeks
 *
 * @num_hours: number of hours.
 *
 * Return: number of weeks.
 */
float hours_to_weeks(int num_hours)
{
	return (hours_to_days(num_hours) / 7);
}
/**
 * print_num - function that prints a number of a specefic message.
 *
 * @message: message that indicate what you should enter .
 * @num: num to print.
 *
 */
void print_num(string message, float num)
{
	cout << message << num << endl;
}
/**
 * main - program that convertes hours to weeks and days
 *
 * Return: 0 on success.
 *
 */
int main(void)
{
	string message = "enter number of hours:";
	int hours = read_num(message);
	print_num("hours to days:", hours_to_days(hours));
	print_num("hours to weeks:", hours_to_weeks(hours));
	return (0);
}
