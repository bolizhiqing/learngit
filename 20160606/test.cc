#include<iostream>
using namespace std;
extern int num =0;
namespace B
{
	int num = 2;
}
namespace A
{
	int num =1;
	void dispA()
	{
		int num = 3;
		cout<<"dispA num:"<<num<<endl;
		cout<<"A num:"<<A::num<<endl;
		cout<<"B num:"<<B::num<<endl;
		cout<<"out num:"<<::num<<endl;
	}
}
int main()
{
A::dispA();
return 0;
}
