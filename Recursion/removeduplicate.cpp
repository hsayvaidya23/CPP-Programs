// Remove all duplicates from the string
// aaaabbbeeeecdddd

#include<iostream>
using namespace std;

string removeDup(string s)
{   
    if(s.length() == 0) { // base case
        return "";
    }

    char ch=s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0]) {
        return ans;
    }
    return (ch+ans);
}

int main()
{
    cout << removeDup("aaaabbbeeeecdddd") << endl;

    return 0;
}

