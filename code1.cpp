// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).

#include<bits/stdc++.h>
using namespace std;

int main(){ 

int n;
cin>>n;
//int array_size = sizeof(a)/sizeof(a[0]);
int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
int mx=-1999999;
for(int i=0; i<n; i++){
    mx=max(mx,a[i]);
    cout << mx << endl;
    //if(a[i]>=mx){
      //  mx=a[i];
        //cout<<mx<<endl;
   // }
}
//cout<<"Max till : "<<mx<<endl;
return 0;
}