#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b, e;
    string c;
    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin,c);
    e=(double)b+d;
    cout<<i+a<<endl;
    cout<<fixed;
    cout<<std::setprecision(1)<< e<<endl;
    cout<<s+c<<endl;


    return 0;
