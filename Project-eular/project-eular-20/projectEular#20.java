import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt() ;
        for(int ti=0;ti<t;ti++)
            {
            int n = sc.nextInt() ;
            if(n==0)
                n = 1;
            
            BigInteger fact = BigInteger.valueOf(n) ;
            while(n > 1)
                {
                fact = fact.multiply(BigInteger.valueOf(n-1));
                n--;
            }
            
            
            String num = fact.toString(10);
            long sum = 0;
            for(int i=0 ; i<num.length() ; i++ )
                {
                sum += Integer.parseInt( num.substring(i,i+1) ) ;
            }
            
            System.out.println(sum);
        }
    }
}
