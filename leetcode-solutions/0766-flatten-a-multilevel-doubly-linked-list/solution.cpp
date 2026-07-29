/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
  
    Node* flatten(Node* head) {
        if(head==nullptr)return head;
        stack<Node*> s;
        s.push(head);
        Node* prev=nullptr;
       
        while(!s.empty()){
            Node* temp=s.top();
            s.pop();
          
            if(temp->next)s.push(temp->next);
              if(temp->child){
                s.push(temp->child);
               temp->child=nullptr;}
            if(prev){
             temp->prev=prev;
             prev->next=temp;
            }
             
prev=temp;
        }

        return head;
    }
};
