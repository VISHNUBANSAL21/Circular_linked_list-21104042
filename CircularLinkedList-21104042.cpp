// The first element in circular linked list , here in this code is denoted by head!
#include "bits/stdc++.h"
using namespace std;

class linkedList{
public:
    int data;
    linkedList* next;
    linkedList(int val){
        data = val;
        next = NULL;
    }
};

void pushItem(linkedList* &head , int val){
    linkedList* current = new linkedList(val);
    if(head==NULL){
        head = current;
        head->next = head;
    }
    else{
        linkedList* temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = current;
        current->next = head;
    }
}

void printList(linkedList* head){
    linkedList* temp = head;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    while(temp!=head);
    cout<<head->data<<"(head)";
}

signed main(){
    int n;
    cout<<"ENter the number of elements in circular linked list: ";
    cin>>n;
    linkedList* head = NULL;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        pushItem(head,tmp);
    }
    printList(head);
    return 0;
}
