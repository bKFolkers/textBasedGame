// My First TextGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void welcomeScreen()
{
    std::string start = "yes";
    std::string userInput1;
    
    int inputCount = 1;
    int inputLimit = 3;
    bool maxInput = false;

    std::cout << "This game is brought to you by Tiny Rocket Studios" "\n";


    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";


    std::cout << "                      ( ) \n";
    std::cout << "                      | | \n";
    std::cout << "                      | | \n";
    std::cout << "                      | | \n";
    std::cout << "                     (| |) \n";


    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";


    std::cout << "--WELCOME TO THE WONDERFULL PLANET OF CRAFTWAR--" "\n";


    std::cout << "\n";


    std::cout << "--IN THIS WORLD YOU WILL EXPERIENCE THE MOST AMAZING TALE EVER TO BE TOLD--" "\n";


    std::cout << "\n";


    std::cout << "--TO BE ABLE TO ENJOY THIS AMAZING GAME, SOME USER INFORMATION IS REQUIRED (and possibly your mom's creditcard)--" "\n";


    std::cout << "\n";


    std::cout << "--SO LET'S GET STARTED! :D--" "\n";


    std::cout << "\n";
    std::cout << "\n";


    std::cout << "Enter 'yes' and press enter if you want to continue: ";
    std::cin >> userInput1;

    if (userInput1 == start) 
    {

        std::cout << "\n";
        std::cout << "\n";

        std::cout << "That's great, enjoy the ride! :D";

        std::cout << "\n";
        std::cout << "\n";
    }
    
    else 
    {

        if (inputCount < inputLimit) 
        {

            do 
            {
                std::cout << "\n";
                std::cout << "\n";

                std::cout << userInput1 << "? Are you sure you don't want to play? :O" "\n";

                std::cout << "\n";

                std::cout << "Enter 'yes' and press enter if you want to continue: " "\n";
                std::cin >> userInput1;
                inputCount++;

                std::cout << "\n";

            } 
            while (inputCount < inputLimit && userInput1 != start);

        }

        else 
        {
            maxInput = true;
        }
        
        if (maxInput = true) 
        {

            std::cout << "\n";
            std::cout << "\n";

            std::cout << "This is taking too long, Just enjoy the ride! >:D";

            std::cout << "\n";
            std::cout << "\n";
        }

    }

    
       
       
}

    void userDetails(std::string name, int age, std::string gender)
{
    std::cout << "Hello " << name << " you are a " << age << " year old" << gender << ", is this correct?";


}

int main()
{
    
    std::string name;
    int age;
    std::string gender;

    welcomeScreen();

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Hello";

    std::cout << "\n"; 
    std::cout << "\n";



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
