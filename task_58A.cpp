#include <iostream>
#include <string>


int main()
{
    std::string inputString;
    std::string helloString = "hello";

    unsigned int charactersFound = 0;
    unsigned int position = 0;

    std::cin >> inputString;

    while (charactersFound < 5)
	{
        if (inputString.find(helloString[charactersFound], position) == std::string::npos)
            break;

        position = inputString.find(helloString[charactersFound], position) + (charactersFound == 2 ? 1 : 0);
        ++charactersFound;
	}

    std::cout << (charactersFound == 5 ? "YES" : "NO") << std::endl;
}
