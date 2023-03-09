#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
//rabin karp algo..

int q=1e9+7;
int d=256;



int rabin_karp(string txt,string pat){
	int n=txt.size(),i,j,cnt=0;//size of main str..
	int m=pat.size();//size of sub str...
	int h=1;
	int p=0,t=0;

	for( i=0;i<m-1;i++){
		h=(h*d)%q;

	}
	//calcul.. hash of pattern and sub str


	for(i=0;i<m;i++){
		p=(p*d+(pat[i]))%q;
		t=(t*d+(txt[i]))%q;

	}

	//now slide the window..

	for( i=0;i<=n-m;i++){
		if(p==t){
			for( j=0;j<m;j++){
				if(pat[j]!=txt[i+j]){
					break; //any mis_match found ->discard
				}
			}
			if(j==m){
				cnt++;
			}
		}
			//calculate hash for next window
			if(i<n-m){

				t=(d*(t-(txt[i])*h) +  txt[i+m])%q;
	
			
			//in case of overflow and -ve value of hash of txt
			if(t<0){
				t+=q;
			}
		
	}
	
}
	
return cnt;
}
int main() {
	
	string txt="kuluppdiprupsangbahiparmupr";
	string pat="up";
	cout<<rabin_karp(txt,pat);
    return 0;
}
