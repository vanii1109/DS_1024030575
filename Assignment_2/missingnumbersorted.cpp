#include<iostream>
using namespace std;
 void sorting(int arr[],int n){
        for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    }
int main(){
   
    int arr[50],n;  
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Entered array : ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int diff = arr[0] - 0; // expected difference between index and value
    for (int i = 0; i < n; i++) {
        if (arr[i] - i != diff) {
            cout << "Missing number: " << i + diff;
            break;
        }
    }
    return 0;
}
 