#include<bits/stdc++.h>
using namespace std;

/* 
    The idea behind the approach is that:
    1. we will create a vector of char for 256 elements(no. of characters in any programming language) and initialise with -1
    2. we will traverse the string and for each element we will update that element's index in the dict vector with the index in the string
    3. if a char is found repeating, greater than -1, or greater than that tracking variable, we will update that variable's value with
    the new index
*/

int main(){

    string s;
    cin>>s;

    vector<int> dict(256, -1);

    int start = -1;
    int maxLen = 0;

    for(int i = 0; i<s.size(); i++){
        if(dict[s[i]] > start){
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }

    cout<<maxLen<<endl;

    return 0;
}