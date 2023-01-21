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


void merge(int arr[],int l,int r,int mid){
    int l_size=mid-l+1;
    int r_size=r-mid;
    int L[l_size];
    int R[r_size];
    for(int i=0;i<l_size;i++){
        L[i]=arr[i+l];
    }
    for(int i=0;i<r_size;i++){
        R[i]=arr[mid+1+i];
    }
    R[r_size]=L[l_size]=INT_MAX;

    int l_index=0,r_index=0;
    for(int i=l;i<=r;i++){
        if(L[l_index]<=R[r_index]){
            arr[i]=L[l_index];
            l_index++;
        }
        else{
            arr[i]=R[r_index];
            r_index++;
        }
    }
}

void mergeSort(int arr[],int l,int r){
    if(l==r) return;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,r,mid);
}




int main(){
    int arr[]={1,7,9,3,4,4,89,3};
    mergeSort(arr,0,7);
    for(auto a:arr){
        cout<<a<<" ";
    }
    
    return 0;
}
