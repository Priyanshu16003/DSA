#include<iostream>
using namespace std;

int main() {

    // 1 Dimentional Array
    int arr[] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
        cout<<arr[i]<<"->";
    }
    
    // 2 Dimentional Array
    int array[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<array[i][j]<<", ";
        }
        cout<<endl;
    }
    
    cout<<"Demo text";

    return 0;
}