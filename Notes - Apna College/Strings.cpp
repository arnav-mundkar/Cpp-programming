#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //Character Array
    // char str[50];
    // cout << "Enter a string: ";
    // cin.getline(str,50);           //to print words with spaces
    // cout << "Output: " << str << endl;

    //String
    // string str = "Arnav Mundkar";   //value can be changed during runtime
    // cout << str;
    // string str;
    // getline(cin,str);
    // cout << "Output: " << str;

    //Reversing string
    string str;
    getline(cin,str);
    int start = 0, end = str.length() - 1;
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << str;
    return 0;
}