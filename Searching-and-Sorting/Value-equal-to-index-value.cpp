//https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1#

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// This is very Simple problem so no extra methods just simple methods
 vector<int>valueEqualToIndex(int arr[], int n){
    vector<int>ans;
      for(int i = 0;i < n; i++){

         if(arr[i] == i + 1)
           {
           
               ans.push_back(i+1);
           
           }
    
    }

    return ans;
}
// T.C : O(N);
// S.C : 0(N);
int main(){

        int n;
        cout<<"Enter the size of the array"<<endl;
        cin>>n;


        int arr[n];
        cout<<"Creating your array"<<endl;

        for(int i=0; i<n ; i++)
            {
                cin>>arr[i];
            }

        vector<int> ans;

        ans=valueEqualToIndex( arr , n );

        cout<<"The index is "<<ans[0];

}