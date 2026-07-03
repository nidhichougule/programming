#include <iostream>
#include <queue>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    // Insert into heap
    void insert(int val) {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Delete root from heap
    void deletefromheap() {
        if (size == 0) {
            cout << "Heap is empty" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int index = 1;

        while (true) {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left <= size && arr[left] > arr[largest])
                largest = left;

            if (right <= size && arr[right] > arr[largest])
                largest = right;

            if (largest == index)
                break;

            swap(arr[index], arr[largest]);
            index = largest;
        }
    }
};

// Heapify function
void heapify(int arr[], int n, int i) {
    int largest = i;

    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
        largest = left;

    if (right <= n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapsort(int arr[], int n) {
    int temp = n;

    while (temp > 1) {
        swap(arr[1], arr[temp]);
        temp--;
        heapify(arr, temp, 1);
    }
}

int main() {
    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(51);
    h.insert(52);

    h.print();

    h.deletefromheap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // Build Heap
    for (int i = n / 2; i > 0; i--) {
        heapify(arr, n, i);
    }

    cout << "Printing the heap:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Heap Sort
    heapsort(arr, n);

    cout << "After Heap Sort:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Using priority queue in STL" << endl;
    // max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2); 
    pq.push(5);
    pq.push(1);
    cout<<pq.top()<<endl; // 5
    pq.pop();  
    cout<<pq.top()<<endl; // 4
    cout<<pq.size()<<endl; // 3
    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }

// min head
priority_queue<int,vector<int>,greater<int>> minheap;

minheap.push(4);
minheap.push(2);    
minheap.push(5);
minheap.push(1);

cout<<minheap.top()<<endl; // 1x    
minheap.pop();
cout<<minheap.top()<<endl; // 2
cout<<minheap.size()<<endl; // 3
if(minheap.empty()){
    cout<<"minheap is empty"<<endl;
}
else{
    cout<<"minheap is not empty"<<endl;
}
return 0;
}

