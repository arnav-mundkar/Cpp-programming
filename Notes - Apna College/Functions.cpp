#include<iostream>
using namespace std;

//Q) sum of 1 to N
// int sum(int n){
//     int num = 0;
//     for(int i=1;i<=n;i++){
//         num = num+i;
//     }
//     return num;
// }
//Q) calculate N factorial
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
//Q) calculate nCr
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int factn = factorial(n);
    int factr = factorial(r);
    int factnmr = factorial(n-r);
    return factn/ (factr*factnmr);
}
int main(){
    // cout << sum(4);
    // cout << factorial(6);
    cout << nCr(8,2);
    return 0;
}
//4:53