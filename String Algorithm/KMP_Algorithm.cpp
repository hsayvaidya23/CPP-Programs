#include "bits/stdc++.h"
using namespace std;

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for(int i = 1; i<n; i++) {
        int j = pi[i-1];
        // abcabcd
        while(j>0 and s[i]!=s[j])
            j = pi[j-1];
        
        //S[0..i-1] = abc.ab
        //pi[i-1] = 2
        //S[0..i] = abc.abc
        //p[i] = j++
        if(s[i] == s[j])
            j++;
        pi[i] = j;
    }
    // Time Complexity: O(n)
    return pi;
}

int32_t main() {
    // string s = "abcabcd";
    // vector<int> res = prefix_function(s);
    // for(auto i: res) 
    //     cout << i << " ";
    // cout << endl;

    //* using KMP Algorithm
    string s = "na";
    vector<int> prefix = prefix_function(s);
    string t = "apnacollege";
    
    int pos = -1;
    int i(0), j(0); // initialize i 0 and b 0
    while(i<t.size()) {
        if(t[i] == s[j]) {
            j++;
            i++;
        }
        else {
            if(j!=0) 
                j = prefix[j-1];
            else 
                i++;
        }
        if(j == s.size()) {
            pos = i - s.size();
            break;
        }

        //Time Commplexity: O(S+T)
    }
    cout << pos;
}