#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class phanso{
	int t, m;
	public:
		void nhap();
		void xuat();
		friend phanso operator-(phanso p1);
		friend phanso operator+(phanso p1, phanso p2);
		friend phanso operator-(phanso p1, phanso p2);
		friend phanso operator*(phanso p1, phanso p2);

};
void phanso::nhap(){
	cout<<"Nhap tu so :";
	cin>>t;
	do{
		cout<<"Nhap mau so :";
		cin>>m;}
		while(m==0);
}
void phanso::xuat(){
	cout<<t<<"/"<<m<<endl;	
}
phanso operator-(phanso p1){
	phanso p;
	p.t=-t;
	p.m=m;
	return p;
}
