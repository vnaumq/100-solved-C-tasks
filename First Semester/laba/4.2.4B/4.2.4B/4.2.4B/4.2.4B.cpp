#include <iostream>  
using namespace std;
void main()
{
	const char MAX = 80;
	char str[MAX] = { 0 };
	int n = 0;

	cout << "vvedite number v 10 ss: " << endl;
	cin >> n;
	_itoa_s(n, str, MAX, 2);
	cout << "result v 2 ss = " << str << endl;
}
