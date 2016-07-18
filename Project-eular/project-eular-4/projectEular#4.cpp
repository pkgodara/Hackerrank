#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    //store palindromes in array
    long arr[5000] , len = 0 ;
    
    for(int i = 100 ; i <=999 ; i++ )
    {
        for(int j=100;j<=999 ;j++ )
        {
                long l = i*j ;
                string s1 = to_string(l) ;
            if( s1.length() < 6 )
                continue;
            
                bool f = true;
                for(int k=0;k< (s1.length())/2 ; k++)
                    {
                    if( s1[k] != s1[ s1.length() -1-k] )
                        {
                        f = false;
                        break;
                    }
                }
                
                if( f )
                    {
                    arr[len] = l;
                    //cout<<arr[len]<<"  "<<len<<endl;
                    len++;
                }
            }
        }
    //sort array.
    sort( arr , arr + len );
    /*
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"  "<<i<<endl;
    */
    for(int ti=0;ti<t;ti++)
        {
        long n ;
        cin>>n;
        
        long i = 0 ;
        while( arr[i] < n )
        {
            i++;
            if( i >= len )
                break;
        }
        
        cout<<arr[i-1]<<endl;
    }
    
    return 0;
}
