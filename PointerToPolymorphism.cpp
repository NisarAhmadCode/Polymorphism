#include<iostream>
using namespace std;
class Test
{
private:
int n;
public:
void in()
{
cout<<"Enter a Number:"<<endl;
cin>>n;
}
void out()
{
cout<<"The Value of n="<<n<<endl;
}
};
int main()
{
Test*ptr;
ptr=new Test;
ptr->in();
ptr->out();
}
	
