#include <iostream>
using namespace std;
int read_number(void)
{
	int num;
	cout << "enter number:";
	cin >> num;
	return (num);
}
bool check_prime(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}
void print_prime_numbs(int num)
{
	int i;
	for (i = 1; i < num; i++)
	{
		if (check_prime(i))
			cout << i << endl;
	}
}
int main(void)
{
	print_prime_numbs(read_number());
	return (0);
}
