#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void reverse (char *str, int len){
stack<char> s;
int i;
//push into a stack

for(i=0;i<len;i++)
s.push(str[i]);
//pop from a stack
 for(i=0;i<len;i++){
str[i]=s.top();
s.pop();
}
}
int main()
{
char str []= "I am jahanvi";
cout<<"Before reversing string is : "<< str;
int len =strlen (str);
reverse (str , len);

cout<<"\n\nAfter reversing string is : "<<str<<"\n\n";
system("pause");
}
