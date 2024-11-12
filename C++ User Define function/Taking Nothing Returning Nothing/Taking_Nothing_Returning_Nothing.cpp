//user defince function 
//taking nothing returning nothing
#include<iostream>
using namespace std;

//step 1: function declearation / prototype
void wish ();

//step 2: Defination of the function, working of the function

void wish(){

    cout<<"\nEnter wish..";
    cout<<"\nGood Morning..";
    cout<<"\nExit wish";
}

int main(){

    cout<<"\nEnter main function..";

    wish();

    cout<<"\nExit main..";
    return 0;
}