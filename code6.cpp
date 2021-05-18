// Searching atageted number----->

#include<bits/stdc++.h>
using namespace std;

int main(){ 

int n,m, target;
cin >> n >> m >> target;


int a[n][m];

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> a[i][j];
    }
}

int r=0;
int c=m-1;
bool flage = false;
while(r<n && c>=0){
    if(a[r][c]==target){
        flage=true;
    }
    if(a[r][c]>target){
        c--;
    }
    else{
        r++;
    }
}


return 0;
}