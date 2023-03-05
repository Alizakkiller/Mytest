#include "students.h"
#include <iostream>

Students::Students(std::string name, double nomber)
    :m_name(name),
     m_number(nomber)
{
    m_number_of_students++;
    std::cerr<<m_number_of_students<<"-"<<m_name<<" | "<<m_number<<"\n";
}
int Students::m_number_of_students=0;
