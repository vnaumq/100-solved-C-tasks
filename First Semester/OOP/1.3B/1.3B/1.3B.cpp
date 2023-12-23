#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;


struct student {
    char FIO[100]{};
    int age{};                       
    char sex[2]{};
    int course{};
    double perf{};
};

bool student_read(fstream& stream, student& student)     
{
    if (!stream.is_open()) {
        return false;
    }

    return !!stream.read(reinterpret_cast<char*>(&student), sizeof(student));
}

student student_generate()   
{
    student stud{};
    for (int i = 0; i < 6; i++)
        stud.FIO[i] = char('a' + (rand() % ('z' - 'a')));
    stud.FIO[7] = *strcat(stud.FIO, " ");
    for (int i = 8; i < 12; i++)
        stud.FIO[i] = char('a' + (rand() % ('z' - 'a')));
    stud.FIO[13] = *strcat(stud.FIO, " ");
    for (int i = 13; i < 19; i++)
        stud.FIO[i] = char('a' + (rand() % ('z' - 'a')));
    stud.age = 17 + rand() % 5;
    stud.course = 1 + rand() % 3;
    stud.sex[0] = (rand() % 2) ? 'F' : 'M';
    stud.perf = (rand() % 9 + 1) + (rand() % 10) / 10.0;

    return stud;
}

void student_print(const student& student)   
{
    cout << setw(10) << "FIO: " << student.FIO << setw(10) <<
        "Age: " << student.age << setw(10) <<
        "Course: " << student.course << setw(10) <<
        "Sex: " << student.sex << setw(10) <<
        "Perf: " << student.perf;

    cout << endl;
}


bool student_write(fstream& stream, const student& student)    
{
    if (!stream.is_open())
    {
        return false;
    }

    return !!stream.write(reinterpret_cast<const char*>(&student), sizeof(student));
}

void file_read(fstream& stream)
{
    student student{};

    stream.seekg(0);       
    while (stream.read(reinterpret_cast<char*>(&student), sizeof(student)))
    {
        student_print(student);
    }
}

bool file_print(fstream& stream)
{
    if (!stream.is_open())
    {
        return false;
    }

    student student{};

    stream.seekg(0);      
    while (stream.read(reinterpret_cast<char*>(&student), sizeof(student)))
    {
        student_print(student);
    }

    return true;
}


int main() {
    srand(time(NULL));
    const char* filename = "student.bin";
    const char* output = "output.bin";
    student stud;
    fstream file,file_out;
    file.open(filename, ios::binary | ios::out);
    file_out.open(output, ios::binary | ios::out);

    for (int i = 0; i < 10; i++)
    {
        stud = student_generate();
        if (!student_write(file, stud))
        {
            cerr << "failed to write";
            return 1;
        }
    }

    file.close();
    file.open(filename, ios::binary | ios::in);

    while (student_read(file, stud))
    {
        if (stud.perf > 8.0 )
        {
            if (!file_out.is_open())
            {
                cerr << "failed to open output file";
                return 3;
            }
            student_write(file_out, stud);
        }
    }

    file.close();
    file.open(filename, ios::binary | ios::in);

    if (!file_print(file))
    {
        cerr << "failed to print";
        return 2;
    }

    cout << endl;

    file_out.close();
    file.close();

    file_out.open(output, ios::binary | ios::in);
    if (!file_print(file_out))
    {
        cerr << "failed to print output file";
        return 3;
    }
    file_out.close();

    return 0;
}