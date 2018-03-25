#include <iostream>
#include "NegativeElemToEnd.h"
using namespace std;


void NegativeElemToEnd::accept(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}   
}
void NegativeElemToEnd::display(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
}
void NegativeElemToEnd::arrange(){
       j=0;
     for(i=0;i<n;i+=1){
       
         if (a[i]>=0 )
            b[j++]=a[i];
      }
       for(i=0;i<n;i+=1){     
          if(a[i]<0)        
             b[j++]=a[i];
       }
     
     cout<<"after arranging the elment of array-";
    for(i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    cout<<endl;
     
}
