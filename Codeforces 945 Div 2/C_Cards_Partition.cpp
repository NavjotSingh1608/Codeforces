#include<bits/stdc++.h>
using namespace std;

#define int                                                          long long
#define mod                                                          1000000007
#define all(v)                                                       v.begin(),v.end()
#define rall(v)                                                      v.rbegin(),v.rend()
#define pb                                                           push_back
#define vec(arr,n)                                                   vector<int> arr(n); 
#define vecw(arr)                                                    vector<int> arr; 
#define inputvec(arr,n)                                              for(int i=0;i<n;i++) cin>>arr[i]; 
#define max_of(arr)                                                  *max_element(arr.begin(),arr.end())
#define min_of(arr)                                                  *min_element(arr.begin(),arr.end())
#define count_of(arr,i)                                              count(arr.begin(),arr.end(),i)
#define PI(a,b)                                                       pair<a,b>
#define dis(a)                                                       cout<<#a<<" = "<<a<<endl;
#define print(a)                                                     cout<<a<<endl;
#define fsort(arr)                                                   sort(arr.begin(),arr.end());
#define rsort(arr)                                                   sort(arr.rbegin(),arr.rend())
#define sum_of(arr)                                                  accumulate(arr.begin(),arr.end(),(int)0)
#define FAST_IO                                                      ios_base::sync_with_stdio(false); cin.tie(NULL);
const int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dy[8] = {1, 0, -1, 0, 1, -1, 1, -1};
const int N = 2e5+7;
const int INF = 1e18;

 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int sum = sum_of(v), maxi = max_of(v);
    int sum1 = sum + k;
    int m = n;
    while(m>1){
        int t = sum1/m;
        if(t >= maxi && m*t >= sum){
            cout << m << endl;
            return;
        }
        m--;
    }

    cout << 1 << endl;
}
 
signed main(){
   FAST_IO;
 
   int test = 1; 
   cin >> test; 
   while(test--){ 
       solve();
   }
}