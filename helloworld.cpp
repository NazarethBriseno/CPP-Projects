#include <iostream>

 namespace first{
     int x = 1;   
    }
namespace second{
    int x = 2;
}
int main(){
    int yearBorn = 0;
    int currentYear = 2023;
    std::cout << "Hello World!" << std::endl;
    std::cout << "In what year were you born?" << std::endl;
    std::cin >> yearBorn;
    std::cout << "Since you were born in " << yearBorn << ", that means you are probably around " << currentYear - yearBorn << " years old!";
    //If you add a decimal to a variable that is declared as a int, the decimal will get truncated
    //So if the user were to type 1999.9, it will come out as 1999.
    //For decimals you can declare a variable as a double (Number including decimal)
    double price = 10.99;

    //The char data type holds a single character!If you add more than one character to a char variable it will only use the last character.
    char grade = 'A';
    char initital = 'N';

    //boolean (true or false)
    bool student = true;
    bool isOfAge = false;
    

    //String
    std::string myName = "Nazareth Briseno";

    //const
    //Common naming convention for constants it to make all of the letters uppercase
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;

   
    //Namespaces- Different variable values with the same name
    int x = 0;
    std::cout << x;
    //This will output 0
    std::cout << first::x;
    //This will output 1
    std::cout << second::x;
    //This will output 2





    return 0;
}//End of main
