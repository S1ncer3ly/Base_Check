#include<iostream>
#include<stdio.h>

using namespace std;

class Square{
int a;
public:
    int inputno()
    {
        cout<<"Enter a Number :";
        cin>>a;
        square(a);
    }
    void square(int x)
    {
        x=a*a;
        cout<<"The Square of the number "<<a<<" is : "<<x;
    }


};


int main()
{
    Square s1;
    s1.inputno();
}
