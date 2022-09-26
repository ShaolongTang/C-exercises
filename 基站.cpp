#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int N,M,a;
	cin>>N>>M>>a;
	long long int x=a/2,y=a/2;
	long long int num_x=(N-x)/a;
	if((N-x)%a>float(a)/2.0) num_x+=2;
	else num_x+=1;
	long long int num_y=(M-y)/a;
	if((M-y)%a>float(a)/2.0) num_y+=2;
	else num_y+=1;
	long long int ans=(num_x)*(num_y);
	cout<<ans;
} 
