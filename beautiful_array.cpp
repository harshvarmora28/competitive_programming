// Author: Harsh Varmora
// Problem: Beautiful array
// Date: 21 August,2022

#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
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
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);
const int mod = 1'000'000'007;
const int N = 3e5, M = N;

void solve() {
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, k, b, s, i, ans;
    cin>>t;
    for(;t--;){
        cin>>n>>k>>b>>s;
        if((k*b+n*(k-1))<s || s<k*b){
            cout<<"-1\n";
            continue;
        }
        ll a[n];
        a[0]=b*k;
        s=s-b*k;
        if(s>0){
            a[0]=a[0]+min(k-1, s);
            s=s-min(k-1, s);
        }
        for(i=1; i<n; i++)
        {
            if(s>0){
                a[i]=min(k-1, s);
                s=s-a[i];
            }else{
                a[i]=0;
            }
        }
        for(i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
        cout<<"\n";
    }
    return 0;
}