#include <iostream>

 namespace first{
     int x = 1;   
    }
namespace second{
    int x = 2;
}
int main(){
    // int yearBorn = 0;
    // int currentYear = 2023;
    // std::cout << "Hello World!" << std::endl;
    // std::cout << "In what year were you born?" << std::endl;
    // std::cin >> yearBorn;
    // std::cout << "Since you were born in " << yearBorn << ", that means you are probably around " << currentYear - yearBorn << " years old!" << std::endl;
    // //If you add a decimal to a variable that is declared as a int, the decimal will get truncated
    // //So if the user were to type 1999.9, it will come out as 1999.
    // //For decimals you can declare a variable as a double (Number including decimal)
    // double price = 10.99;

    // //The char data type holds a single character!If you add more than one character to a char variable it will only use the last character.
    // char grade = 'A';
    // char initital = 'N';

    // //boolean (true or false)
    // bool student = true;
    // bool isOfAge = false;
    

    // //String
    // std::string myName = "Nazareth Briseno";

    // //const
    // //Common naming convention for constants it to make all of the letters uppercase
    // const double PI = 3.14159;
    // const int LIGHT_SPEED = 299792458;

   
    // //Namespaces- Different variable values with the same name
    // int x = 0;
    // std::cout << x << std::endl;
    // //This will output 0
    // std::cout << first::x << std::endl;
    // //This will output 1
    // std::cout << second::x << std::endl;
    // //This will output 2

    // //The typedef keyword will let you rename datatypes for easier readability 
    // // typedef std::string string_t;
    // // //Now you can define a string variable with the word string instead of std::string
    // // string_t firstName = "Nazareth";
    // // std::cout << firstName;
    // //Instead of typedef you can also use the using keyword
    // using string_t = std::string;
    
    //type conversion = conversion of a value from one data type to another
    //Implicit = automcatic
    //Explicit = Precede value with new data type (Int)

        // char x = 100;
        // //This will turn the number 100 into a character which would be "d"
        
        // int correct = 8;
        // int questions = 10;
        // double score = correct/(double)questions * 100;
        // std::cout << score << "%"; 


        //cout << (insertion operator)
        // //cin >> (extraction operator)
        // std::string name;
        // std::cout << "What is your first name?: ";
        // std::cin >> name;
        // std::cout << "Your name is " << name << "!\n";
        // // std::cin.ignore();
        // //The cin will only get the first word or text without a space, if you type "The city", only The will be saved
        // //If you want to get the whole line you'll use std::getline();
        // std::string fullName; 
        // std::cout << "What is your full name?: ";
        // std::getline(std::cin >> std::ws, fullName);
        // std::cout << "Your full name is " << fullName << "!";

        std::string favIceCream;
        std::cout << "What's your favorite ice cream?: ";
        std::cin >> favIceCream;
        std::cout << "Your favorite ice cream is " << favIceCream << "!\n";

        std::string twoFavSodas;
        std::cout << "What are your two favorite sodas?: ";
        std::getline(std::cin >> std::ws, twoFavSodas);
        std::cout << "Your two favorite sodas are " << twoFavSodas << "!\n";
}//End of main
