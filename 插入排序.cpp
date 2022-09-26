#include<iostream>
using namespace std;
int main(){
	int n,a[1001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		int k=i-1;
		while(a[i]<a[k]&&k>=0){
			k--;
		}
		k=k+1;
		int x=a[i];
		for(int s=i-1;s>=k;s--){
			a[s+1]=a[s];
		}
		a[k]=x;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
} 
