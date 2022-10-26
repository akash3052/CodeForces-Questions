// Note -> I am taken string as input even in the question it was mentioned that the input is int and it got accepted.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] >= '5')
            s[i] = '9' - s[i] + '0'; 
            // Note -> we have to add '0' also because ascii('9')= 57 and ascii('5') = 53. so '9'-'5'= 4 -> which is ascii of some other character. 
            // That's why add '0'(asccii - 48) to 4 will be 52(ascii of 4) 
    }
    if(s[0] == '0')
        s[0] = '9';
    cout<<s<<endl;
}
