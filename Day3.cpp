#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    if(N%2!=0) cout<<"Weird";
    else if(N%2==0 && (N>=2 && N<=5)) cout<<"Not Weird";
    else if(N%2==0&& N>=6 && N<=20) cout<<"Weird";
    else cout<<"Not Weird";
    return 0;
}
