//taking nothing returning nothing
//calculating squre
#include<iostream>
using namespace std;

void squre();        //Step 1: declearing the user defined function
void squre(){        //step 2: function defination 
        
    int n, s;

    cout<<"Enter any number: ";
    cin>>n;

    s=n*n;

    cout<<"Squre : "<<s;
}



int main(){

    squre();       //step 3: function calling
    squre();       //step 3: function calling
    squre();       //step 3: function calling
    squre();       //step 3: function calling
    squre();       //step 3: function calling

                    //we can reuse this user define funtion as many as time  we want
    return 0;
}