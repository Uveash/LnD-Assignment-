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

  int target;
  cout << endl << "Enter the target sum: ";
  cin >> target;

  cout << endl;

  int index1{-1}, index2{-1};

  for (int i{}; i < n; i++) {
    for (int j{i + 1}; j < n; j++) {
      if (arr[i] + arr[j] == target) {
        index1 = i;
        index2 = j;
        break;
      }
    }
  }

  if (index1 == -1 && index2 == -1) {
    cout << "No two elements found with the target sum." << endl;
  } else {
    cout << "Indices: [" << index1 << ", " << index2 << "]" << endl;
  }

  delete[] arr;
  return 0;
}
