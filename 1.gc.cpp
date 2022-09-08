//1.vowel/consonant
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    cout<<"LowercaseVowel"<<endl;
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    cout<<"UpercaseVowel"<<endl;
    else
    cout<<"consonant"<<endl;
    return 0;
}
