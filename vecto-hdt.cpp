#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class vecto{
	private:
		int n;//kich thuoc vecto
		int *a;
	public:
		void nhap ();
		void xuat();
		int tich(vecto v2);
		float chieudai();
};
void vecto::nhap(){
	cout<<"Nhap kich thuoc vecto:";
	cin>>n;
	a= new int [n];
	for ( int i=0; i<n;++i){
		cout<<"a["<<i<<"]";
		cin>>a[i];
	}
}
void vecto::xuat(){
	cout<<endl;
	for ( int i=0;i<n;++i)
	cout<<a[i]<<" ";
}
int vecto::tich(vecto v2){//tich vo huong 2 vecto
	int s=0;
	if (n!=v2.n){
		cout<<"Hai vecto khong cung kich thuoc";
		return -1;}
	else
	for ( int i=0;i<n;++i)
	s=s+a[i]*v2.a[i];
	
	return s;
}
float vecto::chieudai()//modun vecto
{
	float d=0.0;
	for( int i=0;i<n;i++)
	d=d+a[i]*a[i];
	return sqrt (d);
}
int main(){
	vecto v1, v2;
	v1.nhap();
	v2.nhap();
	v1.xuat();
	v2.xuat();
	float k=v1.tich(v2);
	if ( k==-1)
		cout<<endl<<"Khong tinh duoc tich cua 2 vecto khong cung kich thuoc";
	else
	cout<<endl<<"Tich vo huong cua 2 vecto la :"<<v1.tich(v2)<<endl;
	cout<<"Mo dun cua 2 vecto la :"<<v1.chieudai();
	return 0;
	}
	
