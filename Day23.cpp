#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      if ( !root ) { return; }
        cout << root->data << " ";
        
        if ( root->left ) { _q.push(root->left); }
        if ( root->right ) { _q.push(root->right); }
        Node *next = _q.front();
        if ( next ) { _q.pop(); }
        levelOrder(next);
    }
    private:
    queue<Node *> _q;



};//End of Solution
