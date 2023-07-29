#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    cout <<"Capacity-> " << v.capacity() << endl;

    v.push_back(1); // for input in vector

    cout <<"Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout <<"Capacity-> " << v.capacity() << endl;
    
    v.push_back(3);

    //kitni memory assign hui padi hai
    cout <<"Capacity-> " << v.capacity() << endl;

    // kitne elements hai 
    cout << "Size-> " << v.size() << endl;

    cout <<"Elements at 2nd Index -> " << v.at(2) << endl;

    cout <<"Front Element-> " << v.front() << endl;
    cout <<"Back Element-> " << v.back()<<endl;

    cout << "before pop" << endl;
    for(int i:v) {
        cout << i <<" ";
    } cout << endl;

    v.pop_back(); // to remove last element

    cout << "after pop" << endl;
    for(int i:v) {
        cout <<i <<" ";
    }cout << endl;

    cout << "before clear size-> " << v.size() << endl;
    v.clear(); // to clear all elements
    cout <<"after clear size->" << v.size() << endl; 

    vector<int> a(5, 1);// to initialize the vector with capacity 5 and all the blocks with number 1
    cout << "print a" << endl;
    for(int i:a){
        cout <<i <<" ";
    }cout << endl;
    

    vector<int> last(a); // to copy the vector a to last
    cout << "print last" << endl;
    for(int i:last){
        cout <<i <<" ";
    }cout << endl;

}