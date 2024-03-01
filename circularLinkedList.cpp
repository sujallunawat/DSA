#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = next; 
    }

};

void insertAtend(node* &tail , node* &head, int data){
    node * temp = tail ;
    node* Node = new node(data);
        temp -> next = Node;
        Node -> next = head;
        tail = Node;

}

void insertAtStart(node* &head , node* &tail , int data){
   
    node* Node = new node(data);
    Node -> next = head;
    head = Node;
    tail -> next = head;
}

void insertAtPos(node* &head , node* &tail , int data , int position){
    if(position == 1){
        insertAtStart(head , tail , data);
        return;
    }
    node* temp = head;
    int count = 1 ;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp -> next == head){
        insertAtend(tail , head, data);
        return;
    }

     node* Node = new node(data);
     Node -> next = temp -> next;
     temp -> next = Node;    
}

void deleteHead(node* &head , node* &tail){
    node* temp = head;
    head = temp->next;
    temp -> next = NULL;
    delete temp;
    tail -> next = head;
}
int listlength(node* &head , node* &tail){
    node* temp = head;
    int count = 0;
    do{
        temp = temp->next;
        count++;
    }while(temp != head);

    return count;
}
void deleteTail(node* &head , node* &tail){
    node* temp = head;
    int count = 1 ;
    while(count < listlength(head , tail) - 1){
        temp = temp -> next;
        count++;
    }
     temp -> next = head;
     tail = temp; 

}

void deleteAnyPos(node* &head , node* &tail , int position){
    node*temp = head;
    node*curr = NULL;
    if(position == 1){
        deleteHead(head,tail);
        return;
    }
    if(position == listlength(head,tail)){
        deleteTail(head,tail);
        return;
    }
    int count = 1 ;
    while(count < position){
        curr = temp;
        temp = temp -> next;
        count++;
    }
    curr -> next = temp -> next;
    temp -> next = NULL;
    delete temp;
}

void print(node* &head){
    node *temp = head;
   do{
    cout<<temp->data<<" ";
    temp =temp->next;
   }while(temp != head);
}
int main(){
    node* Node = new node(11);
    Node -> next = Node;
    node* head = Node;
    node* tail = Node;
    print(head);

    insertAtend(tail , head , 22);
    insertAtend(tail , head , 33);
    insertAtend(tail , head , 44);
    insertAtStart(head , tail, 00);
    insertAtPos(head,tail,12,6);
    print(head);
    cout<<endl<<endl;
    deleteAnyPos(head , tail , 2);
    print(head);

    cout<<endl<<"the head is : "<<head->data;
    cout<<endl<<"the tail is : "<<tail->data;
}