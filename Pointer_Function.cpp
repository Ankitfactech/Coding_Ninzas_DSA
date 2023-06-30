#include<iostream>
using namespace std;

int sum(int *a,int size)
{
    int ans =0;
    for(int i=0;i<size;i++)
    {
        ans+=a[i];
    }
    return ans;
}
int main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    //cout<<sum(a,10);       When we pass array then it is passes as a pointer.
                            //When we do a[something] operation on pointer then it behaves same as array .
                            (a+3) passing means pass from index 3 ignoring other two . 
    cout<<sum(a+3,7);
}

//Function pointer .
void print(int *p)
{
    cout<<*p<<endl;
}
void incrementPointer(int *p)
{
    p=p+1;                          // changin the adress of pointer-storing will not affect 
                                    // the actual one .
}
void increment(int *p)
{
    (*p)++;                       /*Changing the value pointed by pointer will afect the or
                                   origional value . */
}
int main()
{
    int i=10;
    int *p = &i;
    

    print(p);
    cout<<p<<endl;
    incrementPointer(p);
    cout<<p<<endl;
    cout<<*p<<endl;
    increment(p);
    cout<<*p<<endl;
}