

class Solution {
public:
    int numSquares(int n) {
        // Check if the number is not of the form 4^a(8b+7)
        while (n % 4 == 0)//o(logN)
            n /= 4;
        if (n % 8 == 7)
            return 4;

        int sqrt_n = int(sqrt(n));//O(1) 
        if (sqrt_n * sqrt_n == n)//O(1)
            return 1;

        for (int i = 1; i * i <= n; ++i) {
            int j = int(sqrt(n - i * i));  //O(sqrt(n))
            if (i * i + j * j == n)
                return 2;
        }

//overall TC O(sqrt(n))
//space Complexity O(1)
        return 3;
    }
};

