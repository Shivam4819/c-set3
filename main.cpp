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
#include "PartioningOfArray.h"
#include "NegativeElemToEnd.h"
using namespace std;

/*
 * 
 */
int main() {
    int ch;
    Rearrange r;
    RverseOfArray a;
    WaveForm w;
    PartioningOfArray p;
    NegativeElemToEnd n;
    cout<<"\t\tMenu\n";
    cout<<"\t1)Rearrange of possitive and negative.\n";
    cout<<"\t2)Reverse of an array.\n";
    cout<<"\t3)wave representation of array\n";
    cout<<"\t4)partition of array\n";
    cout<<"\t5)arrange negative element to end\n";
    cout<<"\t6)exit\n";
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
        case 4:p.accept();
               p.display();
               p.partition();
               break;
        case 5:n.accept();
               n.display();
               n.arrange();
               break;
        case 6:cout<<"out of program";
               break;
    }
    }
    while(ch!=6);
    return 0;
}

