// Recursion ------>

#include<bits/stdc++.h>
using namespace std;

void  decNumber(int n){
    if(n==1){
        cout << n << endl;
        return;
    }
    cout << n << endl;
    decNumber(n-1);
    cout << n << endl;

}    

int main(){ 
    int n;
    cin >> n;
    
    decNumber(n);

return 0;
}