#include<iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    // ===== LISTS =====        //doubly linked list
    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(22);
    // l.pop_back();
    // l.pop_front();
    // for(int i : l){
    //     cout << i << endl;
    // }
    //has all other same functions as vector

    // ===== DEQUE =====        //dynamic array
    // deque<int> d = {1,2,3,4};
    // cout << d[2];               //can do this in deque
    //all functions same as lists

    // ===== PAIR =====     //used to store two same or different values in a group
    // pair<int, string> p = {1,"Arnav"};
    // cout << p.first << endl;
    // cout << p.second;

    // ===== STACK =====    //FILO
    // stack<int> s;
    // s.push(7);          //adds a value to stack
    // s.push(8);
    // s.push(9);
    // cout << s.top() << endl;    //tells the topmost value
    // s.pop();            //removes a value from stack
    // cout << s.top() << endl;
    // cout << s.size() << endl;   //tells the size
    // stack<int> s2;
    // s2.swap(s);       //swaps all values of stack s to stack s2
    // cout << s.size();

    // ===== QUEUE =====    //FIFO
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // cout << q.front();    //Only difference b/w queue and stack
    //rest all functions same as stack

    // ===== PRIORITY QUEUE =====   //largest value = highest priority
    // priority_queue<int> pq;
    // pq.push(2);
    // pq.push(3);
    // pq.push(1);
    // cout << pq.top();   //highest priority/largest value stays on top
    //rest all functions same as stack

    // ===== MAP =====      //understand using product + quantity example, products will always be unique but quantity can be same
    // map<string,int> m;  
    // m["tv"] = 50;
    // m["phone"] = 100;
    // m["earbuds"] = 50;
    // m.insert({"tablet", 75});
    // m.erase("phone");
    // for(auto i : m){
    //     cout << i.first << " " << i.second << endl; //prints in ascending order of characters
    // }
    // if(m.find("phone") != m.end()){
    //     cout << "found";
    // }else{
    //     cout << "not found";
    // }

    // ===== UNORDERED MAP =====   //most frequently used in DSA
    // unordered_map<string,int> m;
    // m.emplace("tv", 50);
    // m.emplace("phone", 70);
    // m.emplace("charger", 80);
    // for(auto i : m){
    //     cout << i.first << " " << i.second << endl;
    // }

    // ===== SET =====  //like map, stores only unique values
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // cout << *(s.lower_bound(2)) << endl;    //value which should not be less than key
    // cout << *(s.upper_bound(2)) << endl;    //value should be greater than key
    // for(auto i : s){
    //     cout << i << " ";
    // }
    //rest all functions same as map(including multiset and unordered_set)

    // ===== SORTING =====      //for sorting things in a particular order
    int arr[5] = {1,4,5,3,2};
    // sort(arr, arr + 5);     //for ascending order
    sort(arr, arr + 5, greater<int>()); //for descending order
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}
//1:08:48