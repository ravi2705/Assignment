#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    int size(Node* head){
        Node* temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }
    int get(int index) {
        int n = size(head);
        if(index < 0 || index > n-1){return -1;}
        int idx = 0;
        Node* temp = head;
        while(idx < index){
            temp= temp->next;
            idx++;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        int n = size(head);
        if(index < 0 || index > n){return;}
        if(index == 0){
            addAtHead(val);
            return;
        }
        if(index == n){
            addAtTail(val);
            return;
        }
        Node* prev = head;
        Node* temp = head;
        int idx = 0;
        while(idx < index){
            prev = temp;
            temp = temp->next;
            idx++;
        }
        Node* newnode = new Node(val);
        newnode->next = temp;
        prev->next = newnode;

    }
    
    void deleteAtIndex(int index) {
        int n = size(head);
        if(index < 0 || index > n-1){return;}
        if(head == NULL){return;}
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        if (index == n - 1) {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
            return;
        }
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        Node * prev = head;
        int idx = 0;
        while(idx < index){
            prev = temp;
            temp = temp->next;
            idx++;
        }
        prev->next = temp->next;
        if(temp == tail){  
            tail = prev;
        }
        temp->next = NULL;
        delete temp;
    }
};