//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    // We can do it with 3 ways 
// first approach
vector<int>find(int arr[],int n,int x){

    // Simple run two loops from right and left and check available or not
    
    vector<int> ans;
    // Start to End
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            ans.push_back(i);
            break;
        }

    }

     // End to Start
    for(int j = n - 1; j >= 0; j--)
    {
        if(arr[j] == x)
        {
            ans.push_back(j);
            break;
        }

    }

    // If Not Found

    int i = 0;
    int j = 1;

    if(arr[i] != x) ans.push_back(-1);
    if(arr[j] != x) ans.push_back(-1);

    return ans;
}
// T.C O(N);
// S.C O(N);


// Second approach

vector<int>find2(int arr[],int n,int x){

  vector<int> ans(2,-1);

  for(int i = 0; i < n; i++)
  {
      
      if(arr[i] == x && ans[0] == - 1)
      {
          ans[0] = i;
      }

      if(arr[i] == x && ans[0] != -1)
      {
          ans[1] = i;
      }

  }

 return ans;


}
// T.C O(N);
// S.C O(N);

//  We can also do this with binary search first we have to find the first occurence then last occurence the put both function seperately.
// T.C O(Logn);
// S.C O(N);

int main(){

    int n,x;

    cout<<"Enter the size of array"<<endl;
    cin>>n;

    cout<<"Write the number which you want to find"<<endl;
    cin>>x;

    int arr[n];
    cout<<"Now create your array"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    

        vector<int> ans;
        ans=find2(arr,n,x);

        cout<<ans[0]<<" First occurence"<<endl;
        cout<<ans[1]<<" Last occurence"<<endl;
}