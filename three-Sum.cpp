#include<bits/stdc++.h>
using namespace std;

/* 
The brute force solution goes something like this:
1. we will initialise i to 0, j = i+1 and k = j+1 and then we will try for all possible triplets
This method includes running three loops and hence O(n^3)

Slightly optimised solution can be solved as follows:
1. we will fix one element to zero initially and then we will apply two-sum problem for the rest and then increase i and continue
Two-sum problem:
    (Remember the array must be sorted)
    A variable low will start from i+1 and variable high will be equals to n-1
    then we will check if the a[i] + [low]th element plus [high]th element is equals to target or not.
    if yes return return. else low++ is less and high-- for more  
    This solves the problem in O(n^2)
*/

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[n];
    }

    int target;
    cin>>target;

    bool found = false;
    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        int low = i+1, high = n-1;
        while(low<high){
            int current = arr[i] + arr[high] + arr[low];

            if(current == target){
                found = true;
            }
            if(current > target){
                high--;
            }
            else{
                low++;
            }
        }
    }

    if(found){
        cout<<"FOUND!!!";
    }
    else{
        cout<<"NOT FOUND!!!";
    }   

    return 0;
}