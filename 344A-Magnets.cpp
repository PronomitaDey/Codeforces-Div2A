#include<iostream>
#include<cstring>
using namespace std;

int main(){
	long int n;
	cin>>n;
	char s1[3],s2[3];
	int i=1,c=1;
		cin>>s1;
	while(i<n){
	  cin>>s2;
	  if(strcmp(s1,s2)!=0)
		  c++;
	  strcpy(s1,s2);
	  i++;
	}
cout<<c<<endl;
return 0;
}	