
#include <iostream>
using namespace std;

const int m = 40; const int v = 6;
struct student          
{
	char name[m];
	int age;
	int cours;
	char sex[v];
	double marks;
};

student read();
void print(student);

void main()
{
	const int n = 5;
	
	student group[n];     
	for (int i = 0; i < n; i++)
	{
		group[i] = read();
	}

	for (int i = 0; i < n; i++)
	{
		print(group[i]);
	}
}



student read()      
{
	student stud;
	cout << " FIO = ";
	cin.getline(stud.name, m);       
	cout << " age = ";
	cin >> stud.age;                     
	cout << " cours = ";
	cin >> stud.cours;
	cout << " marks = ";
	cin >> stud.marks;
	cout << " sex = ";
	cin.getline(stud.sex, v);
	cin.get();
	return stud;
}
void print(student stud) 
{
	cout << " FIO = " << stud.name<<endl;
	cout << " age = " << stud.age << endl;
	cout << " cours = " << stud.cours << endl;
	cout << " sex = " << stud.sex << endl;
	cout << " marks = " << stud.marks << endl;
}

