#include<iostream>
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
 * task_duration_in_seconds - function that converts hours, mintues, dayss
 * seconds all to seconds
 *
 * @days: number of days
 * @hours: number of hours
 * @minutes: number of minutes
 * @seconds: number of seconds.
 *
 * Return: the whole task in seconds.
 */
int task_duration_in_seconds(int days, int hours, int minutes, int seconds)
{
	int total;
	total = days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds;
	return (total);
}
/**
 * print_num - function that prints a number of a specefic message.
 *
 * @message: message that indicate what you should enter .
 * @num: num to print.
 *
 */
void print_num(string message, int num)
{
	cout << message << num << endl;
}
/**
 * main - program that calculte task duration in seconds.
 *
 * Return: 0 on success
 */
int main(void)
{
	int days, hours, minutes, seconds;
	days = read_num("enter number of days:");
	hours = read_num("enter number of hours:");
	minutes = read_num("enter number of minutes:");
	seconds = read_num("enter number of seconds:");

	print_num("total in seconds: ", task_duration_in_seconds(days, hours, minutes, seconds));
	return (0);
}
