
#include <iostream>

int main()
{
    std::string string = "skillbox";

    std::cout << "string: " << string << "\n";
    std::cout << "length: " << string.length() << "\n";
    std::cout << string[0] << " - " << string[string.length() - 1];
}

