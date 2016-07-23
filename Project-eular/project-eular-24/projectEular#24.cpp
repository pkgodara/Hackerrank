#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str = "abcdefghijklm" ;
    
    int t;
    cin>>t;
    
    long long fact=1 ;
    for(int i=2; i<=13 ;i++ )
        fact *=i;
    
    for(int ti=0 ; ti<t ; ti++)
        {
        long long i , j ;
        cin>>i;
        
        i--;
        long long f = fact; //13!
        string s1 , s2 ;
        s1 = str;
        
        for( ; s1.size() ; )
            {
            j = i%f ;
            f /= s1.size() ;
            j /= f ;
            
            s2 += s1[j] ;
            s1.erase(s1.begin()+j);
            //cout<<s2<<" "<<s1<<endl;
        }
        
        cout<<s2<<endl;
    }
    
    return 0;
}
