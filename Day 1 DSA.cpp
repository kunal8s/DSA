ARRAY TRAVERSAL

#include<iostream>
#include<algorithm>

using namespace std;

void PrintArray(int arr[],int n){
for(int i=0;i<n;i++){
cout<<"Array "<<i<<" element is: "<<arr[i]<<endl;
}
}

int main(){
int size;
cout<<"Enter the size for the array: ";
cin>>size;

int array[size];
cout<<"Taking the inputs for the array...."<<endl;
for(int i=0;i<size;i++){
    cin>>array[i];
}

PrintArray(array,size);

return 0;
}


ARRAY INSERTION AND DELETION


#include <bits/stdc++.h>
using namespace std;

void Insertion(int arr[], int &size) {
    cout << "Array after insertion..." << endl;
    int element, position;
    cout << "Enter the element you want to insert: ";
    cin >> element;
    cout << "Enter the position where you want to insert (0 to " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

void Deletion(int arr[], int &size) {
    cout << "Proceeding array for the element deletion..." << endl;

    int position;
    cout << "Enter the position from which you want to remove the element (0 to " << size - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Array after deletion:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Array " << i << " element is: " << arr[i] << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size for the array: ";
    cin >> size;

    int array[100]; 

    cout << "Taking the inputs for the array..." << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    PrintArray(array, size);

    cout << "\nChoose operation:\n";
    cout << "1. Insertion\n";
    cout << "2. Deletion\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        Insertion(array, size);
    } else if (choice == 2) {
        Deletion(array, size);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}




ARRAY SEARCHING


#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int size) {
    cout << "Search the key from the array..." << endl;
    int key;
    cout << "Enter the key to search from array: ";
    cin >> key;

    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size) {
    cout << "Search the key from the array..." << endl;
    int key;
    cout << "Enter the key to search from array: ";
    cin >> key;

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int array[size];

    cout << "Taking the array inputs..." << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> array[i];
    }

    cout << "\nChoose Search Method:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search (Array must be sorted)\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    int result = -1;

    if (choice == 1) {
        result = LinearSearch(array, size);
    } else if (choice == 2) {
        sort(array, array + size);  
        result = BinarySearch(array, size);
    } else {
        cout << "Invalid choice." << endl;
        return 0;
    }

    if (result != -1) {
        cout << "Element found at index " << result << "." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}


