#include <iostream>
using namespace std;
int countInversions(int arr[], int n) {
    int inversion = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) inversion++;
    return inversion;
}

int main() {
    int arr[50],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"array : ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout << "Inversions: " << countInversions(arr, n);
    return 0;
}