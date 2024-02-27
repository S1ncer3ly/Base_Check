#include<iostream>
#include<stdio.h>

using namespace std;

int gcd(int a, int b) { // GCD - Write a function that provides the greatest common divisor of two given numbers
    while (b != 0) {
        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}


int lcm(int a,int b) //LCM - Write a function that provides the least common multiple of two given numbers(use the HCF function)
{
    return(a*b)/gcd(a, b);;
}

int main()
{
    int a,b;
    cout<<"Enter Two Number :";
    cin>>a>>b;
    int gcd_result=gcd(a,b);
    cout<<"Greatest Common Divisor :"<<gcd_result<<endl;
    int lcm_result = lcm(a,b);
    cout<<"Least Common Multiple :"<<lcm_result<<endl;
    return 0;
}
