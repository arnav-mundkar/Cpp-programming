#include<iostream>
using namespace std;

int main(){
    //Q)find if character is uppercase or lowercase
    // char letter;
    // cout << "Enter a letter: ";
    // cin >> letter;
    // if(letter >= 'A' && letter <= 'Z'){
    //     cout << "Upper";
    // }else if(letter >= 'a' && letter <= 'z'){
    //     cout << "Lower";
    // }else{
    //     cout << "Enter valid input";
    // }

    //LOOPS
    //While Loop
    // int num = 1;
    // while(num<=5){
    //     cout << num << " ";
    //     num++;
    // }
    //For Loop
    // for(int i=1;i<=5;i++){
    //     cout << i << " ";
    // }

    //Q) sum of all Odd numbers from 1 to n
    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // int sum = 0;
    // for(int i=1;i<=n;i++){
    //     if(i%2 != 0){
    //         sum = sum + i;
    //     }
    // }
    // cout << sum;

    //Q) find factorial of number n
    int n;
    cout << "Enter n: ";
    cin >> n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout << "Factorial is " << fact;
    return 0;
}