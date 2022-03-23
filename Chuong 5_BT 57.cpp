#include<iostream>
using namespace std;

class sach{
	private:
		string tensach;
		string tacgia;
		int sotrang;
		int giaban;
	public:
		void nhap(){
			cout<<"Nhap thong tin sach"<<endl;
			cout<<"Nhap ten sach:";
			getline(cin,tensach);
			cout<<"Nhap ten tac gia:";
			getline(cin,tacgia);
			cout<<"So trang:";
			cin>>sotrang;
			cout<<"Gia ban:";
			cin>>giaban;
			cin.ignore();
		}	
		void xuat(){
			cout<<endl;
			cout<<"Ten sach "<<tensach<<" |";
			cout<<"Tac gia "<<tacgia<<" |";
			cout<<"So trang "<<sotrang<<" |";
			cout<<"Gia ban "<<giaban<<" |"<<endl;
		}
};
class bia:public sach{
	string maha;
	int tienve;
	public:
		void nhap_bia(){
			cout<<"Ma hinh anh:";
			getline(cin,maha);
			cout<<"Tien ve bia:";
			cin>>tienve;
			cin.ignore();
		}
		void xuat_bia(){
			cout<<endl;
			cout<<"Ma hinh anh "<<maha<<" |";
			cout<<"Tien ve bia "<<tienve<<" |"<<endl;
		}
};
class hoasy{
	string hoten;
	string diachi;
	public:
		void nhap_hoasy(){
			cout<<endl;
			cout<<"Ten hoa sy:";
			getline(cin,hoten);
			cout<<"Dia chi nha hoa sy:";
			getline(cin,diachi);
			
		}
		void xuat_hoasy(){
			cout<<endl;
			cout<<"Ten hoa sy "<<hoten<<" |";
			cout<<"Dia chi "<<diachi<<" |"<<endl;
		}
};
class sachvebia:public bia, public hoasy{
	public:
		void nhap_vebia(){
			nhap();
			nhap_bia();
			nhap_hoasy();
		}
		void xuat_vebia(){
			xuat();
			xuat_bia();
			xuat_hoasy();
		}
};
int main(){
	sach a[50];
	sachvebia b[50];
	int n, i;
	//sach khong ve bia
	cout<<"\n Nhap so sach khong ve bia : ";
	cin>>n;
	cin.ignore();
	for( i=0;i<n;i++)
	a[i].nhap();
	for(i=0;i<n;i++)
	a[i].xuat();
	//sach co ve bia
	cout<<"Nhap sach co ve bia : ";
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++)
	b[i].nhap_vebia();
	for(i=0;i<n;i++)
	b[i].xuat_vebia();
	return 0;
}
