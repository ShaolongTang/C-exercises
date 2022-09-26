#include<iostream>
using namespace std;
int fun(int a){
	int x=a;
	int ans=0;
	while(x!=0){
		ans=ans*10+x%10;
		x=x/10;
	}
	return ans;
}
int main(){
	for(int i=1000;i<=9999;i++){
		if(i*4==fun(i)){
			cout<<i<<endl;
		}
	}
} 
