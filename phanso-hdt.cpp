#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class phanso{
	private:
		int tu;
		int mau;
	public:
		void nhap ();
		void xuat ();
		phanso cong( phanso p2);
		phanso nhan( phanso p2);
		phanso hieu( phanso p2);
		phanso thuong( phanso p2);
		phanso rutgon(phanso p2);
};
void phanso::nhap(){
	cout<<"Nhap tu: ";cin>>tu;
	do{
		cout<<"Nhap mau: ";cin>>mau;
	}while (mau==0);//mau bang 0 thi nhap lai
}
void phanso::xuat(){
	cout<<tu<<"/"<<mau<<endl;
}
int ucln( int a, int b){
	a = fabs(a);
	b = fabs(b);
	while ( a!=b){
		if ( a>b)
		a=a-b;
		else 
		b=b-a;
	}
}
phanso phanso::cong( phanso p2){
	phanso p;
	p.tu=tu*p2.mau+mau*p2.tu;
	p.mau= mau*p2.mau;
	if ( p.tu!=0){
		int k=p.tu/ucln(p.tu,p.mau);
		p.mau=p.mau/ucln(p.tu,p.mau);
		p.tu=k;
	}
	return p;//tra ve doi tuong p
}
phanso phanso::hieu( phanso p2){
	phanso p;
	p.tu=tu*p2.mau-mau*p2.tu;
	p.mau= mau*p2.mau;
	if ( p.tu!=0){
		int k=p.tu/ucln(p.tu,p.mau);
		p.mau=p.mau/ucln(p.tu,p.mau);
		p.tu=k;
	}
	return p;
}

phanso phanso::nhan(phanso p2){
	phanso p;
	p.tu=tu*p2.tu;
	p.mau=mau*p2.mau;
	if ( p.tu!=0){
		int k=p.tu/ucln(p.tu,p.mau);
		p.mau=p.mau/ucln(p.tu,p.mau);
		p.tu=k;
	}
	return p;
}
phanso phanso::thuong(phanso p2){
	phanso p;
	p.tu=mau*p2.mau;
	p.mau=tu*p2.tu;
	if ( p.tu!=0){
		int k=p.tu/ucln(p.tu,p.mau);
		p.mau=p.mau/ucln(p.tu,p.mau);
		p.tu=k;
	}
	return p;
}
int main (){
	phanso p1,p2,p3,p4,p5,p6;
	cout<<"Nhap phan so thu nhat: "<<endl;
	p1.nhap();
	cout<<"Nhap phan so thu hai: "<<endl;
	p2.nhap();
	cout<<"Phan so thu nhat:";
	p1.xuat();
	cout<<"Phan so thu hai:";
	p2.xuat();
	p3 =p1.cong(p2);
	cout<<"Tong hai phan so:";
	p3.xuat();
	p4=p1.hieu(p2);
	cout<<"Hieu hai phan so:";
	p4.xuat();
	p5=p1.nhan(p2);
	cout<<"Tich hai phan so:";
	p5.xuat();
	p6=p1.thuong(p2);
	cout<<"Thuong hai phan so:";
	p6.xuat();
	return 0;
}
