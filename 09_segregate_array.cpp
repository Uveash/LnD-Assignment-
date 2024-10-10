#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int sz);

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
  printArr(arr, n);

  vector<int> odd;
  vector<int> even;

  for (int i{}; i < n; i++) {
    if (arr[i] % 2 == 0) {
      even.push_back(arr[i]);
    } else {
      odd.push_back(arr[i]);
    }
  }

  for (int i{}; i < even.size(); i++) {
    arr[i] = even[i];
  }

  for (int i = even.size(); i < n; i++) {
    arr[i] = odd[i - even.size()];
  }

  cout << "\nSegregated array: ";

  printArr(arr, n);

  delete[] arr;
  return 0;
}

void printArr(int arr[], int sz) {
  for (int i{}; i < sz; i++) {
    if (i == sz - 1) {
      cout << arr[i] << endl;
    } else {
      cout << arr[i] << ", ";
    }
  }
}
