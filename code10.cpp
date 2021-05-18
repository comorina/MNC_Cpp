// Sort an array of 0s, 1s and 2s.------>
/*
Problem:
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
  
    for(int i =0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];

                arr[i] = arr[j];
                arr[j] = temp;
            }   
        }
    }
    
    for (int j=0; j<N; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}