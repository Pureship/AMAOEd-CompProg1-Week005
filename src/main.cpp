#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <string>
using namespace std;

int main() {
    string section;
    cout << "Enter your section: ";
    getline(cin, section);
    cout << "*** Section: " << section << " ***" << endl;
    
    double dailyBudget;
    cout << "Enter your daily budget: ";
    cin >> dailyBudget;
    cout << "The product of the daily budget and itself is: " << dailyBudget * dailyBudget << endl;
    
    cin.ignore(); // To ignore the newline character left by cin
    
    string name, password, address;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your password: ";
    getline(cin, password);
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Hi, I am " << name << ". I live at " << address << "." << endl;
    
    _pause();
    return 0;
}