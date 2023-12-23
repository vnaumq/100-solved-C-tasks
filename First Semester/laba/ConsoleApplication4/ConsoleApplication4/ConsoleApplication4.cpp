#include <iostream> 
using namespace std;
int main()
{
	int n, z = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) 
	{
		bool prostoe = true;
		for (int x = 2; x <= sqrt(i); x++)
		{
			if (i % x == 0)
			{
				prostoe = false;
			}
		}
		if (prostoe)
		{
			z += i;
		}
	}
	cout << z;
}