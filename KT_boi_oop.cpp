#include<iostream>
//ke thua boi
using namespace std;
class A{
	protected:
		int x;
	public:
		void read_x(){
			cout<<"Nhap gia tri cua x: ";
			cin>>x;
		}
};
class B{
	protected:
		int y;
	public:
		void read_y(){
			cout<<"Nhap gia tri cua y: ";
			cin>>y;
		}
};
class C:public A, public B{
	public:
		void sum(){
			cout<<"Tong cua x va y: "<<x+y<<endl;
		}
		void Prod(){
			cout<<"Tich cua x va y: "<<x*y;
		}
};
int main(){
	C ob1;
	ob1.read_x();
	ob1.read_y();
	ob1.sum();
	ob1.Prod();	
	return 0;
}
