#include <iostream>
#include "WaveForm.h"

using namespace std;


void WaveForm::accept(){
    cout<<"enter the length of array-";
    cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
    
}    
}
void WaveForm::display(){
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
}
void WaveForm::swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void WaveForm::waverepresent(){
       
     for(i=0;i<n;i+=2){
       
         if (i>0 && a[i-1] > a[i] )
            swap(&a[i], &a[i-1]);
 
        
        if (i<n-1 && a[i] < a[i+1] )
            swap(&a[i], &a[i + 1]);
     
     }
     cout<<"wave form of array-";
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
     
   
}
