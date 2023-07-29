// priority queue to fetch either min heap or max heap

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(5);
    maxi.push(10);
    maxi.push(12);
    maxi.push(4);

    cout << "size-> " << maxi.size() << endl;

    int n = maxi.size();
    for(int i=0; i<n; i++) {
        cout << maxi.top() <<" ";
        maxi.pop();
    }cout << endl;

    mini.push(12);
    mini.push(47);
    mini.push(8);
    mini.push(4);
    mini.push(1);

    int m = mini.size();
    for(int i=0; i<m; i++){
        cout << mini.top() <<" ";
        mini.pop();
    }cout << endl;

    cout << "khali hai kya bhai? --> " << mini.empty() << endl;
}