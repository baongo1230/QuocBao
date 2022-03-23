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
class derive:public base{
	//y tro thanh protected va z tro thanh public cua lop dan xuat
	public:
		void showdata(){
			cout<<"X khong the truy cap "<<endl;
			cout<<"gia tri cua y la"<<y<<endl;
			cout<<"gia tri cua x la"<<z<<endl;
		}
};
int main(){
	derive a;
	a.showdata();
	return 0;
}
