#include<bits/stdc++.h>
using namespace std;
#define I INT32_MAX
#define str string 
#define MOD 1000000007 
#define ll long long
#define fo(i,n) for (int i = 0; i < n; i++) 
#define Fo(i,k,n) for (int i = k; i <= n; i++) 
#define Fr(n,k,i) for (int i = n; i >= k; i--) 
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<ll> vl;

int countBits(int n){
    int count = 0;
    while(n > 0){
        count += n&1;
        n = n>>1;
    }
    return count;
}

int countBitsFast(int n){
    int count = 0;
    while(n > 0){
        n = n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << countBits(n) << endl;
    cout << countBitsFast(n) << endl;
    cout << __builtin_popcount(n) << endl;
}