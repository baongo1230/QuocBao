#include<bits/stdc++.h>
using namespace std;

class xe{
	string hoten;
	string loaixe;
	int gio;
	public:
		xe(){
			
		};
		xe(string ht, string lx, int g){
			hoten= ht;
			loaixe=lx;
			gio=g;
		}
		virtual void xuat(){
			cout<<hoten<<setw(10)<<loaixe<<setw(20)<<gio<<setw(10);
		}
		virtual float tienthue(){
			return 0;
		}
		int get_gio(){
			return gio;
		}
		string get_loaixe(){
			return loaixe;
		}
};
class xedap:public xe{
	public:
		xedap(){
			
		};
		xedap(string ht, string lx, int g):xe(ht,lx,g){
			
		};
		void xuat(){
			xe::xuat();
		}
		float tienthue(){
			if(get_gio()<=1)
			return float (30000);
			else
			return (float)30000+(get_gio()-1)*20000;
		}
};
class xemay:public xe{
	int bienso;
	public:
		xemay(){
			
		};
		xemay(string ht, string lx, int g,int bs):xe(ht,lx,g){
			bienso=bs;
		}
		float tienthue(){
			if(get_loaixe()=="100")
			return float(15000)*get_gio();
			else
			return float(20000)*get_gio();
		}
		void xuat(){
			xe::xuat();
			cout<<setw(10)<<bienso<<setw(10);
		}
};
int main(){
	xe*DS[100];
	int n, tl, g;
	string ht, lx;
	cout<<"\n Nhap tong so xe cho thue: ";
	cin>>n;
	for( int i=0;i<n;i++){
		cout<<" 1- xe dap, 2- xe may : ";
		cin>>tl;
		cout<<"Ho ten : ";
		fflush(stdin);
		getline(cin,ht);
		cout<<"So gio thue : ";
		cin>>g;
		cout<<"Loai xe : ";
		fflush(stdin);
		getline(cin,lx);
		switch(tl){
			case 1:{
				xedap*p=new xedap(ht,lx,g);
				DS[i]=p;
				break;
			}
			case 2:{
				int bs;
				cout<<"Bien so:";
				cin>>bs;
				xemay*p=new xemay(ht,lx,g,bs);
				DS[i]=p;
				break;
			}
		}
	}
	float s=0;
	for ( int i=0;i<n;i++){
		s=s+DS[i]->tienthue();
		DS[i]->xuat();
	}
	cout<<"Tong so tien khach phai tra la: "<<s;
	return 0;
}

