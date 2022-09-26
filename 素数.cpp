#include<iostream>
using namespace std;
int fun(int a){
	int num=0;
	for(int i=1;i<=a;i++){
		if(a%i==0) num++;
	}
	if(num==2)return 1;
	else return 0;
}
int main(){
	for(int i=2;i<=100;i++){
		if(fun(i)){
			cout<<i<<endl;
		}
	}
} 
