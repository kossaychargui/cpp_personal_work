#include <iostream>
using namespace std;
int read_number(void)
{
	int num;
	cout << "enter number:";
	cin >> num;
	return (num);
}
bool check_perfect_num(int num)
{
	int sum = 0, i;
	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	if (sum == num)
		return 1;
	else
		return 0;
}
void print_result(int num)
{
	if (check_perfect_num(num))
		cout << num << " is a perfect.\n";
	else
		cout << num << " is not perfect.\n";
}
int main(void)
{
	print_result(read_number());
	return (0);
}
