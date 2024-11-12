//taking nothing returning nothing
//addding two numbers
#include<iostream>
using namespace std;

void addition();        //Step 1: declearing the user defined function
void addition(){        //step 2: function defination 
        int n1,n2,sum;

    cout<<"Enter N1: ";
    cin>>n1;

    cout<<"Enter N2: ";
    cin>>n2;

    sum=n1+n2;

    cout<<"Addition: "<<sum;
}



int main(){

    addition();

    return 0;
}