#include <bits/stdc++.h>
using namespace std;
int main()
{
    #Note -> Initially I was using int, because of that few test cases were failing because it was changing the input.
    long long n;
    cin>>n;
    long long res = 0;
    vector<int> digits;
    while(n){
        digits.push_back(n%10);
        n = n/10;
    }
    reverse(digits.begin(),digits.end());
    // taking out each digits from number from last and then reversing the vector to get the actual number in digits.
    // Now traversing each of the digits of the number and checking if actual digit is smaller or reversed digit is smaller.
    for(int i=0;i<digits.size();i++){
        if(i==0 && (digits[i] == 0 || digits[i] == 9) )
            res= res*10 + max(digits[i], 9-digits[i]);
        else
            res= res*10 + min(digits[i], 9-digits[i]);
    }
    cout<<res<<endl;
    return 0;
}


#Note -> later after seeing solution, I found out that we can take string as input also even if in the question it is mentioned that input is int.



