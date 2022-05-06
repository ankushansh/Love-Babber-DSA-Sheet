// https://practice.geeksforgeeks.org/problems/count-squares3649/1#
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cout<<"Enter the number which you have to know the square roots"<<endl;
    cin>>n;

    int count=0;
     int i=1;
    while(i * i < n){
        count++;
        i++;
    }

    cout<<count;
    

}