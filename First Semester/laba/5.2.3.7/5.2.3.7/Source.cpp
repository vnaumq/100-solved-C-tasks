#include <iostream>  // for cin cout
#include <sstream> 
#include <string>
using namespace std;

struct stack                 // описание элемента стека
{
	string s;
	stack* p;        // указатель на следующий элемент стека
};

void  push1(stack** top, int d);
void  vyvod_stack(stack* top);
int   pop1(stack** top);

void main(void)
{
	string str, word, str1;
	stack* top = NULL;       // top Ц указатель вершины стека

	cout << "Enter a string:\n ";
	getline(cin, str);
	stringstream in(str);
		push1(&top, i);      // добавл€ем элементы в стек

	
	vyvod_stack(top);  // выводим содержимое стека на экран

	while (top)
		cout << pop1(&top) << "  "; // выталкиваем элементы
	// стека


	vyvod_stack(top);          // провер€ем, что стек пуст
}

// функци€ занесени€ элемента в вершину стека  вариант 1
void push1(stack** top, int d)
{               //    top Ц указатель начала стека
	stack* pv = new stack; // выделение пам€ти дл€ элемента
	// стека
	pv->s = d;
	pv->p = *top;  // св€зываем новый элемент с предыдущим 
	*top = pv;     // мен€ем адрес начала стека
}


// функци€ удалени€ элемента из вершины стека вариант 1
int pop1(stack** top)
{                    //    top Ц указатель начала стека
	int temp = (*top)->s;
	stack* pv = *top;
	*top = (*top)->p;      // мен€ем адрес начала стека
	delete pv;             // освобождение пам€ти 
	return temp;
}

// функци€  просмотра и вывода элементов стека на экран 
void vyvod_stack(stack* top)
{
	while (top)
	{
		cout << top->s << ' ';
		top = top->p; //переход к следующему элементу стека
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