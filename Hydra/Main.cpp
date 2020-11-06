#include "GlobalVariables.h"
//Finish error messages encrypter
//Fix decrypter

bool checkCorrectInput(std::string input);

int main()
{
    std::string userOption{};
    while (checkCorrectInput(userOption) == 0)
    {
        std::cout << "Would you like to decrypt, encrypt, or create a key?\n";
        std::cin >> userOption;
        if (checkCorrectInput(userOption) == 0)
        {
            std::cout << "Please enter an appropiate response.\n";
        }
    }
    if (userOption == "Create" || userOption == "create")
    {
        createKey();
        std::cout << "Completed!\n";
    }
    else if (userOption == "decrypt" || userOption == "Decrypt")
    {
        decrypt();
        std::ofstream input("input.txt");
        input << "";
    }
    else if (userOption == "encrypt" || userOption == "Encrypt")
    {
        encrypt();
    }

    
            std::cin.clear();                                                   
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    return 0;
}
bool checkCorrectInput(std::string input)
{
    return (input == "encrypt" || input == "Encrypt" || input == "decrypt" || input == "Decrypt" || input == "Create" || input == "create");
}