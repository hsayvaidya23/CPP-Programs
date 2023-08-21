#include<iostream>
using namespace std;

class student {
    string name;
    public:

    int age;
    bool gender;

    student() { // Default constructor
        cout << "Default Constructor" << endl;
    }

    student(string s, int a, int g) {
        // parameterised constructor
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }

    student(student &a) {
        // copy constructor
        cout << "Copy Constructor" << endl;
        name = a.name;
        age  = a.age ;
        gender= a.gender;
    }

    ~student() {
        cout << "Destructor called" << endl;
    }

    void setName(string s) {
        name = s;
    }

    void getName() {
        cout << name << endl;
    }

    void printInfo() {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }

    bool operator == (student &a) {
        if(name==a.name && age==a.age && gender==a.gender) {
            return true;
        }
        return false;
    }
};

int main()
{
    student a("Urvi", 20, 1);
    // a.printInfo();
    student b; 
    student c = a;

    if(c==a) {
        cout <<"Same" << endl;
    }
    else {
        cout << "Not same" << endl;
    }

    return 0;
}