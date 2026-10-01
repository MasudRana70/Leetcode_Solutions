class Solution {
public:
    vector<int> sieve(int n) {
        vector<bool> is_prime(n + 1, true);
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i * i <= n; i++)
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
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();

        for(int i = n-2; i >= 0; i--){
            if(nums[i] >= nums[i+1]){
                vector<int> p = sieve(nums[i]);
                bool fnd = 0;

                for(int j = 0; j < p.size(); j++){
                    if(nums[i] - p[j] < nums[i+1] && nums[i] != p[j]){
                        fnd = 1;
                        nums[i] -= p[j];
                        break;
                    }
                }

                if(!fnd) return 0;
            }
        }

        return 1;
    }
};