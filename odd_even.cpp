#include<stdio.h>
#include<iostream>



class IsEven{  //Write a function that determines if a given number is even or not
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
