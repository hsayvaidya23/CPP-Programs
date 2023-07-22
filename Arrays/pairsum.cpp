#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int key) {
    
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == key) {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
    //TIME COMPLEXITY ==>> O(n^2)
}

void sort(int arr[], int n){
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

bool pairsumAdv(int arr[], int n, int key) {
    int  low = 0;
    int high = n-1;

    while(low<high) {
        if(arr[low] + arr[high] ==key) {
            cout << low <<" " << high <<endl;
            return true;
        }
        else if (arr[low]+ arr[high]>key) {
            high--;
        }
        else {
            low++;
        }
    }
    return false;
    //TIME COMPLEXITY => O(n)
}

int main() {

    int n, key;
    cin >> n >> key;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, n);

    // cout << pairsum(arr, n, key) << endl;
    cout << pairsumAdv(arr, n, key) << endl;
    return 0;
}