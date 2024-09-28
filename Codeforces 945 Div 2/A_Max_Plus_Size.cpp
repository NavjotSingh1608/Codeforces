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
    int n; cin>>n;
    vector<int> v1,v2;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(i%2 == 0) v1.pb(x);
        else v2.pb(x);
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    if(v1.size()) max1 = max_of(v1) + v1.size();
    if(v2.size()) max2 = max_of(v2) + v2.size();

    cout << max(max1,max2) << endl;

}
 
signed main(){
   FAST_IO;
 
   int test = 1; 
   cin >> test; 
   while(test--){ 
       solve();
   }
}