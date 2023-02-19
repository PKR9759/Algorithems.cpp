#include<bits/stdc++.h>
using namespace std;

//same as binary search -just devide into three part rather than one single part

int main(){
    int arr[8]={1,3,6,8,9,12,23,45},target=23,pos=-2;
    int l=7,st=0,e=l;
    int mid1=st+(st+((e-2*(st))/3)) ;        // to avoid overflow --as binary search
    int mid2=e-(st+((e-2*(st))/3));     // you can use *** mid1= st+(e-s)/3;  mid2= e-(e-s)/3 ***; 

    while(st<e){
    	if(arr[mid1]==target){pos=mid1;break;}
    	else if(arr[mid2]==target) {pos=mid2;break;}
    	else if(arr[mid1]>target) e=mid1-1;
    	else if(arr[mid2]<target) st=mid2+1;
    	else {st=mid1+1; e=mid2-1;}

    	mid1=st+(st+((e-2*(st))/3));
    	mid2=e-(st+((e-2*(st))/3));

	}
	cout<<pos+1;

}
