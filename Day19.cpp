#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
queue<char>qux;
stack<char>stx;

void pushCharacter(char c);
void enqueueCharacter(char c);
char popCharacter();
char dequeueCharacter();
};

void Solution::pushCharacter(char c){

stx.push(c);
}


void Solution::enqueueCharacter(char c){
qux.push(c);
}

char Solution::popCharacter(){
char x =stx.top() ;
stx.pop();
return x;
}

char Solution::dequeueCharacter(){
char x = qux.front();
qux.pop() ;
return x;

};

int main() {
