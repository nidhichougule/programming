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

// delete head
Node* removeshead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;    
}

// delete tail
Node* removetail(Node* head){
    if(head == nullptr || head->next == nullptr) return nullptr;
    
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;    
}

// delete at kth position
Node* removekth(Node* head, int k){
    if(head == NULL ) return head;
    if(k==1){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp = head;
    Node* prev= NULL;
    while(temp!= NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}

// delete depending on value
Node* removeEL(Node* head, int el){
    if(head == NULL ) return head;
    if(head->data == el){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == el){
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
       


// INSERTION

// insert at head
Node* inserthead(Node* head, int val){
    return new Node(val, head);
}

// insert at tail
Node* inserttail(Node* head, int val){
    if(head == nullptr){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    temp->next=newNode;
    return head;
}

// insert at kth position
Node* insertkth(Node* head, int el, int k){
    if(head == NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new Node(el, head);
    }
    int cnt=0;
    Node* temp = head;
    while(temp!= NULL){
        cnt++;
        if(cnt==k-1){
            Node* newNode = new Node(el, temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
        
    }
    return head;
}

// insert el before value
Node* insertbeforevalue(Node* head, int el, int target){
    if(head == NULL){
        return NULL;
    }
    if(head->data == target){
        return new Node(el, head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == target){
            Node* newNode = new Node(el, temp->next);
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }
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
    // head = removeEL(head, 4);
    // head = insertkth(head, 16, 3);
    head = insertbeforevalue(head, 3, 4);
    print(head);
    return 0;
}

