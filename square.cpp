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
        cube(a);
    }
    void square(int x)
    {
        x=a*a;
        cout<<"The Square of the number "<<a<<" is : "<<x;
    }
    void cube (int x)  // Cube Function using square class
    {
        x= a*a*a;
        cout<<"\nThe Cube of the number "<<a<<" is : "<<x;
    }


};


int main()
{
    Square s1;
    s1.inputno();
}
