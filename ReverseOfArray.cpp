#include <iostream>
#include <stack>
#include "ReverseOfArray.h"

using namespace std;
stack<int> s;

void RverseOfArray::accept(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
    s.push(a[i]);
}    
}
void RverseOfArray::display(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void RverseOfArray::reverse(){
       
    cout<<"after reverse-";
     for(i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}


