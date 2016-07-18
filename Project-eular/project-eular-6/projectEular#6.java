import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class projectEular#6 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt() ;
        
        for(int ti=0 ; ti<t ;ti++ )
            {
            int n = sc.nextInt() ;
            
            BigInteger ans = BigInteger.valueOf(0) , num = BigInteger.valueOf(n) ;
            
            ans = ( num.multiply(num.add(BigInteger.valueOf(1))).multiply(num.multiply(BigInteger.valueOf(2)).add(BigInteger.valueOf(1))) ).divide(BigInteger.valueOf(6)).subtract(num.multiply(num.add(BigInteger.valueOf(1))).divide(BigInteger.valueOf(2)).pow(2) ) ;
            System.out.println( ans.abs() );
        }
    }
}
