#include<iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int arr[n][m]; // for 2d array input
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "2D Matrix is \n"; // for 2d array output
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}