#include<bits/stdc++.h>
using namespace std;

void reverse(string s){

    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    //cout << s << endl;
    reverse(ros);
    cout << s[0]<<endl;
}

int main(){ 
    
string s;
cin>> s;

reverse(s);
return 0;
}