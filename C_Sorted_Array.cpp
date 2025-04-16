#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bool isSorted = true;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if(isSorted)
        cout << "Array is sorted in ascending order." << endl;
    else
        cout << "Array is NOT sorted." << endl;

    return 0;
}
