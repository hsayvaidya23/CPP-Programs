#include<iostream>
using namespace std;

class A {
    public: 
        void funcA() {
            cout << "function A" << endl;
        }
};

class B: public A {
    public: 
        void funcB() {
            cout << "function B" << endl;
        }
};


class C: public B {
    public: 
        void funcC() {
            cout << "function C" << endl;
        }
};

int main() {
    C c;
    c.funcA();
    c.funcB();
    c.funcC();
}