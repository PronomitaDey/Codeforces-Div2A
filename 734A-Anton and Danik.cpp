#include<iostream>
#include<cstring>
using namespace std;

int main(){
	long int n;
	cin>>n;
	char s[n+1];
	cin>>s;
	
	int i,a=0,d=0;
	for(i=0;i<n;i++){
		if(s[i]=='A')
			++a;
		else
			++d;
	}
	if(a==d)
		cout<<"Friendship"<<endl;
	else if(a>d)
		cout<<"Anton"<<endl;
	else
		cout<<"Danik"<<endl;
	
	return 0;
}
	