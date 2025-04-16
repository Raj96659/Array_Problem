#include <iostream>
#include <algorithm>  // for sort()

using namespace std;

// Function to get second largest and second smallest elements using array
void getSecondOrderElements(int arr[], int n, int& secondLargest, int& secondSmallest) {
    // Sort the array in ascending order
    sort(arr, arr + n);

    // Second largest is at n-2
    secondLargest = arr[n - 2];

    // Second smallest is at 1
    secondSmallest = arr[1];
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if(n < 2) {
        cout << "Need at least 2 elements to find second largest and second smallest.";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secondLargest, secondSmallest;
    getSecondOrderElements(arr, n, secondLargest, secondSmallest);

    cout << "Second Largest: " << secondLargest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

    return 0;
}
