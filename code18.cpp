
// Fibonacci Number--------->
#include<bits/stdc++.h>
using namespace std;

int  fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int self = fib(n-1) + fib(n-2);
    //cout << self << endl;
    return self;
    
}

int main(){ 
    
    int n;
    cin >> n;

    cout<<fib(n)<<endl;


return 0;
}