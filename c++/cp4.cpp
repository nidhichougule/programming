#include<bits/stdc++.h>
using namespace std;

//searching algorithms
// linear search
int linearSearch(vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

// int main(){
//     vector<int> arr = {5, 3, 2, 4, 1};
//     int target = 4;
//     linearSearch( arr, target);
//     return 0;   
// }

// binary search
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size()-1;

    while(low <= high) {
        int mid = low + (high-low)/2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 4;
    binarySearch( arr, target);
    return 0;   
}


//STL Binary Search
#include <algorithm>
void stl_example() {
vector<int> arr = {1,2,3,4,5};

if(binary_search(arr.begin(), arr.end(), 3))
    cout << "Found";
}

//lower_bound
//auto it = lower_bound(arr.begin(), arr.end(), 4);

//upper_bound
//auto it = upper_bound(arr.begin(), arr.end(), 4);

/*Linear Search
-------------
Unsorted array
O(n)

Binary Search
-------------
Sorted array
O(log n)

binary_search()
---------------
Returns true/false

lower_bound(x)
--------------
First element >= x

upper_bound(x)
--------------
First element > x */