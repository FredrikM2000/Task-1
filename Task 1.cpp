#include <iostream>
#include <string>

std::string Fullname = "";
char initial;
int age;
long pnumber;
int day;
int month;
int year;

int main()
{
    std::cout << "What is your name? ";
    std::getline(std::cin, Fullname);
    std::cout << "What is the initial of your name? ";
    std::cin >> initial;
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "What is your phone number? ";
    std::cin >> pnumber;
    std::cout << "What is your date of birth?\n";
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "| Name\t\t|" << Fullname
              << "\n| Initial\t|" << initial
              << "\n| Age\t\t|" << age
              << "\n| Phone number\t|" << pnumber
              << "\n| Date of birth\t|" << day << "/" << month << "/" << year;
}