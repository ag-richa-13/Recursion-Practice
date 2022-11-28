// Check Array sorted or not using recursion

#include <iostream>

using namespace std;

bool arrSorted(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[n - 1] >= arr[n - 2]&& arrSorted(arr, n-1))
    {
        return true;
    }
} 

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<arrSorted(arr, n);
}