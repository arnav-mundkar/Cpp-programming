#include<iostream>
#include<vector>
using namespace std;

int main(){
    // For Each Loop            //Prints all values of vector
    // vector<char> vec = {'a','b','c'};
    // for(char i : vec){
    //     cout << i << endl;
    // }

    //Size function             //Tells size of vector
    // vector<char> vec = {'a','b','c'};
    // cout << vec.size();

    //Push back function        //Adds a value
    // vector<int> vec;
    // cout << vec.size() << endl;
    // vec.push_back(25);
    // cout << vec.size();

    //Pop back function         //Removes a value
    // vector<int> vec = {1,2,3,4};
    // for(int i : vec){
    //     cout << i << endl;
    // }
    // vec.pop_back();
    // for(int i : vec){
    //     cout << i << endl;
    // }

    //Front and Back functions  //Gives the first and last value of vector
    // vector<int> vec = {1,2,3,4};
    // cout << vec.front() << endl;
    // cout << vec.back();

    //Erase function
    // vector<int> vec = {1,2,3,4};
    // vec.erase(vec.begin() + 2);  //removes value at 2nd index
    // for(int i : vec){
    //     cout << i << endl;
    // }

    //Insert function
    // vector<int> vec = {1,2,3,4};
    // vec.insert(vec.begin() + 2,2,5); //inserts two 5 at index 2
    // for(int i : vec){
    //     cout << i << endl;
    // }

    //Clear function
    // vector<int> vec = {1,2,3,4};
    // vec.clear();               //clears all values in the vector
    // for(int i : vec){
    //     cout << i << endl;
    // }

    //Empty function
    vector<int> vec = {1,2,3,4};
    cout << vec.empty();  //will give 0 for false and 1 for true
    return 0;
}
//21:51