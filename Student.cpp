#include "Student.h"

Student::Student()
{

}

Student::Student(string nm, int sc):name(nm),score(sc)
{
    char temp[] = {'F','F','F','F','F','F','D','C','B','A','A'};
    grade = temp[score/10];
}

Student::~Student()
{

}

void Student::print()
{
    cout << "    " << left << name;
    cout << "  " << right << score;
    cout << "  " << right << grade << endl;
}