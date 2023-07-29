#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);

    cout<< "finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "lower bound of 6 -> " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;

    cout << "upper bound of 6 -> " << upper_bound(v.begin(), v.end(), 6) -v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;

    swap(a, b);
    cout << "a -> "<< a << endl;
    cout <<"b -> " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout <<"String -> " << abcd << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "after rotate" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    // sort function is based on intro sort
    // intro sort is combination of three algorithm quick sort, heap sort, insertion sort
    sort(v.begin(), v.end());
    cout << "after sort" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;
}