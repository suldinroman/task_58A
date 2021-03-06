#include <iostream>
#include <string>
#include <vector>

int main(){
	std::string inStr;
	std::cin >> inStr;
	
	std::vector<char> helloVect = {'h', 'e', 'l', 'l', 'o'};
	std::vector<char>::iterator helloIter = helloVect.begin();
	
	size_t pos = inStr.find(*helloIter++, 0);

	while (helloIter != helloVect.end()){
		pos = inStr.find(*helloIter, pos); 

		if(pos != std::string::npos)
			pos += (++helloIter == std::next(helloVect.begin(), 3) ? 1 : 0);
		else
			break;
	}

	std::cout << (helloIter == helloVect.end() ? "YES" : "NO") << std::endl;

	return 0;
}
