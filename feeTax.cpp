#include <iostream>
using namespace std;
float read_num(string message)
{
	float num;
	cout << message;
	cin >> num;
	return (num);
}
float TaxFeeService(float billValue)
{
	return (((billValue * 1.1) * 1.16));
}
void print_total_bill(float totalBill)
{
	cout << "***********\n";
	cout << "total = " << totalBill<< endl;
}
int main(void)
{
	print_total_bill(TaxFeeService(read_num("please enter bill value:")));
	return (0);
}
