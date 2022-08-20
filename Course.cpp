#include "Course.h"
#include <iomanip>
#include <cmath>

Course::Course(int num, const char* ifn):numOfStds(num),inputFileName(ifn)
{
    inputFile.open(inputFileName);
    students = new Student[numOfStds];
    getinput();
    setGrades();
    setAverage();
    setDeviation();
    printResult();
}

Course::~Course()
{
    delete[] students;
    inputFile.close();
}

void Course::getinput()
{
    for(int i=0; i<numOfStds;i++)
    {
        inputFile >> students[i].id;
        inputFile >> students[i].score;
    }
}

void Course::setGrades()
{
    char charGrades[] = 
    {'F','F','F','F','F','F','D','C','B','A','A'};
    for(int i=0;i<numOfStds;i++)
    {
        int index = students[i].score/10;
        students[i].grade = charGrades[index];
    }
}

void Course::setAverage()
{
    int sum = 0;
    for(int i=0; i<numOfStds; i++)
    {
        sum += students[i].score;
    }
    averageScore = static_cast<double>(sum)/numOfStds;
}

void Course::setDeviation()
{
    standarDeviation = 0.0;
    for(int i=0; i<numOfStds; i++)
    {
        students[i].deviation = students[i].score - averageScore;
        standarDeviation += pow(students[i].deviation,2);
    }
    standarDeviation = sqrt(standarDeviation)/numOfStds;
}

void Course::printResult() const
{
    cout << endl;
    cout << "Indentity  Score  Grade  Deviation" << endl;
    cout << "---------  -----  -----  ---------" << endl;
    for(int i=0; i<numOfStds; i++)
    {
        cout << setw(4) << noshowpoint << noshowpos;
        cout << right << students[i].id;
        cout << setw(14) << noshowpoint << noshowpos;
        cout << right << students[i].score;
        cout << setw(10) << students[i].grade;
        cout << fixed << setw(20) << right << setprecision(2);
        cout << showpoint << showpos;
        cout << students[i].deviation << endl;
    }
    cout << "Average score: " << fixed << setw(4);
    cout << setprecision(2) << averageScore << endl;
    cout << "Standard Devition: " << standarDeviation;
}