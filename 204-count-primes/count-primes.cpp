// class Solution {
// public:
//     void fillsieve(vector<bool>& sieve) {
//         int n = sieve.size() - 1;

//         for(int i = 2; i * i <= n; i++) {
//             for(int j = i * i; j <= n; j += i) {
//                 sieve[j] = 0;
//             }
//         }
//     }
//     int countPrimes(int n) {
//         if(n <= 2) return 0;
//         n = n - 1;
//         int count = 0;
//         vector<bool> sieve(n + 1, 1);
//         sieve[0] = 0;
//         sieve[1] = 0;
//         fillsieve(sieve);
//         for(int i = 2; i <= n; i++) {
//             if(sieve[i] == 1)
//                 count++;
//         }
//         return count;
//     }
// };








class Solution {
public:
    void fillsieve(vector<bool>& sieve) {
        int n = sieve.size() - 1;

        for(int i = 3; i * i <= n; i += 2) {
            if(sieve[i] == 1) {
                for(int j = i * i; j <= n; j += 2 * i) {
                    sieve[j] = 0;
                }
            }
        }
    }

    int countPrimes(int n) {
        if(n <= 2) return 0;

        n = n - 1;

        vector<bool> sieve(n + 1, 1);

        sieve[0] = 0;
        sieve[1] = 0;

        // Remove all even numbers
        for(int i = 4; i <= n; i += 2) {
            sieve[i] = 0;
        }

        fillsieve(sieve);

        int count = 1;  // prime number 2

        for(int i = 3; i <= n; i += 2) {
            if(sieve[i] == 1) {
                count++;
            }
        }

        return count;
    }
};