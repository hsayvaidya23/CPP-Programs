#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    // string str;
    // cin >> str;

    // cout << "String is =>>>" << endl;
    // cout << str << endl;

    // string str1(5, 'n');
    // cout << str1 << endl;

    // string str2 = "YashVaidya";
    // cout << str2 << endl;

    // to take a whole string sentence as a input 
    string str3;
    getline(cin, str3);
    cout << str3 << endl;

    string s1 = "fam";
    string s2 = "ily";

    // s1.append(s2);
    s1 = s1 + s2;

    cout << s1 << endl;

    cout << s1[1] << endl;

    string abc = "qwertpoiuy asdfg;lkjh zxcvb.,mn ";
    abc.clear();
    cout << abc << endl;

    string a1 = "abc";
    string a2 = "abc";
    if(! a1.compare(a2)) 
        cout << "Strings are equal" << endl;
    
    s1.clear();
    if(s1.empty())
        cout << "String is empty" << endl;

    string n = "nincompoop";
    n.erase(3, 2);
    cout << n << endl;
    
    string n2 = "nincompoop";
    cout << n2.find("com") << endl;

    // s1.insert(3, "lol");
    // cout << s1 << endl;
    // cout << s1.size() << endl;

    string ss = "YASHVAIDYA";
    cout << ss.length() << endl;
    if(ss.empty()) {
        cout << "String is empty" <<endl;
        return 1;
    }
    for (size_t i = 0; i < ss.length(); i++)
        cout << ss[i] << endl;

    string n3 = "nincompoop";
    string n4 = n3.substr(6, 4);
    cout << n4 << endl;

    // to convert string to numeric (string to integer)
    string num = "789";
    int x = stoi(num);
    cout << x + 2 << endl;

    // to convert numeric to string (integer to string)
    int y = 789;
    cout << to_string(y) + "7" << endl;

    // to sort a stringl
    string aes = "zxvcsdfipweklhduiwe";
    sort(aes.begin(), aes.end());
    cout << aes << endl;

    
    return 0;
}