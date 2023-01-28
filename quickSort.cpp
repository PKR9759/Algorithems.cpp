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




int Partition(int arr[],int low,int high){\
    int pivot=arr[high];
    int i=low;

    for(int j=low;j<high;j++){  //here we put all element that less than pivot is on above of array
                                // so automatically greater elem are on right side 
        if(arr[j]<=pivot){
            
            swap(arr[i],arr[j]);//and at last swap+1 is greater so we can put it last at array
            i++;                   //pivot at it's right position
        }                           // |
    }                               // |
    swap(arr[i],arr[high]);       // <-|
    return (i);// then pivot position we can return
}
void quickSort(int arr[],int low ,int high){
    if(low>=high){
        return;
    }
    int pivot=Partition(arr,low,high); 
    quickSort(arr,low,pivot-1);             //we recursively do above process
    quickSort(arr,pivot+1,high);

}
int main(){
    int arr[]={5,3,8,4,9,8,7,6,12,5};
    int size=10;
    quickSort(arr,0,size-1);//to sort from index 0 t0 length ->full array

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
