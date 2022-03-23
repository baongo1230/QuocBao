#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class mang{
	private:
		int *a;
		int n;
	public:
	void nhap (){
		cout<<"Nhap so phan tu cua mang :";
		cin>>n;
		a= new int [n];
		if (a==NULL){
		cout<<"Loi cap phat bo nho!";
		return a;
		}
			for ( int i=0; i<n;++i){
		cout<<"a["<<i<<"]";
		cin>>a[i];
		}
	}
	void xuat(){
		cout<<endl;
		for ( int i=0;i,n;i++)
		cout<<a[i]<<" ";
	}	
	cong (mang m2){
		mang m;
		if ( n!=m2.n){
			cout <<"Khong cong duoc ";
			exit (1);}
		m.a=new int [n];{
		if (m.a=NULL){
			cout<<"Loi cap phat bo nho !";				
			exit (1);
			}
		}	
		for ( int i=0; i<=n;i++)
		m.a[i]=a[i]+m2.a[i];
		m.n=n;
		}
	};
int main ()
{
	mang m1, m2;
	m1.nhap();
	m2.nhap();
	m1.xuat();
	m2.xuat();
	cout<<"Tong cua 2 mang la :"<<m1.cong(m2);
	return 0;	
}
