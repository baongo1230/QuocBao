#include<iostream>
using namespace std;

class airship{
	int khach;
	int hang;
	public:
		void nhap(){
			cout<<"\nNhap so luong khach toi da: ";
			cin>>khach;
			cout<<"Nhap trong luong hang hoa toi da:";
			cin>>hang;
			cin.ignore(1);
		}
		void xuat(){
			cout<<"So luong khach toi da : "<<khach;
			cout<<"\nTrong luong hang toi da : "<<hang;
		}
};
class airplane:public airship{
	string dongco;//thuoc tinh doi tuong 
	public:
		void nhap_dc(){
			cout<<"Kieu dong co( canh quat va phan luc): ";
			fflush(stdin);
			getline(cin,dongco);
		}
		void xuat_dc(){
			cout<<"\nKieu dong co: "<<dongco;
		}
};
class balloon:public airship{
	private:
		string nhienlieu;
	public:
		void nhap_nl(){
			cout<<"Nhap loai nhien lieu(hydrogen va helium): ";
			fflush(stdin);
			getline(cin,nhienlieu);
		}
		void xuat_nl(){
			cout<<"\nLoai nhien lieu: "<<nhienlieu;
		}
};
int main(){
	airplane a1;
	a1.nhap();
	a1.nhap_dc();
	a1.xuat();
	a1.xuat_dc();
	balloon b1;
	b1.nhap();
	b1.nhap_nl();
	b1.xuat();
	b1.xuat_nl();
	return 0;
}
