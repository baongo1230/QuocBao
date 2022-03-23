#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class time{
	private:
		int gio, phut, giay ;
	public:
		time(){
			gio = phut = giay =0;
		}
		time ( int h, int m, int s );
		void nhap ();
		void xuat();
		void chuanhoa();
		void dieuchinh( int h1, int m1, int s1);
		void giatang(int a, int b, int c);
};


void time::nhap(){
	cout<<"Nhap gio, phut, giay:";
	cin>>gio>>phut>>giay;
}
void time::xuat(){
	cout<<gio<<":"<<phut<<":"<<giay<<endl;
}
void time::chuanhoa(){
	if (giay>=60){
		phut=phut+giay/60;
		giay=giay%60;
	}
	if(phut >=60){
		gio=gio+phut/60;
		phut=phut%60;
	}
	if(gio>=24)
	gio=gio%24;
}
void time::giatang(int a, int b, int c){
	gio=gio+a;
	phut=phut+b;
	giay =giay+c;
	chuanhoa();
}
void time::dieuchinh(int h1, int m1, int s1){
	gio=h1;
	phut=m1;
	giay=s1;
	chuanhoa();
}
int main()
{
	time t1;
	t1.time() 
	cout<<"Doi tuong 1:";
	ob1.xuat();
	cout<<"Sau khi chuan hoa:";
	ob1.chuanhoa();
	ob1.xuat();
	cout<<"Gia tang ob1:";
	ob1.giatang(20,3,40);
	cout<<"Sau khi gia tang:";
	ob1.xuat();
	cout<<"Dieu chinh ob1:";
	ob1.dieuchinh(15,30,35);
	cout<<"Sau khi dieu chinh:";
	ob1.xuat();
	cout<<"Nhap doi tuong ob2:";
	ob2.nhap();
	cout<<"Doi tuong ob2:";
	ob2.xuat();
	ob2.chuanhoa();
	ob2.xuat();
	return 0;
}
