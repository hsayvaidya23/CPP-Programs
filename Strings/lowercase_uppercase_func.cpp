#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s = "fasdkeiojsd";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "to uppercase => " << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << "to lowercase => " << s << endl;

    return 0;
}