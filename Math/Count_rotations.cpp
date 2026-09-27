#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

int countRotations(string s, int k) {
    int len = s.size(), count = 0;

    for(int i=0; i<len; i++){
        char c = s[0];
        reverse(s.begin(), s.end());
        s.pop_back();
        reverse(s.begin(), s.end());
        s.push_back(c);
        int cn = 0;
        for(int j = 0; j<len-1; j++){
            if(s[j] == s[j+1]) cn++;
        }

        if(cn == k) count++;
    }

    return count;
}

void solve(){
    string s;
    int k;
    cin>>s;
    cin>>k;
    cout<<s<<" "<<k<<endl;

    int ans = countRotations(s, k);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t=1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}