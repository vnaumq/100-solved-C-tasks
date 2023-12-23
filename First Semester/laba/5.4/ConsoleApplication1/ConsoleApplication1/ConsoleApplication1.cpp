#include <iostream>
#include <ctime>
using namespace std;
int mass2(int num)
{
	int* arr = new int[num]; 
	srand(time(NULL));
	for (int i = 0; i < num; i++)
	{
		arr[i] = (rand() % 10); 
		cout << dec << "Znachenie " << i << " elementa " << arr[i] << endl;
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i];
	}
	return 0;
}
int main()
{
	int num;
	cout << "Vvedite razmer massiva: " << endl;
	cin >> num;
	mass2(num);
}