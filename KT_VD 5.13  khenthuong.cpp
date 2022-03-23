#include<iostream>
#include<stdio.h>
using namespace std;

class nguoi{
	char hoten[30];
	char ma[10];
	public:
		void nhap(){
			cout<<"Nhap ma : ";
			cin.ignore(1);
			cin.get(ma,10);
			cout<<"Nhap ho ten:";
			cin.ignore(1);
			cin.get(hoten,30);
		}
		void xuat(){
			cout<<"Ma: "<<ma<<"|";
			cout<<"Ho ten: "<<hoten<<"|";
		}
		virtual int khenthuong(){
			return 0;
		}
};
class sinhvien:public nguoi{
	float dtb;
	public:
		void nhap_sv(){
			cout<<"Nhap diem trung binh cua sinh vien:";
			cin>>dtb;
		}
		void xuat_sv(){
			cout<<"Diem trung binh:"<<dtb;
		}
		int khenthuong(){
			return dtb>8;
		}
};
class giaovien:public nguoi{
	float sbb;
	public:
		void nhap_gv(){
			cout<<"Nhap so bai bao:";
			cin>>sbb;
		}
		void xuat_gv(){
			cout<<"So bao bao: "<<sbb<<endl;
		}
		int khenthuong(){
			return sbb>2;
		}
};
int main(){
	nguoi*p; // p la con tro cua lop nguoi
	sinhvien sv[100];
	giaovien gv[20];
	int n, m;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	for(int i=0;i<n;++i){
		sv[i].nhap();
		sv[i].nhap_sv();
	}
	cout<<"Danh sach sinh vien duoc khen thuong ";
	for ( int i=0;i<n;++i){
		p=&sv[i];//p tro vao doi tuong i cua sinh vien
		if(p->khenthuong())//goi ham khenthuong
		{
			sv[i].xuat();
			sv[i].xuat_sv();
		}
	}
	cout<<"\nNhap so giao vien:";
	cin>>m;
	for( int i=0; i<m;++i){
		gv[i].nhap();
		gv[i].nhap_gv();
	}
	cout<<"Danh sach giao vien duoc khen thuong:"<<endl;
	for ( int i=0;i<m;++i){
		p=&gv[i];
		{if(p->khenthuong())
			gv[i].xuat();
			gv[i].xuat_gv();
		}
	}
	return 0;
}


