#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <queue>
#include <string.h>
using namespace std;

struct Node
{

    char* data;
    Node* next;
};

struct Queue
{
    Node* head = nullptr;
    Node* tail = nullptr;
    struct Node bd;
};

void enqueue(Queue& q, const char* data)
{
    Node* temp = new Node;
    temp->data = new char[strlen(data) + 1];
    strcpy(temp->data, data);
    temp->next = nullptr;
    if (q.tail == nullptr)
    {
        q.head = temp;
        q.tail = temp;
    }
    else
    {
        q.tail->next = temp;
        q.tail = temp;
    }
}

void dequeue(Queue& q)
{
    if (q.head == nullptr)
    {
        return;
    }
    Node* temp = q.head;
    q.head = q.head->next;
    if (q.head == nullptr)
    {
        q.tail = nullptr;
    }
    delete temp->data;
    delete temp;
}

void print(Queue& q)
{
    Node* curr = q.head;
    while (curr != nullptr)
    {
        cout << curr->data << ' ';
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    const int MAX = 80;
    char line[MAX] = { 0 };
    cin.getline(line, MAX);

    Queue q;
    char delimiter[11] = ".,:; ()!?-";
    char* word = strtok(line, delimiter);
    while (word != nullptr)
    {
        if (strncmp(word, "pr", 2) == 0)
        {
            enqueue(q, word);
        }
        word = strtok(nullptr, delimiter);
    }
    print(q);
    while (q.head != nullptr)
    {
        dequeue(q);
    }
    return 0;
}