#include<iostream>
using namespace std;
class complex
{
private:
int r1,r2,i1,i2,r,i,sum;
public:
void input()
{
cout<<"enter r1 and i1:";
cin>>r1>>i1;
cout<<"enter r2 and i2:";
cin>>r2>>i2;

}
void add(){
cout<<"addition="<<r1+r2<<"+"<<i1+i2<<"i";

}
};
int main()
{ 
complex c;
c.input();
c.add();
return 0;
}

