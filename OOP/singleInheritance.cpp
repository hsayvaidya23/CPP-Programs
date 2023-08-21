#include<iostream>
using namespace std;

class A {
    public: 
    void funcA() {
        cout << "Inherited" << endl;
    }
};

class B : public A{
};

int main() {
    B b;
    b.funcA();
}