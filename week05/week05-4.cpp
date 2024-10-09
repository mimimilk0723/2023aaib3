#include <iostream>//step01: scanf()
#include <stdio.h>//step02: cout
#include <string>//step03:tolower() find()
using namespace std;
int main()
{//step06: keyboread keys string
	string s = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	//step01 :input
	while( scanf("%c",&c) == 1){ ///step01:input
		c = tolower(c); //step03:tolower(c)
		if(c==' ' || c=='\n') cout<<c; //step02:Output
		else{ 
			int i = s.find(c);//step04:find()
				cout<<s[i-2];//step05:output s[i-2]
				}
			}
}