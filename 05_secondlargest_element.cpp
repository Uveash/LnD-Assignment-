#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  int *arr = new int[n];

  cout << "\nEnter the elements of array..." << endl;
  for (int i{}; i < n; i++) {
    cout << "Element of index [" << i << "] : ";
    cin >> arr[i];
  }

  cout << "\nArray : ";
  for (int i{}; i < n; i++) {
    if (i == n - 1) {
      cout << arr[i] << endl;
    } else {
      cout << arr[i] << ", ";
    }
  }

  int largest = arr[0];
  int secondLargest = arr[0];

  for (int i{}; i < n; i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i];
    }
  }

  cout << endl << "Second largest element: " << secondLargest << endl;

  delete[] arr;
  return 0;
}
