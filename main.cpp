/* 
 * File:   main.cpp
 * Author: shivam
 *
 * Created on 25 March, 2018, 7:27 PM
 */

#include <iostream>
#include "Rearrange.h"
#include "ReverseOfArray.h"
#include "WaveForm.h"
using namespace std;

/*
 * 
 */
int main() {
    int ch;
    Rearrange r;
    RverseOfArray a;
    WaveForm w;
    cout<<"\t\tMenu\n";
    cout<<"\t1)Rearrange of possitve and negative.\n";
    cout<<"\t2)Reverse of an array.\n";
    cout<<"\t3)wave representation of array\n";
    cout<<"\t4)exit\n";
    cout<<"Enter the choice";
    do{
    cin>>ch;
    switch(ch){
        case 1:r.acceptdata();
               r.displaydata();
               r.rearrangedata();
               break;
        case 2:a.accept();
               a.display();
               a.reverse();
               break;
        case 3:w.accept();
               w.display();
               w.waverepresent();
               break;
        case 4:cout<<"out of program";
               break;
    }
    }
    while(ch!=4);
    return 0;
}

