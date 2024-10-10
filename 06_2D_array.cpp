#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int row, col;
  cout << "Enter the number of rows: ";
  cin >> row;
  cout << "Enter the number of columns: ";
  cin >> col;

  int **arr = new int *[row];
  for (int i{}; i < row; i++) {
    arr[i] = new int[col];
  }

  cout << "\nEnter the elements of 2D array..." << endl;
  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      cout << "Element of index [" << i << "][" << j << "] : ";
      cin >> arr[i][j];
    }
  }

  cout << "\n2D Array : " << endl;
  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      if (j == col - 1) {
        cout << setw(2) << arr[i][j] << endl;
      } else {
        cout << setw(2) << arr[i][j] << ", ";
      }
    }
  }

  delete[] arr;
  return 0;
}
