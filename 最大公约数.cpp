#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	for(int i=3;i<=60;i++){
		for(int j=3;j<=60;j++){
			int a=gcd(i,j);
			int b=i*j/a;
			if(a==3&&b==60){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
} 
