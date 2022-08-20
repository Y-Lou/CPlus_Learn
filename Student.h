#include <iostream>
#include <cstring>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student
{
    private:
        string name;
        int score;
        char grade;

    public:
        Student();
        Student(const Student& St);
        Student(string name, int score);
        ~Student();
        void print();
};

#endif 