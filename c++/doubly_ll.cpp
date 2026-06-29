// doubly linked list 

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    public:
    Node(int data1,Node* next1,Node* back1){
        data= data1;
        next= next1;
        back= back1;
         
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

// convert array to doubly linked list

Node* convertarr2dll(vector<int> arr){
    Node* head = new Node (arr[0]);
    Node* back= head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i], nullptr, back);
        back->next=temp;
        back=temp;
    }
    return head;
}

void print(Node* head){
    while(head!= nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}


// delete head in dll

Node* deletehead(Node* head){

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;

    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;

    return head;
}


// delete tail in dll
Node* deletetail(Node* head){

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* tail = head;

    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* newtail = tail->back;

    newtail->next = nullptr;
    tail->back = nullptr;

    delete tail;
    return head;
}

Node* deletekinDLL(Node* head, int k){
    Node* temp = head;
    int cnt=0;
    while(temp != nullptr){
        cnt++;
        if(cnt==k) break;
        temp = temp-> next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev != NULL && front == NULL){
        delete temp;
        return NULL;
    }
    else if (prev == NULL){
        return deletehead(head);
    }
    else if(front == NULL){
        return deletetail(head);
    }
    else{
        prev->next =front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;
    }
}


//reverse a doubly linked list
Node* reverseDLL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = nullptr;
    Node* curr = head;
    while(curr != nullptr){
        prev = curr->back;
        curr->back = curr->next;
        curr->next = prev;
        curr = curr->back;
    }
    return prev->back;
}

int main(){
    vector<int> arr={31,27,44,58};
    Node* head = convertarr2dll(arr);

    // head = deletehead(head);
    // head = deletetail(head);
    // head = deletekinDLL(head, 3);
    head = reverseDLL(head);
    print(head);
    return 0;
}

/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

