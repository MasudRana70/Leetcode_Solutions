class Solution {
public:
    vector<int> sieve(int n) {
        vector<bool> is_prime(n + 1, true);
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; (int)i * i <= n; i++)
            if (is_prime[i])
                for (int j = i * i; j <= n; j += i)
                    is_prime[j] = false;

        vector<int> primes;
        for (int i = 2; i <= n; i++)
            if (is_prime[i])
                primes.push_back(i);

        sort(primes.begin(), primes.end());

        return primes;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> primes = sieve(n);
        map<int,int> m;

        for(int i = 0; i < primes.size(); i++) m[primes[i]]++;

        vector<vector<int>> ans;
        map<int, int> mp;

        for(int i = 0; i < primes.size(); i++){
            if(m.count(n - primes[i])) {
                if(!mp.count(primes[i]) && !mp.count(n - primes[i]))
                {
                    ans.push_back({primes[i], (n - primes[i])}); 
                    mp[primes[i]]++, mp[n - primes[i]]++;
                }
            }
        }

        return ans;
    }
};