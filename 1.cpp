//1.vowel/consonant
/*#include <iostream>
using namespace std;
int main()
{
    char c;
    int LowercaseVowel,UpercaseVowel;
    cin>>c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    cout<<"LowercaseVowel"<<endl;
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    cout<<"UpercaseVowel"<<endl;
    else
    cout<<"consonant"<<endl;
    return 0;
}*/
//2.large/small(3 numbers)
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"large"<<a;
    else if(b>a && b>c)
    cout<<"large"<<b;
    else
    cout<<"large"<<c;
    return 0;
}*/
//3.leap year
/*#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year%4 == 0 || year%100 ==0 || year%400 ==0)
    cout<<"leapyear"<<endl;
    else
    cout<<"not leapyear"<<endl;
    return 0;
}*/
//4.lirary functions under math.h
/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 cout<<sqrt(4)<<endl;//square root of num
 cout<<exp(4)<<endl;//exponential of num(e^num)
 cout<<log(4)<<endl;//natural logarithm of x(base e)
 cout<<log10(4)<<endl;//logarithm of x(base 10)
 cout<<fabs(4)<<endl;//absolute value of x
 cout<<ceil(4.2)<<endl;//rounds x to smallest integer not less than x
 cout<<floor(4.2)<<endl;//rounds x to largest integer not greater than x
 cout<<pow(4,2)<<endl;//x^y
 cout<<fmod(4.3345,2.643)<<endl;//remainder of x/y as floating-point number
 cout<<sin(1)<<endl;
 cout<<cos(1)<<endl;
 cout<<tan(1)<<endl;
 return 0;
}*/
//5. Write a program that converts Centigrade to Fahrenheit
#include<iostream>
using nammespace std;
int main()

