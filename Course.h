#include <iostream>
#include <fstream>
using namespace std;

#ifndef COURSE_H
#define COURSE_H

class Course
{
    private:
        int numOfStds;
        const char* inputFileName;
        ifstream inputFile;
        struct Student
        {
            int id;
            int score;
            char grade;
            double deviation;
        };

        Student* students;
        double averageScore;
        double standarDeviation;
        void getinput();
        void setGrades();
        void setAverage();
        void setDeviation();
        void printResult() const;

    public:
        Course(int numOfStds,const char* inputFileName);
        ~Course();
};

#endif