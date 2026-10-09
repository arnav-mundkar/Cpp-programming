#include<iostream>
using namespace std;

int main(){
    //Q) to find smallest in an array
    // int num[5] = {1,6,43,-43,-2};
    // int smallest = INT32_MAX;
    // int largest = INT32_MIN;

    // for(int i=0;i<5;i++){
    //     smallest = min(num[i], smallest);
    //     largest = max(num[i], largest);
    // }
    // cout << smallest << endl;
    // cout << largest;
    
    //Linear Search 
    // int num[7] = {4,2,7,8,1,2,5};
    // int target;
    // cout << "Enter target value: ";
    // cin >> target;
    // for(int i=0;i<7;i++){
    //     if(num[i] == target){
    //         cout << i;
    //         return 0;
    //     }
    // }
    // cout << -1;

    //Reverse Array
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        cout << arr[5-i] << "\t";
    }
    return 0;
}
