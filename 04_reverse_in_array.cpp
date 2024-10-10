#include <iostream>
using namespace std;

void printArr(int arr[], int sz) {
  for (int i{}; i < sz; i++) {
    if (i == sz - 1) {
      cout << arr[i] << endl;
    } else {
      cout << arr[i] << ", ";
    }
  }
}

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

  cout << "\nArray before reversal: ";
  printArr(arr, n);

  for (int i{}; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }

  cout << "\nArray after reversal: ";
  printArr(arr, n);

  delete[] arr;
  return 0;
}
