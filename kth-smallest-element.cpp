#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;



int kthelement(int arr[],int l,int r,int k){
  
priority_queue<int>mp;

for(int i=l;i<=r;i++){
  mp.push(arr[i]);

  if(mp.size()>k){
    mp.pop();
  }
  return mp.top();
}

};
int main(){



int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int i;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int ans=kthelement(arr,0,n-1,3);
cout<<ans;
return 0;

}