#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "\nEnter the elements of array: " << endl;

    for (int i{}; i < n; i++)
    {
        cout << "Element of index [" << i << "] : ";
        cin >> arr[i];
    }

    cout << endl
         << "Array : ";
    for (int i{}; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }

    delete[] arr;
    return 0;
}