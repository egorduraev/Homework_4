#include <iostream>

using namespace std;

int main()
{
    //Задание 1
    std::cout<<"Task 1"<<std::endl;
    int num1= 4, num2 = 7;
    std::cout<<"Number 1= " << num1 <<", number 2 = "<< num2 <<std::endl;
    if (((num1 + num2) > 10) && ((num1 + num2) < 20)) std::cout<<"true"<<std::endl;
    else std::cout<<"false"<<std::endl;
    num2 = 3;
    std::cout<<"Number 1= " << num1 <<", number 2 = "<< num2 <<std::endl;
    if (((num1 + num2) > 10) && ((num1 + num2) < 20)) std::cout<<"true"<<std::endl;
    else std::cout<<"false"<<std::endl;
    //Задание 2
    int number = 7, d = 0, i = 1;
    std::cout<<"Task 2"<<std::endl;
    std::cout<<"Number = "<<number<<std::endl;
    while (i < number) {
        if ((number % i++) == 0) d++;
        else continue;
        if (d == 3) break;
    }
    std::cout<<"The number is "<<((d == 2)? "prime": "not prime")<<std::endl;
    //Задание 3
    std::cout<<"Task 3"<<std::endl;
    const int num3 = 4, num4 = 6;
    std::cout<<"Number 1= " << num3 <<", number 2 = "<< num4 <<std::endl;
    if (((num3 == 10) && (num4 == 10)) || ((num3 + num4) == 10)) {
        std::cout<<"true"<<std::endl;
    }
    else std::cout<<"false"<<std::endl;
    const int num5 = 10, num6 = 10;
    std::cout<<"Number 1= " << num5 <<", number 2 = "<< num6 <<std::endl;
    if (((num5 == 10) && (num6 == 10)) || ((num5 + num6) == 10)) {
        std::cout<<"true"<<std::endl;
    }
    else std::cout<<"false"<<std::endl;
    const int num7 = 8, num8 = 9;
    std::cout<<"Number 1= " << num7 <<", number 2 = "<< num8 <<std::endl;
    if (((num7 == 10) && (num8 == 10)) || ((num7 + num8) == 10)) {
        std::cout<<"true"<<std::endl;
    }
    else std::cout<<"false"<<std::endl;
    //Задание 4
    std::cout<<"Task 4"<<std::endl;
    int Y = 2008;
    std::cout<<"Year= " << Y <<std::endl;
    if (((Y % 4) == 0) && (((Y % 400) == 0) || !((Y % 100) == 0))) std::cout<<"The year is a leap year"<<std::endl;
    else std::cout<<"The year is not a leap year"<<std::endl;
    Y = 1900;
    std::cout<<"Year= " << Y <<std::endl;
    if (((Y % 4) == 0) && (((Y % 400) == 0) || !((Y % 100) == 0))) std::cout<<"The year is a leap year"<<std::endl;
    else std::cout<<"The year is not a leap year"<<std::endl;
    Y = 1600;
    std::cout<<"Year= " << Y <<std::endl;
    if (((Y % 4) == 0) && (((Y % 400) == 0) || !((Y % 100) == 0))) std::cout<<"The year is a leap year"<<std::endl;
    else std::cout<<"The year is not a leap year"<<std::endl;
    return 0;
}
