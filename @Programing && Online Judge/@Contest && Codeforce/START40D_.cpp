#include <bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long int
#define int ll
#define ld long double
#define pb push_back
#define mp make_pair
#define ft front()
#define bk back()
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
#define gap ' '
#define en '\n'
#define endl en
#define sz(x) (int(x.size()))
#define sor(x)  sort(x.begin(), x.end())

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define each(a,x) for (auto& a: x)
int binary_search(int arr[], int n, int x){
    int left = 0, right = n - 1, mid;
    while(left <= right){
        mid = left + (right - left)/2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    int n, x, result;
    cin >> n >> x;
    int arr[n];
    F0R(i, n) cin >> arr[i];
    result = binary_search(arr, n, x);
    if(result == -1) cout << "Not Found" << result << en;
    else cout << "YES, Find Value : " << result << en;
    return 0;
}