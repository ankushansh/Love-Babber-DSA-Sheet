#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxandmin(vector<int> &vec){

    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=0;i<vec.size();i++){

        maxi=max(maxi,vec[i]);
        mini=min(mini,vec[i]);
    }

    cout<<"The maximum is : "<<maxi<<endl;
    cout<<"The minimum is : "<<mini<<endl;

}

int main(){


int n;

cout<<"Enter the size of an vector"<<endl;
cin>>n;
vector<int>v;

int d;

for(int i=0;i<n;i++){
cin>>d;
v.push_back(d);

}
    maxandmin(v);
}