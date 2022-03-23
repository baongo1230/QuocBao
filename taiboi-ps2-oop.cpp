#include<iostream>
using namespace std;

class phanso{
	int t, m;
	public:
		void nhap();
		void xuat();
		friend phanso operator -(phanso p1);
		friend phanso operator +(phanso p1, phanso p2);
		friend phanso operator -(phanso p1, phanso p2);
		friend phanso operator *(phanso p1, phanso p2);
		friend phanso operator /(phanso p1, phanso p2);
};
void phanso::nhap(){
	cout<<"Nhap tu so:";
	cin>>t;
	do{
		cout<<"Nhap mau so:";
		cin>>m;
	}
	while (m==0);
}
void phanso::xuat(){
	cout<<t<<"/"<<m;
}
phanso operator-(phanso p1){
	phanso p;
	p.t=-p1.t;
	p.m=p1.m;
	return p;
}
phanso operator +(phanso p1, phanso p2){
	phanso p;
	p.t=p1.t*p2.m+p1.t*p2.t;
	p.m=p1.m*p2.m;
	return p;
}
phanso operator-(phanso p1, phanso p2){
	phanso p;
	p.t=p1.t*p2.m-p1.t*p2.t;
	p.m=p1.m*p2.m;
	return p;
}
phanso operator *(phanso p1, phanso p2){
	phanso p;
	p.t=p1.t*p2.t;
	p.m=p1.m*p2.m;
	return p;
}
phanso operator /(phanso p1, phanso p2){
	phanso p;
	p.t=p1.t*p2.m;
	p.m=p1.m*p2.t;
	return p;
}
int main(){
	phanso p1, p2, p3, p4, p5,p6,p7;
	cout<<"Nhap phan so 1:"<<endl;
	p1.nhap();
	cout<<"Nhap phan so 2:"<<endl;
	p2.nhap();
	cout<<"Phan so thu 1:";
	p1.xuat();
	cout<<"Phan so thu 2:";
	p2.xuat();
	p3=p1+p2;
	cout<<"\n p3=p1+p2 = ";
	p3.xuat();
	p4=p1-p2;
	cout<<"\n p4=p1-p2 = ";
	p4.xuat();
	p5=p1*p2;
	cout<<"\n p5=p1*p2 = ";
	p5.xuat();
	p6=p1/p2;
	cout<<"\n p6=p1/p2 = ";
	p6.xuat();
	p7=-p1;
	cout<<"\n Doi so cua p1 la: ";
	p7.xuat();
	return 0;
}
