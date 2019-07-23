#include <iostream>
#include <string>


int main(){
	std::string inStr;
	std::string helloStr = "hello";

	size_t symbFound = 0;
	size_t pos = 0;

	std::cin >> inStr;
	pos = inStr.find(helloStr[symbFound], pos);

	while (symbFound < 5 && pos != std::string::npos){
		pos = inStr.find(helloStr[symbFound], pos) + (symbFound == 2 ? 1 : 0);
		++symbFound;
	}

	std::cout << (symbFound == 5 ? "YES" : "NO") << std::endl; //wrong answer with "hle"

	return 0;
}
