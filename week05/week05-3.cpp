#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	//step03:
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	//step01 :input
	while( scanf("%c",&c) == 1){
		c = tolower(c); //step04
		if(c==' ' || c=='\n') printf("%c",c);
		else{ 
			for(int i=0;s[i]!=0;i++){ //step05 find c in a
				if(c==s[i]) printf("%c",s[i-2]);
				}
			}
		
		//printf("%c",c);//step02: output
	}
}