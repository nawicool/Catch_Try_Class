#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Error
{
int err_code;
char *err_desc;
public:
Error(int c,char *d)
{
err_code=c;
err_desc=new char[strlen(d)];
strcpy(err_desc,d);
}
void err_display(void)
{
cout<<"\nError Code: "<<err_code<<"\n Error Description: "<<err_desc;
}
};
int main(){


    int a;
    int b;
try
{
cout<<"Press a value.";
cin>>a;
if(a==5)
    throw Error(99,"Test Exception");
if(a==6)
    throw Error(77,"Test Exception");
}
catch(Error e){
cout<<"\nException caught successfully.";
e.err_display();
  }
return 0;
}
