// Binary Inversiion on Hacker earth.
/*
Construct an array of size n with a<n 0s and b=n-a 1s such that the number of inversion in the array is equal to x.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){ 
    
    int long long n, a, x;
    cin>>n>>a>>x;
    
    int long long b=n-a;
    if(x>=a*b){
        cout<<"-1"<<endl;
    }
    else{
        int long long p=x/b;
        int long long q=x%b;
        for(int long long i=0; i<(n-p-b-1); i++){
            cout<<"0"<< " ";
        }
        for(int long long i=0; i<q; i++){
            cout<<"1"<<" ";
        }
        cout<<"0"<<" ";
        for(int long long i=0; i<(b-q); i++){
            cout<<"1"<<" ";
        }
        for(int long long i=0; i<p; i++){
            cout<<"0"<<" ";
        }
    }

return 0;
}