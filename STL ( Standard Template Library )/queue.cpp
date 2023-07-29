// first in first out

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("apple");
    q.push("mango");
    q.push("guava");
    q.push("banana");

    cout <<"Size before pop-> " << q.size() << endl;
    cout << "First element-> " << q.front() << endl;

    q.pop();
    cout << "Size after pop-> " << q.size() << endl;
    cout <<"First element-> " << q.front() << endl;




}