#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <string.h>
using namespace std;

struct Node
{
    char* data;
    Node* next;
};

struct Stack
{
    Node* top = nullptr;
};

void pop(Stack& s)
{
    char* temp = s.top->data;
    s.top = s.top->next;
    delete temp;
}

void add(Stack& s, const char* data)
{
    Node* temp = new Node;
    temp->data = new char[strlen(data) + 1];
    strcpy(temp->data, data);
    temp->next = s.top;
    s.top = temp;
}

void print(Stack& s)
{
    while (s.top)
    {
        cout << s.top->data << ' ';
        s.top = s.top->next; 
    }
    cout << "\n";
}

int main()
{
    const int MAX = 80;
    char line[MAX] = { 0 };
    cin.getline(line, MAX);
    Stack st;
    char delimiter[11] = ".,:; ()!?-";
    char* word = strtok(line, delimiter);
    while (word != nullptr)
    {
        add(st, word);
        word = strtok(nullptr, delimiter);
    }
    print(st);
    while (st.top != nullptr)
    {
       pop(st);
    }
    print(st);
    return 0;
}