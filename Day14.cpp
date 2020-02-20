#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(){}

    Difference(vector<int> a){

        elements = a;
    }
    void computeDifference(){
int x;
int mdiff=0;
int diff;
for(int i=0;i<elements.size();i++){

x = elements[i];

for(int j=0;j<elements.size();j++){

diff = abs(x-elements[j]);
//cout<<"dif"<<diff<<endl;
if(diff>mdiff){
    mdiff = diff;
}
}
}
maximumDifference = mdiff;

}

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
