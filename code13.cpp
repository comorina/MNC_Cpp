#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int rem = n%4;
        if(rem==1){
        cout<<rem<<" "<<n<<endl;
        }
        else if(rem==2){
        cout<<rem<<" "<<n<<" 1"<<endl;
        }
        else if(rem==3){
            cout<<"0"<<endl;
        }
        else if(rem==0){
            cout<<" 1"<<n<<endl;
        }
    } 

return 0;
}