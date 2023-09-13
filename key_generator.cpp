#include <iostream>
#include <cstdlib>
using namespace std;
int read_number(string msg)
{
	int num;
	cout << msg;
	cin >> num;
	return (num);
}
int random_number(int from, int to)
{
	return (rand() % (to - from + 1) + from);
}
string generate_random_letters(void)
{
	string word = "";
	for (int i = 0; i <= 3; i++)
	{
		word += char(random_number(65, 90));
	}
	return (word);
}
string key_generator(void)
{
	string key = "";
	for (int i = 1; i <= 4; i++)
	{
		key += generate_random_letters();
		if (i < 4)
			key += '-';
	}
	return (key);
}
void keys_generator(int num)
{
	for (int i = 1; i <= num; i++)
	{
		cout << "key[" << i << "]: " << key_generator() << endl;
	}
}
int main(void)
{
	srand((unsigned)time(NULL));
	keys_generator(read_number("enter number of keys: "));
	return (0);
}
