//Write a C program that prints the perimeter and area of a rectangle to take its height and width as input.
#include<iostream>
using namespace std;
int main()
{
    int l,h,area,perimeter;
    cin>>l>>h;
    cout<<"perimeter="<<2*(l+h)<<"\n"<<"area="<<(l*h);
    return 0;

}
