// Factoril----->
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    
    int mul = n*factorial(n-1);
   return (mul);

}

int main(){ 
    
    int n;
    cin>>n;
   
    cout<<factorial(n)<<endl;
return 0;
}