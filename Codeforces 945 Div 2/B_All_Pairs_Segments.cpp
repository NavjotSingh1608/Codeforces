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


template<typename T>
void Print(vector<T> arr){
   for(auto i: arr){
       cout << i << " ";
   }
   cout<<endl;
}

template<typename T1,typename T2>
void Print(vector<pair<T1,T2>> arr){
    for(auto i: arr){
        cout << i.first << " " << i.second << endl;
    }
    cout<<endl;
}


void solve(){
    int n,q; cin>>n>>q;
    vector<int> v(n),v1(q);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<q;i++) cin>>v1[i];

    vector<int> p(n);
    for(int i=1;i<=n;i++){
        p[i-1] = (n-i)*i + (i-1);
    }
    

    // Print(p);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[p[i]]++;
    }

    for(int i=1;i<n;i++){
        int val = v[i] - v[i-1] - 1;
        int times = (i)*(n-i);
        mp[times] += val;
    }

    // for(auto it : mp){
    //     cout << it.first << " "<<it.second << endl;
    // }

    for(auto it : v1){
        cout << mp[it] << " " ;
    }cout << endl;
    // Print(ans);
}
 
signed main(){
   FAST_IO;
 
   int test = 1; 
   cin >> test; 
   while(test--){ 
       solve();
   }
}