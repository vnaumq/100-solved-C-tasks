#include <iostream>  // for cin cout
#include <sstream> 
#include <string>
using namespace std;

struct stack                 // �������� �������� �����
{
	string s;
	stack* p;        // ��������� �� ��������� ������� �����
};

void  push1(stack** top, int d);
void  vyvod_stack(stack* top);
int   pop1(stack** top);

void main(void)
{
	string str, word, str1;
	stack* top = NULL;       // top � ��������� ������� �����

	cout << "Enter a string:\n ";
	getline(cin, str);
	stringstream in(str);
		push1(&top, i);      // ��������� �������� � ����

	
	vyvod_stack(top);  // ������� ���������� ����� �� �����

	while (top)
		cout << pop1(&top) << "  "; // ����������� ��������
	// �����


	vyvod_stack(top);          // ���������, ��� ���� ����
}

// ������� ��������� �������� � ������� �����  ������� 1
void push1(stack** top, int d)
{               //    top � ��������� ������ �����
	stack* pv = new stack; // ��������� ������ ��� ��������
	// �����
	pv->s = d;
	pv->p = *top;  // ��������� ����� ������� � ���������� 
	*top = pv;     // ������ ����� ������ �����
}


// ������� �������� �������� �� ������� ����� ������� 1
int pop1(stack** top)
{                    //    top � ��������� ������ �����
	int temp = (*top)->s;
	stack* pv = *top;
	*top = (*top)->p;      // ������ ����� ������ �����
	delete pv;             // ������������ ������ 
	return temp;
}

// �������  ��������� � ������ ��������� ����� �� ����� 
void vyvod_stack(stack* top)
{
	while (top)
	{
		cout << top->s << ' ';
		top = top->p; //������� � ���������� �������� �����
	}
	cout << "\n";
}


int main()
{
	
	cout << "Enter a string:\n ";
	getline(cin, str);
	stringstream in(str);
	while (in >> word)
	{
		if (word.size() == 1)
			continue;
		if (word[0] == 'p' && word[1] == 'r')
			str1 += word + ' ';
	}
	cout << str1 << "\n";
	system("pause");
	return 0;
}