#include<stdio.h>
#include<iostream>

// A simple Class driven program to check weather a number is even or odd

class IsEven{
public:

    void iseven(int x)
    {
        int a=x;
       if(a%2==0)
        std::cout<<"Number is even ";
       else
        std::cout<<"Number is odd";
    }

};

class InputNumber{
int a;
public:
    int input()
    {
        std::cout<<"Enter a number :";
        std::cin>>a;
        return a;
    };
    void checkeven()
    {
        IsEven e1;
        e1.iseven(a);
    }
};


int main()
{
    InputNumber n1;
    n1.input();
    n1.checkeven();
}
