#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(int size){
        this->head =NULL;
        this->tail = NULL;
        this->size = size;
    }
    int push(int vl){
        Node* t = new Node(vl);
        if(head==NULL){
         head = tail = t;
         return;
        } 
        tail->next = t;
        tail = t;
    }
    int pop(){
         if(head==NULL) return;
         head = head->next;
    }
    void display(Node* head){
      Node* temp = head;
      while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
      }

    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.display(q.head);

}