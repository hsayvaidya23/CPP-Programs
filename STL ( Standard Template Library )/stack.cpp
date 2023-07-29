// last in first out

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("apple");
    s.push("mango");
    s.push("guava");
    s.push("banana");

    cout << "Top Element-> "<< s.top() << endl;

    s.pop();
    cout <<" Top Element-> "<< s.top() << endl;

    cout <<" size of stack-> " << s.size() << endl;

    cout <<" Empty or not-> " << s.empty() << endl;
}