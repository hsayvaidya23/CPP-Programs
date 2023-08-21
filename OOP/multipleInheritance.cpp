#include<iostream>
using namespace std;

class A {
    public: 
    void funcA() {
        cout << "Func A" << endl;
    }
};

class B {
    public: 
        void funcB() {
            cout << "Func B" << endl;
        }
};

class C : public A, public B {
    public:
};

int main() {
    C c;
    c.funcA();
    c.funcB();
}