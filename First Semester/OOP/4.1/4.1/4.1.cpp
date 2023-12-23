#include <iostream>
#include <string>
using namespace std;
// Абстрактный класс "Экспонат"
class Exhibit {
protected:
    string name;
    int yearCreated;
public:
    Exhibit(const string& _name, int _yearCreated) : name(_name), yearCreated(_yearCreated) {}
    virtual void Print() const {
        cout << "Тип экспоната: ";
    }
};

// Класс "Монета"
class Coin : protected Exhibit {
private:
    double denomination;
    int startYear;
    int endYear;
public:
    Coin(const string& _name, double _denomination, int _startYear, int _endYear, int _yearCreated)
        : Exhibit(_name, _yearCreated), denomination(_denomination), startYear(_startYear), endYear(_endYear) {}

    void Print() const override {
        Exhibit::Print();
        cout << "Монета" << endl;
        cout << "Наименование: " << name << endl;
        cout << "Номинал: " << denomination << endl;
        cout << "Годы использования: " << startYear << " - " << endYear << endl;
    }
};

// Класс "Холодное оружие"
class ColdWeapon : public Exhibit {
private:
    string dating;
    int startYear;
    int endYear;
public:
    ColdWeapon(const string& _name, const string& _dating, int _startYear, int _endYear, int _yearCreated)
        : Exhibit(_name, _yearCreated), dating(_dating), startYear(_startYear), endYear(_endYear) {}

    void Print() const override {
        Exhibit::Print();
        cout << "Холодное оружие" << endl;
        cout << "Наименование: " << name << endl;
        cout << "Приблизительная датировка: " << dating << endl;
        cout << "Годы использования: " << startYear << " - " << endYear << endl;
    }
};

// Класс "Картина"
class Painting : public Exhibit {
private:
    string subject;
    string author;
public:
    Painting(const string& _subject, const string& _author, int _yearCreated)
        : Exhibit("Картина", _yearCreated), subject(_subject), author(_author) {}
    void Print() const override {
        Exhibit::Print();
        cout << "Картина" << endl;
        cout << "Что изображено: " << subject << endl;
        cout << "Автор: " << author << endl;
        cout << "Год создания: " << yearCreated << endl;
    }
};

// Класс "Статуэтка"
class Statue : public Exhibit {
private:
    string subject;
    string author;
public:
    Statue(const string& _subject, const string& _author, int _yearCreated)
        : Exhibit("Статуэтка", _yearCreated), subject(_subject), author(_author) {}

    void Print() const override {
        Exhibit::Print();
        cout << "Статуэтка" << endl;
            cout << "Что изображено: " << subject << endl;
        cout << "Автор: " << author << endl;
        cout << "Год создания: " << yearCreated << endl;
    }
};

// Класс "Фотография"
class Photograph : public Exhibit {
private:
    string subject;
public:
    Photograph(const string& _subject, int _yearCreated)
        : Exhibit("Фотография", _yearCreated), subject(_subject) {}

    void Print() const override {
        Exhibit::Print();
        cout << "Фотография" << endl;
        cout << "Что изображено: " << subject << endl;
        cout << "Год создания: " << yearCreated << endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    // Создание и заполнение экспонатов
    Coin coin("Редкая монета", 10.5, 1900, 1910, 1905);
    ColdWeapon weapon("Старинный меч", "XVIII век", 1700, 1800, 1750);
    Painting painting("Пейзаж", "Иванов", 1950);
    Statue statue("Бюст Ленина", "Петров", 1975);
    Photograph photo("Портрет", 2000);

    // Вывод свойств экспонатов
    coin.Print();
    cout << endl;

    weapon.Print();
    cout << endl;

    painting.Print();
    cout << endl;

    statue.Print();
    cout << endl;

    photo.Print();
    cout << endl;

    return 0;
}
