#include<iostream>
using namespace std;

int main(){
    int i = 10;
    cout<<&i<<endl;
    int * p = &i;
    cout << p << endl;

    cout << *p << endl;

    float f = 10.2;
    float * pf = &f;
    double d = 122.32;
    double* pd = &d;
     
    int * p = &i;

    int * q = p;                  //How to use pointer . 
    cout << sizeof(p) << endl;
    cout << i << endl;
    cout << *p << endl;

    i++;

    cout << i << endl;
    cout << *p << endl;

    int a = *p;          // Here we are copying the value pointed by p in a but p is pointing 
                        // to to i so changes in p will not affect p .
    a++;
    cout << a << endl;
    cout << *p << endl;

    i  = 12;
    cout << i << endl;
    cout << *p << endl;
    *p = 23;
    cout << i << endl;
    cout << *p << endl;

    (*p)++;
    cout << i << endl;
    cout << *p << endl;

    //Take care 
    int i;

    cout << i << endl;

    i++;
    cout << i << endl;

    int* p = 0;        /* whenever we are initializing pointer then then point is to some address 
                        or give it to NULL pointer . */
    cout << p << endl;

    cout<< *p << endl;
    (*p)++;
    cout << *p << endl;
}

// pointer over Mr. Ankit kumar .. 