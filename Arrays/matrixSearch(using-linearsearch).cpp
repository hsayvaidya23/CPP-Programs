#include<iostream>
using namespace std;


int main() {

    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cin >> arr[i][j];
    }
    

    int target;
    cin >> target;
    int flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == target) {
               flag = true;
            }
        }
    }
    
    if(flag) {
        cout<<" FOUND" << endl;
    }
    else {
        cout <<"NOT FOUND"<<endl;
    }
   
    return 0;
}