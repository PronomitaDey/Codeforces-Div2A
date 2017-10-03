#include<iostream>
using namespace std;

int main(){
   
   int n,h,w=0,i;
   cin>>n>>h;
   
   int person;
   for(i=0;i<n;i++){
	   cin>>person;
	   if(person>h)
		   w+=2;
	   else
		   w+=1;
   }
   cout<<w<<endl;
   
   return 0;
   
}