#include <iostream>
using namespace std;


bool binarySearch(int data[], int left, int right,  int val){
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is the middle
        if (data[mid] == val)
            return true;

        // If element is smaller than mid, search the left side
        if (data[mid] > val)
            return binarySearch(data, left, mid - 1, val);

        //If the element is larger than mid, search right side
        return binarySearch(data, mid + 1, right, val);
    }

    // If not found
    return false;
}


int main() {
    int size;
    cout << "enter size of data array: ";
    cin >> size;

    int data[size]; //declare array of data

    cout << "[";
    for(int i = 0; i < size; i++){ //fill data array
        data[i] = i;
        cout << i << " ";
    }
    cout << "]" << endl;

    int val;
    cout << "What number are you looking for?";
    cin >> val;

    if (binarySearch(data, 0, size-1, val))
        cout << val << " was found in the data." << endl;
    else
        cout << val << " was not found." << endl;

    return 0;
}