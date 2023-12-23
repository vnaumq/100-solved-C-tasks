#include <iostream> 

using namespace std;


typedef int newtp;
struct node
{
    newtp data;
    node* next;
    node* pred;
};

class linklist
{
private:
    node* first;
public:
    linklist() { first = NULL; }

    void push(newtp d, int pos)
    {

        node* newnode = new node;
        newnode->data = d;
        if (first == NULL)
        {
            newnode->next = newnode;
            newnode->pred = newnode;
            first = newnode;
        }
        else
        {
            node* temp = first;
            for (int i = pos; i > 1; i--, temp = temp->next);
            temp->pred->next = newnode;
            newnode->pred = temp->pred;
            newnode->next = temp;
            temp->pred = newnode;

        }
    }
    int pop(int pos);
    void clean();
    void view();
    int data_link(int number);
};


int linklist::data_link(int number)
{
    node* current = first;
    for (int i = 0; i < number; i++)
    {
        current = current->next;
    }
    int m = current->data;
    return m;
}
int linklist::pop(int pos)
{
    if (first == NULL)  return 0;
    int val;
    if (first == first->next)
    {
        val = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        node* temp = first;
        for (int i = pos; i > 1; i--, temp = temp->next);
        if (temp == first) first = temp->next;
        temp->pred->next = temp->next;
        temp->next->pred = temp->pred;
        val = temp->data;
        delete temp;
    }
    return val;
}

void linklist::clean()
{
    if (first == NULL) return;
    node* newnode = first->next;
    for (newnode = first->next; newnode != first; newnode = newnode->next) delete newnode;
    first = NULL;
}

void linklist::view()
{
    if (first == NULL) return;
    node* newnode = first;
    do
    {
        cout << newnode->data << " ";
        newnode = newnode->next;
    } while (newnode != first);
    cout << endl;
}

int main()
{
    linklist list_2;
    int size = 0, element = 0;
    setlocale(LC_ALL, "rus");
    cout << "Введите размер спика:" << endl;
    cin >> size;
    cout << "------------" << endl;
    srand(time(NULL));
    for (int i = 0; i < 2*size; i++)
    {
        element = rand() % 10;
        /*element = rand() % 20;*/
        list_2.push(element, i);
    }
    cout << "Наш Лист:" << endl;
    list_2.view();
    cout << "------------" << endl;
    int result = 0;
   
    /*for (int i = 0 ,int j = 2*size ; i < size,j>size+1; i++,j--)
    {

        result = result + list_2.data_link(i)+ list_2.data_link(j);

    }*/
    int i = 0;
    int j = 2 * size;
    while (true)
    {
     
        result = result + list_2.data_link(i) * list_2.data_link(j-1);
        cout << list_2.data_link(i) << " * " << list_2.data_link(j - 1) << " =" << list_2.data_link(i) * list_2.data_link(j - 1) << ". ";
        if (i<size)
        {
            i++; 
        }

        if (j>size+1)
        {
            j--;
        }
        cout << "Сумма " << i << " = " << result << endl;
        if (j <= size + 1 && i >= size)
        {
                break;
        }
        
    }
    cout << "------------" << endl;


}