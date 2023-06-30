#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p =&i;      // Here pointer p is pointing to i or storing the adress of i.
                     // When we add or substract number from a pointer
                     //let  say p+1 then if it is a int pointer then it moves 4 bites
                     // points to next integer , this all makes sense in array . 
    cout<<p<<endl;
   // p = p+1 ;
    p = p +2;
    cout<<p<<endl;
    p= p - 2;
    cout<<p<<endl;

    double d= 102.3;
    double *dp = &d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;
}