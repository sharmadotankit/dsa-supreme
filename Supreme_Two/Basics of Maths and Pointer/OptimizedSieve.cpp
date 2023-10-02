//
// Created by AnkitS on 02-10-2023.
//

class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        int count = 0;
        vector<bool> prime (n,true);
        prime[0] = prime[1]= false;

        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                count++;
                int j = i*i;
                while(j<n){
                    prime[j] = false;
                    j +=i;
                }
            }
        }
        return count;
    }
};