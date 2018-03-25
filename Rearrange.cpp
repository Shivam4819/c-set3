#include <iostream>
#include <stack>
#include "Rearrange.h"

using namespace std;
stack<int> s;

void Rearrange::acceptdata(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}    
}
void Rearrange::displaydata(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void Rearrange::rearrangedata(){
       int b;
    for(i=0;i<n;i++){
       if(a[i]>=0 && a[i]<=9){
         s.push(a[i]);
         
       }
    }
    for(j=0;j<n;j++){   
       if(a[j]<0 && a[j]>=-9){
         s.push(a[j]);
       }
    }   
    
     for(i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}


