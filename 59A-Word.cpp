#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[101];
	cin>>s;
	int up=0,low=0,len,i;
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>=65 && s[i]<=90)
			up++;
		else
			low++;
	}
		
	if(up==low){
		//convert all to lower
        for(i=0;i<len;i++)
			if(s[i]>=65 && s[i]<=90)
				s[i]+=32;
	}
    else if(up>low){
        //convert to upper
        for(i=0;i<len;i++){
			if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
			}
		}
	}

    else{ 
        //convert to lower 		
	        for(i=0;i<len;i++)
			if(s[i]>=65 && s[i]<=90)
				s[i]+=32;
	}
	
	cout<<s<<endl;
	
return 0;
}
