#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sortanarray(int a[], int n){

    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){

        if(a[i]==0){ 
            count0++;
        }
        else if(a[i]==1) {
            count1++;
        }
        else{count2++;}
    }

    for(int i=0;i<n;i++){
        if(count0!=0){
            a[i]=0;
            count0--;
        }else if(count1!=0){
            a[i]=1;
            count1--;
        }else if(count2!=0){
            a[i]=2;
            count2--;
        }
    }
}
int main(){

int n;
cout<<"Enter the size of array "<<endl;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){

    cin>>arr[i];
}

sortanarray(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}