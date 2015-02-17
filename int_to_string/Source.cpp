#include <iostream>
using namespace std;


char* int_to_string(int value, char *str)
{
	int pow10 = 1;
	for (; value / pow10 != 0; pow10 *= 10);
	pow10 /= 10;
	int i;
	for (i = 0; pow10 != 0, i < 4; ++i, pow10 /= 10)
	{
		const int div = value / pow10;
		str[i] = '0' + div;
		value -= div * pow10;
	}
	str[i] = '\0';
	return str;
}
int main()
{
	int myvalue;
	cout << "please enter an integer to convert" << endl;
	cin >> myvalue;
	char mystr[5];
	int_to_string(myvalue, mystr);
	for (int i = 0; i < sizeof(mystr); i++)
	{
		cout << mystr[i];
	}
	cout << endl;
	system("pause");
	return 0;
}