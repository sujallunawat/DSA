#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~node(){
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertAtLast( node* &tail , int data){
    node* Node = new node(data);
    Node -> prev = tail;
    tail -> next = Node;
    tail = Node;
}
void insertAtFirst(node* &head , int data){
    node* Node = new node(data);
    head -> prev = Node;
    Node -> next = head;
    head = Node;
}

void insertAtPosition(node* &head , int data , int position , node* &tail){
     if(position == 1){
        insertAtFirst(head , data);
        return;
    }
    node* temp = head;

     int count = 1;
    while(count < position-1){
        temp = temp ->next;
        count++;
    }
    if(temp -> next == NULL){
        insertAtLast(tail , data);
        return;
    }
    node* Node = new node(data);
    
     Node -> next = temp -> next ;
     Node -> next -> prev = Node;
     temp ->  next = Node;
     Node -> prev = temp;
   
}

void deleteANode(node* &head , int position , node* &tail){
    node * temp = head;
    node* curr = head;
    if(position == 1){
        head = temp -> next ;
        head -> prev = NULL;
        delete temp;
        return;
    }
     int cnt = 1 ;
    while(cnt < position){
        curr = curr -> next;
        cnt++;
    }    
    if(curr -> next == NULL){
        curr -> prev -> next = NULL;
         tail = curr -> prev ;
        curr -> prev = NULL;
        delete curr;
        return ;
    }
         int count = 1 ;
     while(count < position-1){
         temp = temp -> next;
         count++;
    }

    temp -> next = curr -> next;
    curr -> next = curr -> prev;

    delete curr;

   
}

void print( node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
}
int main(){
    node* Node = new node(10);
    node * head = Node;
    node * tail = Node;
    insertAtLast(tail , 20 );
    cout<<endl;
    insertAtFirst(head , 9);
    cout<<endl;
    insertAtPosition(head , 99 , 4 , tail);
    print(head);
    cout<<endl;
    deleteANode(head , 3 , tail);
    cout<<endl;
    print(head);
    cout<<endl;
    cout<<"tail is "<<tail->data<<endl;
    cout<<"head is "<<head->data<<endl;
}