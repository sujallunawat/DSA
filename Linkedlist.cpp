#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node * next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(node* &head , int d){
        node * temp = new node(d);
        temp -> next = head;
        head = temp;
}

void insertAtNext(node* &tail , int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

 void insertAtMiddle(node* &head , int position , int d , node* &tail ){
    node* temp = head;
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    int count = 1 ;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    node * newNode = new node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;

    if(newNode->next == NULL){
        tail = newNode;
    }
 }

 void deleteByPos(int pos , node* &head , node* &tail){
    node* temp = head;
    node *prev = head;

    if(pos == 1){
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }

    
    int count = 1;
    while(count<pos){
        temp = temp ->next;
        count++;
    }
    int cnt =1;
    while(cnt< pos-1){
        prev = prev -> next;
        cnt++;
    }
    prev -> next = temp -> next;
    temp -> next = NULL;
    delete temp;
    if(prev -> next == NULL){
    tail = prev;    
    }
 }
void print(node* &head){
    node * temp = head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}
int main(){

    node* Node = new node(10);
    node* head = Node;
    node * tail = Node;
    insertAtHead(head,12);
    insertAtNext(tail,15);
    insertAtMiddle(head,4,20 , tail);
    print(head);
    deleteByPos(1 , head , tail);
    cout<<endl;
    print(head);
    cout<<endl<<tail->data;
    cout<<endl<<head->data;
}