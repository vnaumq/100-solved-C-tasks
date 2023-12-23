
//#include <iostream>
//using namespace std;
//template <typename T>
//class LinkedList
//{
//private:
//    int size;
//
//public:
//    struct Node 
//    {
//        T data;
//        Node* next;
//        Node(const T& data) : data(data), next(nullptr) {}
//    };
//    Node* head;
//    Node* tail;
//    LinkedList() : head(nullptr), tail(nullptr), size(0) {}
//    LinkedList(const LinkedList& other) : head(nullptr), tail(nullptr), size(0) 
//    {
//        Node* current = other.head;
//        while (current != nullptr) 
//        {
//            insert(current->data);
//            current = current->next;
//        }
//    }
//    LinkedList& operator=(const LinkedList& other) 
//    {
//        if (this != &other) 
//        {
//            clear();
//            Node* current = other.head;
//            while (current != nullptr) 
//            {
//                insert(current->data);
//                current = current->next;
//            }
//        }
//        return *this;
//    }
//    ~LinkedList() 
//    {
//        clear();
//    }
//
//    void insert(const T& data) 
//    {
//        Node* new_node = new Node(data);
//        if (head == nullptr) 
//        {
//            head = new_node;
//            tail = new_node;
//        }
//        else 
//        {
//            tail->next = new_node;
//            tail = new_node;
//        }
//        size++;
//    }
//
//    void remove(const T& data) 
//    {
//        Node* current = head;
//        Node* previous = nullptr;
//        while (current != nullptr) 
//        {
//            if (current->data == data) 
//            {
//                if (previous == nullptr) 
//                {
//                    head = current->next;
//                }
//                else 
//                {
//                    previous->next = current->next;
//                }
//                if (current == tail) 
//                {
//                    tail = previous;
//                }
//                delete current;
//                size--;
//                return;
//            }
//            previous = current;
//            current = current->next;
//        }
//    }
//
//    Node* find(const T& data) 
//    {
//        Node* current = head;
//        while (current != nullptr) 
//        {
//            if (current->data == data)
//            {
//                return current;
//            }
//            current = current->next;
//        }
//        return nullptr;
//    }
//
//    void print()
//    {
//        Node* current = head;
//        while (current != nullptr) 
//        {
//            std::cout << current->data << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//
//    void clear() 
//    {
//        Node* current = head;
//        while (current != nullptr)
//        {
//            Node* temp = current;
//            current = current->next;
//            delete temp;
//        }
//        head = nullptr;
//        tail = nullptr;
//        size = 0;
//    }
//};
//
//int main() 
//{
//    LinkedList<char> L1;
//    LinkedList<char> L2;
//
//    int n1, n2;
//    cout << "Enter the size of L1: ";
//    cin >> n1;
//    cout << "Enter the elements of L1: ";
//    for (int i = 0; i < n1; i++) 
//    {
//        char c;
//        cin >> c;
//        L1.insert(c);
//    }
//    cout << "Enter the size of L2: ";
//    cin >> n2;
//    cout << "Enter the elements of L2: ";
//    for (int i = 0; i < n2; i++) 
//    {
//        char c;
//        cin >> c;
//        L2.insert(c);
//    }
//
//    LinkedList<char> L3;
//    typename LinkedList<char>::Node* current1 = L1.head;
//    int k = 0;
//    while (current1 != nullptr) 
//    {
//        typename LinkedList<char>::Node* current2 = L2.head;
//        bool found = true;
//        while (current2 != nullptr) 
//        {
//            if (current1->data == current2->data)
//            {
//                found = false;
//                break;
//            }
//            current2 = current2->next;
//        }


//        if (found) 
//        {
//            L3.insert(current1->data);
//            k++;
//        }
//        current1 = current1->next;
//    }
//    /*for (int i = 0; i < k; i++)
//    {
//        for (int j = 0; j < k; j++)
//        {
//            if (L3[i] == L3[j])
//            {
//                L3.clear();
//            }
//        }
//    }*/
//    L3.print();
//
//    return 0;
//}
#include <iostream>
#include <set>
using namespace std;
template <typename T>
class LinkedList
{
private:
    int size;

public:
    struct Node
    {
        T data;
        Node* next;
        Node(const T& data) : data(data), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}
    LinkedList(const LinkedList& other) : head(nullptr), tail(nullptr), size(0)
    {
        Node* current = other.head;
        while (current != nullptr)
        {
            insert(current->data);
            current = current->next;
        }
    }
    LinkedList& operator=(const LinkedList& other)
    {
        if (this != &other)
        {
            clear();
            Node* current = other.head;
            while (current != nullptr)
            {
                insert(current->data);
                current = current->next;
            }
        }
        return *this;
    }
    ~LinkedList()
    {
        clear();
    }

    void insert(const T& data)
    {
        Node* new_node = new Node(data);
        if (head == nullptr)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void remove(const T& data)
    {
        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr)
        {
            if (current->data == data)
            {
                if (previous == nullptr)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                if (current == tail)
                {
                    tail = previous;
                }
                delete current;
                size--;
                return;
            }
            previous = current;
            current = current->next;
        }
    }

    Node* find(const T& data)
    {
        Node* current = head;
        while (current != nullptr)
        {
            if (current->data == data)
            {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    void print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void clear()
    {
        Node* current = head;
        while (current != nullptr)
        {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
};

class AAA
{
    private:
    class BBB
    {
        int a; 
    public:
        BBB()
        {
            a = 10; 
        }
        void print1()
        { 
            cout << a << endl; 
        }

    };
public:
    void printA()
    {
        BBB b;
        b.print1();
    }
};
int main()
{
    srand(time(NULL));
    LinkedList<int> L1;
    LinkedList<int> L2;
    AAA a;
    a.printA();
    

    int n1, n2;
    std::cout << "Enter the size of L1: ";
    std::cin >> n1;
    std::cout << "Elements of L1: ";
    for (int i = 0; i < n1; i++)
    {
        int x;
        x = rand() % 10;
        L1.insert(x);
    }
    L1.print();
    std::cout << "Enter the size of L2: ";
    std::cin >> n2;
    std::cout << "Elements of L2: ";
    for (int i = 0; i < n2; i++)
    {
        int x;
        x = rand() % 10;
        L2.insert(x);
    }
    L2.print();
    
        std::set<int> unique_elements;
        std::set<int> unique_elements1;
    typename LinkedList<int>::Node* current1 = L1.head;
    while (current1 != nullptr)
    {
        typename LinkedList<int>::Node* current2 = L2.head;
        bool found = true;
        while (current2 != nullptr)
        {
            if (current1->data == current2->data)
            {
                found = false;
                break;
            }
            current2 = current2->next;
        }
        if (found)
        {
            unique_elements.insert(current1->data);

        }
        current1 = current1->next;
    }
    typename LinkedList<int>::Node* current2 = L2.head;
    while (current2 != nullptr)
    {
        typename LinkedList<int>::Node* current1 = L1.head;
        bool found = true;
        while (current1 != nullptr)
        {
            if (current2->data == current1->data)
            {
                found = false;
                break;
            }
            current1 = current1->next;
        }
        if (found)
        {
            unique_elements1.insert(current2->data);

        }
        current2 = current2->next;
    }

    LinkedList<int> L3;
    for (int x : unique_elements )
    {
        L3.insert(x);
    }
    for (int x : unique_elements1)
    {
        L3.insert(x);
    }
    L3.print();
    return 0;
}
