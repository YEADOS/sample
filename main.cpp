#include <iostream>
#include <string> 

using namespace std; 

void linux() {
    cout << "This is linux mint" << "\n"; 
    
}

int sum(int x, int y) {
    return x + y; 
}

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
    linux();  
    cout << getGood(input);

    int x;
    int y;
    cout << "Enter two ints: " << "\n"; 
    cin >> x;
    cin >> y; 
    cout << sum(x, y);


    return 0; 
}