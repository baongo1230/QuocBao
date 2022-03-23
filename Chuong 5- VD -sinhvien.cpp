#include <iostream>
#include <stdio.h>
using namespace std;
class Sinhvien //lop co so
{
	private:
		int Sbd;
		char Hoten[25];
	public:
		void Nhap()
		{
			cout<<"So bao danh :";cin>>Sbd;
			cout<<"\nHo ten :";fflush(stdin);
			gets(Hoten);
	}
		void Xuat()
		{ 
			cout<<"So bao danh : "<<Sbd<<"|";
			cout<<"Ho va ten sinh vien : "<<Hoten<<"|";
	}
};
class Diemthi : public Sinhvien //lop Diemthi ke thua lop Sinhvien
{
	protected :
		float D1,D2; //diem mon 1 va mon 2
	public :
		void Nhap_diem()
		{
			cout<<"Nhap diem hai mon thi : \n";
			cin>>D1>>D2;
		}
		void Xuat_diem()
		{

			cout<<"Diem mon 1 :"<<D1<<"|";
			cout<<"Diem mon 2 :"<<D2<<"|";
		}
};
class Ketqua : public Diemthi //lop Ketqua ke thua lop Diemthi
{
	private:
		float Tong;
	public :
		void Xuat_kq()
		{
			Tong = D1+D2;
			Xuat();
			Xuat_diem();
			cout<<"Tong so diem :"<<Tong<<endl;
		}
};
int main()
{
	int i,n; Ketqua sv[100];
	cout<<"\nNhap so sinh vien : ";
	cin>>n;
	for(i=0;i<n;++i)
		{ 
		sv[i].Nhap();
		sv[i].Nhap_diem();
	}
	for(i=0;i<n;++i)
		sv[i].Xuat_kq();
	return 0;
}
