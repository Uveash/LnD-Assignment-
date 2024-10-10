#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i{}; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }
}

int main()
{

    int arr[] = {4, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before deletion: ";
    printArr(arr, n);

    int target;
    cout << "\nEnter the element to delete: ";
    cin >> target;

    int index{-1};

    for (int i{}; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    for (int i{index}; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "\nArray after deletion: ";
    printArr(arr, n);

    return 0;
}
