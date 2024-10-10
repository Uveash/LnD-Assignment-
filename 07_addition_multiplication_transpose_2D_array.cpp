#include <iostream>
using namespace std;

void create2DArray(int **arr, int row, int col);
void print2DArray(int **arr, int row, int col);
int **add2DArray(int **arr, int **arr2, int row, int col);
int **multiply2DArray(int **arr, int **arr2, int row, int col);
int **transpose2DArray(int **arr, int row, int col);

int main() {
  int row, col;
  cout << "Enter the number of rows for 1st matrix: ";
  cin >> row;
  cout << "Enter the number of columns for 1st matrix: ";
  cin >> col;

  int **arr = new int *[row];
  for (int i{}; i < row; i++) {
    arr[i] = new int[col];
  }

  create2DArray(arr, row, col);

  // ===============================================

  int row2, col2;
  cout << endl << "Enter the number of rows for 2nd matrix: ";
  cin >> row2;
  cout << "Enter the number of columns for 2nd matrix: ";
  cin >> col2;

  int **arr2 = new int *[row2];
  for (int i{}; i < row2; i++) {
    arr2[i] = new int[col2];
  }

  create2DArray(arr2, row2, col2);

  // ===============================================

  cout << endl << "1st matrix: " << endl;
  print2DArray(arr, row, col);
  cout << "2nd matrix: " << endl;
  print2DArray(arr2, row2, col2);

  // ===============================================

  cout << "Addition of 1st and 2nd matrix: " << endl;
  int **result = add2DArray(arr, arr2, row, col);
  print2DArray(result, row, col);

  // ===============================================

  cout << endl << "Multiplication of 1st and 2nd matrix: " << endl;
  int **result2 = multiply2DArray(arr, arr2, row, col);
  print2DArray(result2, row, col);

  // ===============================================

  cout << endl << "Transpose of 1st matrix: " << endl;
  int **result3 = transpose2DArray(arr, row, col);
  print2DArray(result3, col, row);

  delete[] arr;
  delete[] arr2;
  return 0;
}

// Function to create 2D array
void create2DArray(int **arr, int row, int col) {
  cout << "\nEnter the elements of 2D array..." << endl;
  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      cout << "Element of index [" << i << "][" << j << "] : ";
      cin >> arr[i][j];
    }
  }
}

// Function to print 2D array
void print2DArray(int **arr, int row, int col) {
  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      if (j == col - 1) {
        cout << arr[i][j] << endl;
      } else {
        cout << arr[i][j] << ", ";
      }
    }
  }

  cout << endl;
}

// Function to add 2D array
int **add2DArray(int **arr, int **arr2, int row, int col) {
  int **result = new int *[row];
  for (int i{}; i < row; i++) {
    result[i] = new int[col];
  }

  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      result[i][j] = arr[i][j] + arr2[i][j];
    }
  }

  return result;
}

// Function to multiply 2D array
int **multiply2DArray(int **arr, int **arr2, int row, int col) {
  int **result = new int *[row];
  for (int i{}; i < row; i++) {
    result[i] = new int[col];
  }

  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      result[i][j] = arr[i][j] * arr2[i][j];
    }
  }

  return result;
}

// Function to transpose 2D array
int **transpose2DArray(int **arr, int row, int col) {
  int **result = new int *[col];
  for (int i{}; i < col; i++) {
    result[i] = new int[row];
  }

  for (int i{}; i < row; i++) {
    for (int j{}; j < col; j++) {
      result[j][i] = arr[i][j];
    }
  }

  return result;
}
