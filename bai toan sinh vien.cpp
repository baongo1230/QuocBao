#include<iostream>
#include<iomanip>
using namespace std;

class sinhvien{
	private:
		char masv[10], hoten[30];
		float dtb;
	public:
		void nhap();
		void xuat();
		float get_dtb();
};
void sinhvien::nhap(){
	cout<<" Nhap ma sinh vien: "<<endl;
	cin.get(masv,10);
	cin.ignore();
	cout<<"Nhap ho ten sinh vien:"<<endl;
	cin.get(hoten,30);
	cin.ignore();
	cout<<"Nhap diem trung binh:"<<endl;
	cin>>dtb;
	cin.ignore();
}
void sinhvien::xuat(){
	cout<<setw(10)<<masv<<setw(30)<<hoten<<setw(5)<<dtb<<endl;
	
}
float sinhvien::get_dtb(){
	return dtb;
}
int main(){
	sinhvien sv[50];
	int i, n;
	cout<<"Nhap so sinh vien:";
	cin>>n;
	cin.ignore();
	for ( i=0; i<n;i++)
	sv[i].nhap();
	float max=sv[0].get_dtb();
	for (i=1;i<n;i++)
		if( max<sv[i].get_dtb())
			max=sv[i].get_dtb();
	cout<<"Danh sach sinh vien co diem trung binh cao nhat :"<<endl;
	cout<<setw(10)<<"Ma sinh vien"<<setw(30)<<"Ho ten"
		<<setw(20)<<"Diem trung binh"<<endl;
	for ( int i=0; i<n;i++)
		if (sv[i].get_dtb()==max)
		sv[i].xuat();
		return 0;
}
