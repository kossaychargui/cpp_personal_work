#include <iostream>
using namespace std;
float read_num(void)
{
	float num;
	cout << "enter num:";
	cin >> num;
	return (num);
}
float sum(void)
{
	float num, sum = 0;
	num = read_num();
	while (num != -99)
	{
		sum += num;
		num = read_num();
	}
	return (sum);
}
void print_sum(float result)
{
	cout << "result = " << result << endl;
}
int main(void)
{
	print_sum(sum());
	return (0);
}
