#include<iostream>
#include<new>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int* s=new int[n];
	int i;
	for(i=0;i<n;i++)
		cin>>s[i];
	
	int start=0,end=n-1;
	int ser=0,dim=0;
	int turn=0;
	
	while(start<=end){
	    if(turn==0){
			ser+=(s[start]>=s[end])?s[start]:s[end];
            turn=1;
			if(s[start]>=s[end])
				start++;
			else end--;
			
	    }
		else 
	    if(turn==1){
	        dim+=(s[start]>=s[end])?s[start]:s[end];
            turn=0;
			
			if(s[start]>=s[end])
				start++;
			else end--;
	    }
}		
cout<<ser<<" "<<dim<<endl;
return 0;
}
			  
					
			
		