#include <iostream>
using namespace std;
int read_num(void)
{
	int num;
	cout << "enter num:";
	cin >> num;
	return (num);
}
int check_prime(int num)
{
	int i;
	int result;
	for (i = 2; i <= round(num / 2); i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}
void print_result(int num)
{
	if (check_prime(num))
		cout << "Prime<3" << endl;
	else
		cout << "Not prime!" << endl;
}
int main(void)
{
	print_result(read_num());
	return (0);
}
