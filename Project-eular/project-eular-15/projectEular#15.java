import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int t = sc.nextInt() ;
        
        for(int ti=0 ; ti<t ; ti++ )
            {
            int n = sc.nextInt(), m = sc.nextInt() ;
            
            BigInteger mod = BigInteger.valueOf(1000000007) ;
            
            BigInteger ncr = BigInteger.valueOf(1) ;
            
            for(int i = n+m ; i>= n+1 ; i--)
                {
                ncr = ncr.multiply(BigInteger.valueOf(i)) ;
            }
            for(int i = m ; i>= 2 ; i--)
                {
                ncr = ncr.divide(BigInteger.valueOf(i));
            }
            
            ncr = ncr.mod(mod) ;
            
            System.out.println(ncr) ;
            
        }
    }
}
