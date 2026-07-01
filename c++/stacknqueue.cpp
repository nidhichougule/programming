#include <iostream>
using namespace std;

// // Stack using Array

class Stack {
    int arr[100];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(int x) {
        arr[++top] = x;
    }
    void pop() {
        if(top == -1) {
            cout << "Stack Empty\n";
            return;
        }
        top--;
    }
    int peek() {
        return arr[top];
    }
    bool empty() {
        return top == -1;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.peek();   // 30
}






// // Stack using Linked List

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
// class Stack {
//     Node* top;
// public:
//     Stack() {
//         top = NULL;
//     }
//     void push(int x) {
//         Node* temp = new Node(x);
//         temp->next = top;
//         top = temp;
//     }
//     void pop() {
//         if(top == NULL) return;
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//     }
//     int peek() {
//         return top->data;
//     }
// };
// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     cout<<s.peek(); //20
// }





// // Queue using Array

// class Queue {
//     int arr[100];
//     int front;
//     int rear;
// public:
//     Queue(){
//         front = 0;
//         rear = -1;
//     }
//     void enqueue(int x){
//         arr[++rear]=x;
//     }
//     void dequeue(){
//         if(front>rear)
//             return;
//         front++;
//     }
//     int peek(){
//         return arr[front];
//     }
// };
// int main(){
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.dequeue();
//     cout<<q.peek(); //20
// }






// // Queue using Linked List

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// class Queue{
//     Node* front;
//     Node* rear;
// public:
//     Queue(){
//         front=NULL;
//         rear=NULL;
//     }
//     void enqueue(int x){
//         Node* temp=new Node(x);
//         if(rear==NULL){
//             front=rear=temp;
//             return;
//         }
//         rear->next=temp;
//         rear=temp;
//     }
//     void dequeue(){
//         if(front==NULL)
//             return;
//         Node* temp=front;
//         front=front->next;
//         delete temp;
//     }
//     int peek(){
//         return front->data;
//     }
// };
// int main(){
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.dequeue();
//     cout<<q.peek(); //20
// }






// // Stack using Queue

// using namespace std;
// class Stack{
//     queue<int> q1,q2;
// public:
// void push(int x){
//     q2.push(x);
//     while(!q1.empty()){
//         q2.push(q1.front());
//         q1.pop();
//     }
//     swap(q1,q2);
// }
// void pop(){
//     q1.pop();
// }
// int top(){
//     return q1.front();
// }
// };
// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     cout<<s.top(); //20
// }






// // Queue using Stack

// using namespace std;
// class Queue{
// stack<int>s1,s2;
// public:
// void enqueue(int x){
//     s1.push(x);
// }
// void dequeue(){
//     if(s2.empty()){
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//     }
//     s2.pop();
// }
// int peek(){
//     if(s2.empty()){
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//     }
//     return s2.top();
// }
// };
// int main(){
// Queue q;
// q.enqueue(10);
// q.enqueue(20);
// q.dequeue();
// cout<<q.peek(); //20
// }