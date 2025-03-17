#include <iostream>

class Date 
{
public:                                 
    int m_day{};   // m_ = member
    int m_month{};
    int m_year{};
};

void print_date(const Date& date)  //call by reference (no local copy)
{
    std::cout << date.m_day << "-" << date.m_month << "-" << date.m_year << std::endl;
}

int main()
{
    Date d {16, 1, 57};
    print_date(d);
    return 0;
}


