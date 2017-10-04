#include<iostream>
#include<new>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i;
	int num,un=0,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>num;
		sum+=num;
		if(sum<0){
			un+=abs(sum);
			sum=0;
		}
	}
	cout<<un<<endl;
	
return 0;
}
			