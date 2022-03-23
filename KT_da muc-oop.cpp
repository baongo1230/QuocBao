// ke thua da muc
#include<iostream>
using namespace std;

class base{
	protected: 
	int x;
	public:
		void read(){
			cout<<"Nhap x = ";
			cin>>x;
		}
};
class derive1: public base{
	protected :
		int y;
	public:
	void readdata(){
		cout<<"Nhap y =";
		cin>>y;
	}
};
class derive2: public derive1{
	private:
		int z;
	public:
		void indata(){
		cout<<"Nhap z =";
		cin>>z;
		}
	void prod(){
		cout<<"\n Tich = "<<x*y*z;
	}	
};
int main ()
{
	derive2 ob1;
	ob1.read();
	ob1.readdata();
	ob1.indata();
	ob1.prod();
	return 0;
}
