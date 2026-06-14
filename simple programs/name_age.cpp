/* Take name and age as input and print:
"My name is ___ and I am ___ years old" */

#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout << "enter your name :";
    cin >> name;

    cout << "enter your age : ";
    cin >> age;

    cout << "My name is " << name << " and I am " << age << " years old."; 
    return 0;
}