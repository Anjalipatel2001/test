#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string name;
    int age;
    cout <<"Hello world" << endl;
    cout <<"Please enter your name:" << endl;
    getline(cin , name);
    cout <<"Please enter your age" << endl;
    cin >> age;
    cout <<"Enter your salary" << endl;
    cout << "I am" <<' ' << name <<' ' << "and i am"<<' '<< age <<"years old" <<endl;
    cout <<"my salary is twenty thousand rupees" << endl;
return 0;
}


