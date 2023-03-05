#ifndef STUDENTS_H
#define STUDENTS_H
#include<string>

class Students
{
    std::string m_name;
    double m_number;
    static int m_number_of_students;
public:
    Students(std::string name,double nomber);
};

#endif // STUDENTS_H
