
/*  QUE::
        you given size odf array .you declare one array of size n and then
        you given no. of queries and also queries (in queries A B D given to you)
        you need to add D from A to B in array elem.
*/


#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N];//declare global array with all 0 elements
                        //you can also do it in main with making all elemnt 0 bt Loop
int main(){
    int n;cin>>n;//size of array
    int t;cin>>t;//no.of queries
    

    while(t--){
        int a,b,d;cin>>a>>b>>d;
        arr[a]+=d;//adding D at A index
        arr[b+1]+=(-d);//adding -D at B+1 index
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];//prefix sum array making
    }

    //printing result array
    for(int i=1;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}
