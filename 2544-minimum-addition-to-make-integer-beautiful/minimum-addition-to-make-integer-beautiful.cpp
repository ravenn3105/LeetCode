class Solution {
public:
    long long makeIntegerBeautiful(long long int n, int target) {
       int sum=  SumofDigits(n);
       if (sum<= target){ return 0;}
       long long int result=0;
       long long int place=1;
       while( sum>target){
           long long int digit= n%10;
           if (digit==0){
               n/=10;
               place*=10;
               continue;
           }
           long long int diff= 10-digit;
           result+= diff*place;
           n =(n/10)+1;
           place *=10;
           sum= SumofDigits(n);
       }
       return result;
    }
    int SumofDigits(long long n){
        int sum=0;
        while (n!=0){
            sum+= n%10;
            n /=10;
        }return sum;
    }
};