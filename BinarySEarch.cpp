#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={1,4,7,12,56,78,99,563,567,678};
    int key;cin>>key;
    int len=sizeof(a)/sizeof(a[0]);
    int strt,end,mid;
    strt=0;end=len-1;
    mid=strt+(end-strt)/2;
    while(strt<end){
        if(a[mid]==key){
            cout<<mid+1;break;
        }
        else if(a[mid]>key){
                end=mid-1;
                
        }
        else{
            strt=mid+1;
            
        }

        mid=strt+(end-strt)/2;

        }
        

    

    return 0;
}
