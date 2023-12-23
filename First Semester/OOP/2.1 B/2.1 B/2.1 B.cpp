
#include <iostream>
#include <iomanip>

using namespace std;

//Vector v;
//Vector w(5);
//Vector v1(3, 0.1);
//Vector w1(w);

//template <typename T>
class Vector
{
public:
    // Конструкторы
    Vector() :m_size(0), m_capacity(0), m_data(nullptr) {}
    explicit Vector(size_t size) : m_size(size), m_capacity(size), m_data(new double[size]) {} //запрещает неявные преобразование 
    Vector(size_t size, double value) : m_size(size), m_capacity(size), m_data(new double[size])
    {
        fill(m_data, m_data + m_size, value);
    }
    Vector(const Vector& other) : m_size(other.m_size), m_capacity(other.m_capacity), m_data(new double[other.m_capacity])
    {
        copy(other.m_data, other.m_data + m_size, m_data);
    }
    
    // Деструктор
    ~Vector()
    {
        delete[] m_data;
        cout << "Destructor is working" << endl;
    }

    // Операторы

        Vector& operator=(const Vector& other)   
    {
        if (this != &other)
        {
            delete[] m_data;
            m_size = other.m_size;
            m_capacity = other.m_capacity;
            m_data = new double[m_capacity];
            copy(other.m_data, other.m_data + m_size, m_data);
        }
        return *this;
    }

    double& operator[](size_t index)      
    {

        return m_data[index];
    }

    const double& operator[](size_t index) const
    {
        return m_data[index];

    }

    // Методы
    size_t size()  const
    {
        return m_size;
    }

    size_t capacity() const
    {
        return m_capacity;
    }

    bool empty() const
    {
        return m_size == 0;
    }

    void reserve(size_t new_capacity)
    {
        if (new_capacity > m_capacity)
        {
            double* new_data = new double[new_capacity];
            copy(m_data, m_data + m_size, new_data);
            delete[] m_data;
            m_data = new_data;
            m_capacity = new_capacity;
        }
    }

    void resize(size_t new_size)
    {
        if (new_size > m_capacity)
        {
            reserve(new_size);
        }
        if (new_size > m_size)
        {
            fill(m_data + m_size, m_data + new_size, double());
        }
        m_size = new_size;
    }

    void push_back(const double& value)
    {
        if (m_size == m_capacity)
        {
            reserve(m_capacity == 0 ? 1 : m_capacity * 2);
        }
        m_data[m_size++] = value;
    }

    void pop_back()
    {
        --m_size;
    }
    void erase(int position)
    {
        for (int i = position; i < m_size - 1; i++)
        {
            m_data[i] = m_data[i + 1];
        }
        pop_back();
    }
    void print()
    {
        for (int i = 0; i < m_size - 1; i++)
        {
            cout << setw(8) << m_data[i];
        }
    }

    double& front()
    {
        return m_data[0];
    }

    const double& front() const
    {
        return m_data[0];
    }

    double& back()
    {
        return m_data[m_size - 1];
    }

    const double& back() const
    {
        return m_data[m_size - 1];
    }

    double* data()
    {
        return m_data;
    }

    const double* data() const
    {
        return m_data;
    }

    // Итераторы
    typedef double* iterator;
    typedef const double* const_iterator;

    iterator begin()
    {
        return m_data;
    }

    const_iterator begin() const
    {
        return m_data;
    }

    iterator end()
    {
        return m_data + m_size;
    }

    const_iterator end() const
    {
        return m_data + m_size;
    }
    // Перегрузка оператора ввода
    friend std::istream& operator>>(std::istream& in, Vector& v) {
        for (int i = 0; i < v.m_size - 1; i++) {
            in >> v.m_data[i];
        }
        return in;
    }

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& out, const Vector& v) {
        for (int i = 0; i < v.m_size - 1; i++) {
            out << v.m_data[i] << " ";
        }
        return out;
    }
private:
    size_t m_size;
    size_t m_capacity;
    double* m_data;
};

void main()
{

    int q = 3; 
    int* r = &q;
    int w = 6; 
    int* t = &w; 
    r = t; 
    *t = 68; 
    

    cout << *r <<"   "<<*t << endl;
    
    double n = 0, x = 0, size = 0;
    setlocale(LC_ALL, "rus");
    cout << "Введите n" << endl;
    cin >> n;
    size = n;
    Vector vector1(size + 1);
    Vector vector2(size + 1);
    Vector vector3(size + 1);
    for (double i = 0; i < n; i++)
    {
        vector2[i] = x;
    }
    for (double i = 0; i < n; i++)
    {
        vector3[i] = x;
    }
    for (double i = 0; i < n; i++)
    {
        cin >> x;
        vector1[i] = x;
        if (x > 0 && x < 10000)
        {
            vector2[x]++;
        }
    }
    int k = 0;
    for (double i = size - 1; i >= 1; i--)
    {
        if (vector2[i] > 1)
        {
            vector3[k] = i;
            k++;
        }
    }
    vector3.resize(k + 1);
    vector3.print();
    cout << endl;
    cout << endl;
}
