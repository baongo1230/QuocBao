#include<iostream>
using namespace std;
class base{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
		base(){
			x=1;y=2;z=3;
		}
};
class derive:protected base{
	// y va z tro thanh protected cua lop dan xuat
	public:
		void showdata(){
			cout<<"X khong the truy cap"<<endl;
			cout<<"Gia tri cua y la "<<y<<endl;
			cout<<"Gia tri cua z la "<<z<<endl;
		}
};
int main (){
	derive a;
	a.showdata();
	return 0;
}
