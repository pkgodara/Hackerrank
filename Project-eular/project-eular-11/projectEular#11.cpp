#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int gr[20][20] ;
    for(int i=0;i<20;i++)
        {
        for(int j=0;j<20;j++)
            {
            cin>>gr[i][j] ;
        }
    }
    
    long long ans = 0 ;
    
    for(int i=0 ; i<=16 ; i++)
        {
        for(int j=0;j<=16;j++)
            {
            long v = gr[i][j]*gr[i+1][j]*gr[i+2][j]*gr[i+3][j] ;
            ans = ( ans > v )? ans : v ;
            
            v = gr[i][j]*gr[i][j+1]*gr[i][j+2]*gr[i][j+3] ;
            ans = ( ans > v )? ans : v ;
            
            v = gr[i][j]*gr[i+1][j+1]*gr[i+2][j+2]*gr[i+3][j+3] ;
            ans = ( ans > v )? ans : v ;
        }
        for(int j = 17;j<20;j++)
            {
            long v = gr[i][j]*gr[i+1][j]*gr[i+2][j]*gr[i+3][j] ;
            ans = ( ans > v )? ans : v ;
        }
    }
    
    for(int i= 17;i<20;i++)
        {
        for(int j=0;j<=16;j++)
            {
            long v = gr[i][j]*gr[i][j+1]*gr[i][j+2]*gr[i][j+3] ;
            ans = ( ans > v )? ans : v ;
        }
    }
    
    for(int i = 0 ; i <=16 ; i++)
        {
        for(int j = 3; j < 20 ; j++)
            {
            long v = gr[i][j]*gr[i+1][j-1]*gr[i+2][j-2]*gr[i+3][j-3] ;
            ans = ( ans > v )? ans : v ;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
