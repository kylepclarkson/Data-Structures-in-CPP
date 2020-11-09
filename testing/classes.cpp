//
// Created by Kyle on 2020-11-09.
//

#include <iostream>
#include <string>
using namespace std;

void greet() {
    // Define four strings:
    string prompt ("What is your name?  "),
        name, 
        line(40, '*'),
        response = "Hello ";

    cout << prompt;

    getline(cin, name);
    // Append entered name
    response = response + name;

    cout << line << endl << response << endl;
    cout << " Your name is " << name.length() << " characters long." 
        << endl;
    cout << line << endl;
}

int main() {

    greet();
    return 0;
}