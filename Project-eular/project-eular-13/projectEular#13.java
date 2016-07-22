import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class projectEular#13 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int n = sc.nextInt() ;
        
        BigInteger sum = BigInteger.valueOf(0);
        
        for(int i=0;i<n;i++)
            {
            sum = sum.add( sc.nextBigInteger() );
        }
        
        String str = sum.toString(10) ;
        
        for(int i=0;i<10;i++)
            System.out.print(str.charAt(i));
        
        System.out.println();
        
    }
}
