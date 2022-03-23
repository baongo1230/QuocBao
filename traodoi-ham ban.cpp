#include<iostream>
using namespace std;

class B;
class A{
	private:
		int m ;
	public:
		void nhap();
		void xuat();
		friend void traodoi( A &obx,B &oby );
};
class B{
	private :
		int n;
	public:
		void nhap ();
		void xuat();
};
void A::nhap()
{
	cout <<" Nhap m"<<endl;
	cin>> m;
};
void A::xuat(){
	cout<<"m="<<endl;
	
}
void B::nhap(){
	cout<<"Nhap n"<<endl;
	cin>>n;
}
void B::xuat(){
	cout<<"n=";
}
void A::traodoi(){
	int t;
	x.m=t;
	y.n=x.m;
	y.n=t;
}
int main (){
	void nhap();
	void xuat();
	void traodoi();
	cout<<"Sau khi trao doi: "<<endl;
	void nhap();
	void xuat();
	
}
