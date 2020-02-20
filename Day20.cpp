#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tc;
    cin>>tc;
    int a[tc];
     int numberOfSwaps = 0;
    for(int i=0; i<tc; i++)
    cin>>a[i];
    for (int i = 0; i < tc; i++) {

   
    
    for (int j = 0; j < tc - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    
    if (numberOfSwaps == 0) {
        break;
    }
}

cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[tc-1];
    return 0;
}
