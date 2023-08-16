#include <iostream>
using namespace std;
float read_num(void)
{
	float num;
	cout << "enter num:";
	cin >> num;
	return (num);
}
char read_op(void)
{
	char c;
	cout << "enter operand:";
	cin >> c;
	return (c);
}
float calculate(float num1, char op, float num2)
{
	switch (op)
	{
	case '+':
		return (num1 + num2);
	case '-':
		return (num1 - num2);
	case '*':
		return (num1 * num2);
	case '/':
		return num1 / num2;
	default:
		cout << "invalid operand!!\n";
		return (0);
	}
}
void print_operation(float result)
{
	cout << "result = " << result;
}
int main(void)
{
	int num1, num2;
	num1 = read_num();
	char c = read_op();
	num2 = read_num();
	print_operation(calculate(num1, c, num2));
	return (0);
}
