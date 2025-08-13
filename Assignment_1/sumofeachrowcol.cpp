#include <iostream>
using namespace std;

int main() {
    int arr[50][50],row,col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    cout << "Enter elements of the array row by row:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col ; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row ; ++i) {
        int rowsum = 0;
        for (int j = 0; j < col ; ++j) {
            rowsum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << rowsum << "\n";
    }
    cout << "\n";
    for (int j = 0; j < col ; ++j) {
        int colsum = 0;
        for (int i = 0; i < row; ++i) {
            colsum += arr[i][j];
        }
        cout << "Sum of column " << j << " = " << colsum << "\n";
    }

    return 0;
}
