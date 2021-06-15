#include<bits/stdc++.h>
using namespace std;

/* 
    The idea of solving the problem is as follows:
    1. initially we will fix i at 0 and j at zero too
    2. we will traverse the vector with j and if encountered with zero, will increment the zero count
    3. now if zero count becomes greated than k, we will shrink the array from the right by i++
    4. keep calculating the max length of subarray in each iteration
*/

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> a(n);
    for(auto &i : a)
        cin>>i; 

    int i = 0, ans = 0, zeroCnt = 0;

    for(int j = 0; j < n; j++){
        if(a[j] == 0){
            zeroCnt++;
        }
        while(zeroCnt > k){
            if(a[i] == 0){
                zeroCnt--;
            }      
            i++;    
        }

        ans = max(ans, j-i+1);
    }
    
    cout<<ans<<endl;

    return 0;
}