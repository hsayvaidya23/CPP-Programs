#include<iostream>
#include<vector>
using namespace std;

// Put n items with given weight and values in as knapsack of capacity W to get the maximum total value in the kanpsack.

int knapsack(vector<int> value, vector<int> wt, int n, int W)
{
    if(n==0 || W==0) {
        return 0;
    }

    if(wt[n-1]>W) {
        return knapsack(value, wt, n-1, W);
    }

    return max( knapsack(value, wt, n-1, W-wt[n-1])+value[n-1] , knapsack(value, wt, n-1, W) );
}

int main()
{
    vector<int> value ={100, 50, 150};
    vector<int> wt = { 10, 20 , 30};
    int W = 50;

    cout << knapsack(value, wt, 3, W) << endl;

    return 0;
}