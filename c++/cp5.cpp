//linked list
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1,Node* next1){
        data= data1;
        next= next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertarr2ll(vector<int> arr){
    Node* head = new Node (arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int length(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}

void print(Node* head){
    while(head!= nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}

Node* removeshead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;    
}

int main(){
    vector<int> arr={1,2,4,5};
    Node* head = convertarr2ll(arr);
    // Node* temp = head;
    // while(temp){
    //     cout<< temp-> data<<" ";
    //     temp=temp->next;


    // }
    head = removeshead(head);
    print(head);
    return 0;
}

