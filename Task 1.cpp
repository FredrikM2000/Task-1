#include <iostream>
#include <string>

std::string Fullname = "";
char initial;
int age;
long pnumber;
std::string birth = "";

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
    std::cout << "What is your date of birth? ";
    std::cin >> birth;
    std::cout << "| Name\t|" << Fullname
        << "\n| Initial\t|" << initial
        << "\n| Age\t|" << age
        << "\n| Phone number\t|" << pnumber
        << "\n| Birthday\t|" << birth;
}