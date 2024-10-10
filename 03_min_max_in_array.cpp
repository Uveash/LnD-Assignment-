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
         << endl
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

    int max = arr[0];
    int min = arr[0];

    for (int i{}; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "\nMaximum element in the array: " << max << endl;
    cout << "Minimum element in the array: " << min << endl;

    delete[] arr;
    return 0;
}
