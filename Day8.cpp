#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> smile;
    int tc;
    cin>>tc;
    string a;
    for(int i=0; i<tc; i++)
    {
        string s;
        cin>>s;
        int num;
        cin>>num;
        smile.insert(pair<string, int>(s,num));
    }
    while(cin>>a){
        if(smile.find(a) != smile.end()){
        cout<<a<<"="<<smile[a]<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    }


    return 0;
}
