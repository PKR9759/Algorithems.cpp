#include<bits/stdc++.h>
#define ll long long
#define loop(k,n)      for(auto i = k; i < n; i++)
#define loop1(k,n)     for(auto i = k; i <= n; i++)
#define IS_EVEN(x)   (!(x & 1))
#define IS_ODD(x)    (x & 1)
#define lcm(a,b) (a*b/gcd(a,b))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
using namespace std;




double eps = 1e-6;  //to find till  6 - 1 = 5 decimal point  after point accuracy
int main(){
    double x;cin>>x;
    double hi=x,lo=1,mid;
    while(hi-lo  > eps){
        mid=hi/2+lo/2;
        if(mid * mid> x){
            hi=mid;
        }
        else{
            lo=mid;
        }
    }
    cout<<setprecision(10)<<lo<<endl;  //hi and low both are same till given accuracy 
    cout<<setprecision(10)<<hi<<endl;

    return 0;//  if you find difficult to umderstand watch LUV yt video of that
}
