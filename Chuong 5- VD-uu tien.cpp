#include<iostream>
using namespace std;

class sinhvien{
	private:
		int sbd;
		char hoten[25];
	public:
		void nhap(){
			cout<<"So bao danh: ";
			cin>>sbd;
			cout<<"Ho ten: ";
			cin>>hoten;
			gets(hoten);// mang
		}
		void xuat(){
			cout<<"So bao danh : "<<sbd<<"| ";
			cout<<"Ho ten : "<<hoten<<"| "; 
		}
};
class diem:public sinhvien{//hoten sbd
	protected:
		float d1, d2;
	public:
		void nhap_diem(){
			cout<<"Nhap diem mon 1:";
			cin>>d1;
			cout<<"Nhap diem mon 2:";
			cin>>d2;
		}
		void xuat_diem(){
			cout<<"Diem mon 1 : "<<d1<<"| ";
			cout<<"Diem mon 2 : "<<d2<<"| ";
		}
};
class uutien{
	protected:
		float ut;
		public:
			void nhap_ut(){
				cout<<"Nhap diem uu tien: ";
				cin>>ut;
			}
			void xuat_ut(){
				cout<<"Diem uu tien: "<<ut<<"| ";
			}
};
class ketqua:public diem, public uutien{
	private:
		float tong;
		public:
			void xuat_kq(){
				tong=d1+d2+ut;
				xuat();
				xuat_diem();
				xuat_ut();
				cout<<"Tong so diem: "<<tong;
			}
};
int main(){
	int i,n;
	ketqua sv[100];
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	for ( i=0;i<n;i++){
		sv[i].nhap();
		sv[i].nhap_diem();
		sv[i].nhap_ut();
	}
	for (i=0;i<n;i++)
	sv[i].xuat_kq();
	return 0;
}
