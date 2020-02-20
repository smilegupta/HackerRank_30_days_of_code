#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* removeDuplicates(Node *head)
{
    if (!head)
        return head;
    
    Node *node = head;
    while (node->next) {
        if (node->data == node->next->data) 
            node->next = node->next->next;
        else
            node = node->next;
    }
    
    return head;
}
       
          Node* insert(Node *head,int data)
