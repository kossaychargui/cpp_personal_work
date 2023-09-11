#include <iostream>
using namespace std;
int read_num(string message)
{
	int num;
	cout << message;
	cin >> num;
	return (num);
}
void print_inverted_pattern(int num)
{
	int i, j;
	for (i = num; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
int main(void)
{
	print_inverted_pattern(read_num("enter a number : "));
	return (0);
}
