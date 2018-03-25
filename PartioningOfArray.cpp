#include <iostream>
#include "PartioningOfArray.h"

using namespace std;

void PartioningOfArray::accept(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<"enter the lowval-";
    cin>>low;
    cout<<"enter the highval";
    cin>>high;    
}
void PartioningOfArray::display(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
}
void PartioningOfArray::partition(){
       j=0;
     for(i=0;i<n;i+=1){
       
         if (a[i]<low )
            b[j++]=a[i];
      }
      for(i=0;i<n;i+=1){      
         if(a[i]>=low && a[i]<=high) 
            b[j++]=a[i];
       }
       for(i=0;i<n;i+=1){     
          if(a[i]>high)        
             b[j++]=a[i];
       }
     
     cout<<"wave form of array-";
    for(i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    cout<<endl;
     
}
