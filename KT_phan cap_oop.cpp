#include<iostream>
// ke thua phan cap
using namespace std;

class A{
	protected:
		int x;
		int y;
	public:
		void read(){
			cout<<"Nhap gia tri cua  x va y : ";
			cin>>x>>y;
		}
};
class B: public A{
	public: 
	void prod(){
		cout<<"Tich "<<x*y<<endl;
	}
};
class C:public A{
	public:
		void sum(){
			cout<<"Tong "<<x+y;
		}
};
int main (){
	B ob1;
	C ob2;
	ob1.read();
	ob1.prod();
	ob2.read();
	
	ob2.sum();
	return 0;
}
