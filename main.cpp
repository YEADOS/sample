#include <iostream>
#include <string> 

std::string yo(std::string name) {
    std::string s = "Get Good ";
    return s + name;
}

int testFunction() {
    return 5; 
}

int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << testFunction(); 
    std::cout << yo("Bob");
    return 0; 
}