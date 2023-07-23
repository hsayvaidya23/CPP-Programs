#include <iostream>
using namespace std;

// The Transpose of a matrix is the matrix flipped over its main diagonal, switching the row and column indices of the matrix. 
int main() {

    int n, m;
    cin >> n >> m;

    int A[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> A[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<m; j++){
            //swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    cout << "THE TRANSPOSE MATRIX IS =============>>>>>>>>>>>>"<< endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << A[i][j] << " ";
        } cout << endl;
    }


    return 0;
}