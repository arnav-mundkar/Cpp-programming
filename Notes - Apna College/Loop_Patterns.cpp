#include<iostream>
using namespace std;

int main(){
    //1)Simple square pattern
    // for(int i=1;i<=4;i++){          //how many times pattern should repeat
    //     for(int j=1;j<=4;j++){      //how many things should be in a single pattern
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    //2)Pattern to print 9 numbers in 3x3 format
    // int num = 1;
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout << num << " ";
    //         num = num+1;
    //     }
    //     cout << endl;
    // }
    //3)Pattern to print 9 letters in 3x3 format
    // char letr = 'A';
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout << letr << " ";
    //         letr = letr+1;
    //     }
    //     cout << endl;
    // }
    //4)Staircase pattern
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    //5)Number staircase pattern
    // int num = 1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << endl;
    // }
    //6)Pattern for row containing its serial number that many times
    // int num = 1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num << " ";
    //     }
    //     num = num + 1;
    //     cout << endl;
    // }
    //7)Above pattern but with letters
    // char ch = 'A';
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << ch << " ";
    //     }
    //     ch = ch + 1;
    //     cout << endl;
    // }
    //8)pattern where num increases with row and column
    // int num = 1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     num = 1;
    //     cout << endl;
    // }
    //9)reverse number staircase
    // int num = 1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num << " ";
    //         num--;
    //     }
    //     num = num + i + 1;
    //     cout << endl;
    // }
    //10)Floyd's triangle pattern
    // int num = 1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    //11)Floyd's triangle but with letters
    // char ch = 'A';
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    //12)reverse number pyramid
    int num = 10;
    for(int i=1; i<=4;i++){
        for(int j=1;j<i;j++){
            cout << " ";
        }
        for(int j=4;j>=i;j--){
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    //13)mirror number pyramid
    // int num = 1;
    // for(int i=1; i<=4;i++){
    //     for(int j=4-i;j>=0;j--){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // int num1 = 6;
    // for(int i=1; i<=3;i++){
    //     for(int j=0;j<=i;j++){
    //         cout << " ";
    //     }
    //     for(int j=4-i;j>=1;j--){
    //         cout << num1 << " ";
    //         num1--;
    //     }
    //     cout << endl;
    // }    
    //mirror alphabet pyramid
    // char ch = 'A';
    // for(int i=1; i<=4;i++){
    //     for(int j=4-i;j>=0;j--){
    //         cout << " ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // char ch1 = 'F';
    // for(int i=1; i<=3;i++){
    //     for(int j=0;j<=i;j++){
    //         cout << " ";
    //     }
    //     for(int j=4-i;j>=1;j--){
    //         cout << ch1 << " ";
    //         ch1--;
    //     }
    //     cout << endl;
    // }   
    return 0;
}