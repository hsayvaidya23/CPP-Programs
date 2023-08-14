#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key) 
{
    if(i==n) {   // base case
        return -1;
    }

    if(arr[i] == key) {
        return i;
    }

    return firstOcc(arr, n, i+1, key);
}

int lastOcc(int arr[], int n, int i, int key)

{   
    if(i==n) {   // base case
        return -1;
    }
    
    //pehle last tak jayega aur phir wapas piche aayega
    int restArray = lastOcc(arr, n, i+1, key);

    if (restArray!= -1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }

    return -1;
    
}

int main()
{

    int arr[] = {4, 2, 1, 2, 5, 2, 7};

    cout << "firstOccurence => " << endl;
    cout << firstOcc(arr, 7, 0, 2) << endl;

    cout << "lastOccurence => " << endl;
    cout << lastOcc(arr, 7, 0, 2) << endl;

    return 0;
}