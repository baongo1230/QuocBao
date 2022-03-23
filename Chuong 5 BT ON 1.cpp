#include <iostream>
#include <stdio.h>
using namespace std;
class Nguoi
{
char hoten[25], ma[10];
public :
void nhap()
{
cout<<"\n Nhap ma: "; fflush(stdin);
gets(ma);
cout<<"\n Ho ten: "; gets(hoten);
}
void xuat()
{

cout<<"\n Ma: "<<ma;
cout<<"\n Ho ten: "<<hoten;

}
virtual int khenthuong() //khenthuong la ham ao va se duoc dinh nghia lai o lop con
{ return 0;}

};


class Sinhvien : public Nguoi
{ float dtb;
public :
void nhap_SV()
{ cout<<"\n Nhap diem trung binh: ";
fflush(stdin);
cin>>dtb;
}
void xuat_SV()
{
cout<<"\n Diem trung binh: "<<dtb;
}
int khenthuong() //dinh nghia lai ham ao cho lop Sinhvien
{
return dtb > 8;
}
};


class Giaovien : public Nguoi
{ float sbb;
public :
void nhap_GV()
{
cout<<"\nNhap so bai bao: ";
cin>>sbb;
}
void xuat_GV()
{
cout<<"\n So bai bao: "<<sbb;
}
int khenthuong() //dinh nghia lai ham ao cho lop Giaovien
{
return sbb > 1;
}
};


int main()
{
Nguoi *p; //p la con tro cua lop cha (Nguoi)
Sinhvien sv[100];
Giaovien gv[20];
//nhap du lieu cho Sinh vien
int m,n;
cout<<"\n Nhap so sinh vien: ";
cin>>n;
for(int i=0;i<n;++i)
{
sv[i].nhap();
sv[i].nhap_SV();
}
cout<<"\n Danh sach SV duoc khen thuong :";
for(int i=0;i<n;++i)
{ p = &sv[i]; //p tro vao doi tuong thi i cua lop sinhvien
if (p->khenthuong()) //goi ham khenthuong cua lop Sinhvien
{ sv[i].xuat();
sv[i].xuat_SV();
}
}


//nhap du lieu cho giao vien
cout<<"\n Nhap so giao vien : ";
cin>>m;
for(int i=0;i<m;++i)
{
gv[i].nhap();
gv[i].nhap_GV();
}
cout<<"\n Danh sach GV duoc khen thuong :";
for(int i=0;i<n;++i)
{ p = &gv[i]; //pp tro vao doi tuong thu i cua lop Giaovien
if (p->khenthuong()) //goi ham khenthuong cua lop Giaovien
{ gv[i].xuat();
gv[i].xuat_GV();
}
}
return 0;
}
