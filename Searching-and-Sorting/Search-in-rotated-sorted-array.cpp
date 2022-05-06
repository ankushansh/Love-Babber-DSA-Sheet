// https://leetcode.com/problems/search-in-rotated-sorted-array/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Approach 1 : Just run a linear loop but it takes O(N) we have to do it in O(logn)


// Approach 2: We have to do it in O(logn) time so i think this is the beat approach using binary Search
int search(vector<int>& nums, int target) {

  int l=0;
  int r=nums.size()-1;

  while(l<=r){
  int mid=(l+r)/2;
      if(nums[mid]==target){
          return mid;
      }
      else if(nums[mid]>=nums[l]){

          if(target>=nums[l] && target<=nums[mid]){

              r=mid-1;
          }else{
              l=mid+1;
          }
      }else{
          if(target>=nums[mid] && target<=nums[r]){

              l=mid+1;
          }else{
              r=mid-1;
          }
      }
  }
  return -1;
}

// T.C: O(logN) : Coz we are using Binary Search
// S.C: O(1);
int main(){


    int n ,target;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
     
    cout<<"Enter the number you have to find"<<endl;
    cin>>target;

    vector<int> arr;

    //creating your array
int temp;
    for(int i = 0; i < n; i++){
cin>>temp;
        arr.push_back(temp);
    }
    int ans=search(arr,target);
    cout<<ans;
}