#include <iostream>
#include<bits/stdc++.h>
using namespace std;
  
// Main() function: where the execution of program begins
int main()
{
    // prints hello world
    priority_queue<int>pq;
    int k;
    
    cin>>k;
    int a[]={4,7,2,9,5,8};
    for(int i=0;i<6;i++)
    {
        pq.push(a[i]);
    }
    while(--k)
    {
        pq.pop();
    }
    cout<<pq.top();
    return 0;
}