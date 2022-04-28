#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(vector<int>& vec){

    int size=vec.size();

    for(int i=0;i<size/2;i++){

        swap(vec[i],vec[size-i-1]);
    }
}
int main(){

int n;
cout<<"Enter the size of the vector"<<endl;
cin>>n;
vector<int> v;
int t;
for(int i=0;i<n;i++){
cin>>t;
v.push_back(t);

}
reverse(v);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}