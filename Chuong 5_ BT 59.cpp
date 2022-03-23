#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

/*class ngay{
	int d,m,y;
	public:
		void nhap(){
			cout<<"Nhap ngay thang nam :";
			cin>>d>>m>>y;
		}
		void xuat(){
			cout<<d<<"/"<<m<<"/"<<endl;
		}
};*/
class canbo{
	protected:
		char macb[10], madv[30], hoten[30], ngaysinh[11];
	//	ngay ngaysinh;
	public:
		char *get_madv(){
			return madv;
		}
		void nhap_cb(){
			cout<<"Ma can bo :";
			gets(macb);
			cout<<"Ma don vi : ";
			gets(madv);
			cout<<"Ho ten : ";
			gets(hoten);
			cout<<"Ngay sinh: ";
			gets(ngaysinh);
		//	ngaysinh.nhap();
		}
		void xuat_cb(){
			cout<<macb<<"|"<<madv<<"|"<<hoten<<"|"<<ngaysinh<<endl;
		}
};
class luong:public canbo{
	long phucap, baohiem;
	float hsl;
	public:
		void nhapl(){
			nhap_cb();
			cout<<"Phu cap : ";
			cin>>phucap;
			cout<<"He so luong : ";
			cin>>hsl;
			cout<<"Bao hiem : ";
			cin>>baohiem;
		//	ngaysinh.xuat();
			cin.ignore();
		}
		long tinhluong(){
			return (hsl*1350000+phucap-baohiem);
		}
		void xuatl(){
			xuat_cb();
			cout<<phucap<<"|"<<hsl<<"|"<<baohiem<<"|"<<tinhluong()<<"\n";
		}
};
int main(){
	luong cb[50];
	int n;
	do {
		cout<<"Nhap so luong can bo: ";
		cin>>n;
	}while(n>50);
	cin.ignore();
	//nhap du lieu can bo
	for ( int i=0;i<n;i++)
	cb[i].nhapl();
	cout<<"Bang luong cua can bo theo tung don vi :\n";
	//sap xep can bo theo ma don vi
	for ( int i=0; i<n;i++)
		for ( int j=i+1; j<n;j++)
		if ( strcmp(cb[i].get_madv(), cb[j].get_madv())>0){
			luong tam;
			tam =cb[i];
			cb[i]=cb[j];
			cb[j]=tam;
		}
		// in theo ma don vi
		for ( int i=0;i<n;i++){
			if(i==0 || strcmp(cb[i].get_madv(), cb[i-1].get_madv())!=0)
			cout<<"-- Ma don vi: "<<cb[i].get_madv()<<endl;
			cb[i].xuatl();
		}
	return 0;
}
/*class QLCB{
	luong cb[50];
	int n;
	public:
		void nhap(){
		do {
			cout<<"Nhap so luong can bo: ";
			cin>>n;
			}while(n>50);
			cin.ignore();
			//nhap du lieu can bo
			for ( int i=0;i<n;i++)
			cb[i].nhapl();
	}
		void xuat(){
			for ( int i=0; i<n;i++)
		for ( int j=i+1; j<n;j++)
		if ( strcmp(cb[i].get_madv(), cb[j].get_madv())>0){
			luong tam;
			tam =cb[i];
			cb[i]=cb[j];
			cb[j]=tam;
		}
		// in theo ma don vi
		for ( int i=0;i<n;i++){
			if(i==0 || strcmp(cb[i].get_madv(), cb[i-1].get_madv())!=0)
			cout<<"-- Ma don vi: "<<cb[i].get_madv()<<endl;
			cb[i].xuatl();
		}
	}
int main(){
	QLCB cb;
	cb.nhap();
	cb.xuat();
	return 0;
}*/
