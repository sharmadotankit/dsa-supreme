//
// Created by Ankit Sharma on 10/1/2023.
//

https://leetcode.com/problems/count-primes/




// Normal Approach  : Time limit exceeded
//Square Root Approach  : If the number is not prime , at least one of its factor is less than root n.Hence we can reduce the range from 0 to root n, instead of n.
//Sieve Of Erathosthenes  : Create array for size n-1, mark all as true, loop from 2 till n-1 , marks all value coming in table of val as not prime. count prime .

//Code for Sieve Of Erathosthenes

class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        int count = 0;
        vector<bool> prime (n,true);
        prime[0] = prime[1]= false;

        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
                int j = 2*i;
                while(j<n){
                    prime[j] = false;
                    j +=i;
                }
            }
        }



        return count;


    }
};

//Code for Square Root  approach
class Solution {
public:

    bool isPrime(int n){
        int rootN = sqrt(n);
        for(int i=2;i<rootN;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {
        int count = 0;
        if(n<=1){
            return 0;
        }

        for(int i=2;i<n;i++){
            bool ans = isPrime(i);
            if(ans){
                count++;
            }
        }

        return count;


    }
};

//Code for Normal approach
class Solution {
public:
    bool isPrime(int n){
        for(int i=2;i<n-1;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {
        int count = 0;
        if(n<=1){
            return 0;
        }

        for(int i=2;i<n;i++){
            bool ans = isPrime(i);
            if(ans){
                count++;
            }
        }

        return count;


    }
};