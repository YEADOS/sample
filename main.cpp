#include <iostream>
#include <string> 

using namespace std; 

string getGood(string name) {
    string s = "Get Good ";
    return s + name;
}

int testFunction() {
    return 5; 
}

int main() {
    
    cout << "What is your Name?: ";
    string input;
    cin >> input; 
    cout << "Hello World" << endl;
    cout << testFunction() << endl; 
    cout << getGood(input);
    return 0; 
}