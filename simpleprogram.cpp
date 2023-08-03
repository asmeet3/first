#include <iostream>
using namespace std;

void calculate (int num1,int num2)
{
    int product,sum,diff;
    float division;
    product=num1*num2;
    division=num1/num2;
    sum=num1+num2;
    diff=num1-num2;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Difference = "<<diff<<endl;
    cout<<"Product = "<<product<<endl;
    cout<<"Division = "<<division<<endl;
}
int main()
{
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    calculate(num1,num2);

    return 0;
}
