#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    int arr[tc];
    for(int i=0; i<tc; i++)
    cin>>arr[i];
    reverse(arr, arr+tc);
    for(int i=0; i<tc; i++)
    cout<<arr[i]<<" ";


}
