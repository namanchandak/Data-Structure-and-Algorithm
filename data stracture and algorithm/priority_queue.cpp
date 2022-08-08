#include <iostream>
#include<bits/stdc++.h>
using namespace std;
  
// Main() function: where the execution of program begins
int main()
{
    // prints hello world
    priority_queue<int>pq;
    //max heap
    pq.push(10);
    pq.push(5);
    pq.push(15);

    while(!pq.empty()){

    cout << pq.top()<<endl;
    pq.pop();
    }

    // min heap

    pq.push(-15);
    pq.push(-5);
    pq.push(-10);
    cout<<"min heap"<<endl; 
    while(!pq.empty()){

    cout << -1*pq.top()<<endl;
    pq.pop();
    }
    return 0;
}