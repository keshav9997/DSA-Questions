#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next = NULL;
    }
};
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
void printRec(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    printRec(head->next);
}
void insert(Node* &head,int d){
    Node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* element = new Node(d);
    temp->next = element;
}
int main(){
    Node* head = new Node(5);
    insert(head,10);
    insert(head,20);
    insert(head,30);
    printRec(head);

}