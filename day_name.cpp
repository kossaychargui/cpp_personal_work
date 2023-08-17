#include <iostream>
using namespace std;
enum endays {wrong_day, sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int read_num(string message)
{
	int num;
	cout << message;
	cin >> num;
	return (num);
}
string check_day(int day)
{
	switch (day)
	{
	case sunday: 
		return ("sunday");
	case monday:
		return ("monday");
	case tuesday:
		return ("tuesday");
	case wednesday:
		return ("wednesday");
	case thursday:
		return ("thursday");
	case friday:
		return ("friday");
	case saturday:
		return ("saturday");
	default:
		return ("wrong day number!");
	}
}
void print_day(string day)
{
	cout << "its " << day << endl;
}
int main(void)
{
	print_day(check_day(read_num("enter days number:")));
	return (0);
}
