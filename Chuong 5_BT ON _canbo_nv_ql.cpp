#include<bits/stdc++.h>
using namespace std;

class canbo{
	private:
		string maso, hoten, donvi;
		float heso, baohiem;
		public:
			void nhap(){
				cout<<"\n Ma can bo: ";
				getline(cin,maso);
				cout<<"\n Ho ten can bo: ";
				getline(cin,hoten);
				cout<<"\n Don vi: ";
				getline(cin,donvi);
				cout<<"\n He so luong: ";
				cin>>heso;
				cout<<"\n Bao hiem: ";
				cin>>baohiem;
			}
			long luong(){
				return heso*1350000-baohiem;
			}
			void xuat(){
				cout<<"\n"<<maso<<"|";
				cout<<hoten<<"|";
				cout<<donvi<<"|";
				cout<<heso<<"|";
				cout<<baohiem;
				cout<<setprecision(0)<<	fixed<<"\t"<<luong();
			}
			string get_donvi(){
			
			return donvi;}
};
class nhanvien:public canbo{
	private:
		int ng,th,n;
		public:
			void nhap(){
				canbo::nhap();
				cout<<"\n Nhap vao ngay hop dong:";
				cin>>ng>>th>>n;
				cin.ignore();
			}
			void xuat(){
				canbo::xuat();
				cout<<"|"<<ng<<"|"<<th<<"|"<<n;
			}
			int operator>(nhanvien a)//qua tai toan tu
			{
				if(n>a.n)
				return 1;
				if((n==a.n)&&(th>a.th))
				return 1;
				if((n==a.n)&&(th==a.th)&&(ng=a.ng))
				return 1;
				return 0;
			}
};
class quanly{
	nhanvien hd[50];
	int n;
	public:
		void nhapcb(){
			do{
				cout<<"\n Nhap so can bo hop dong: ";
				cin>>n;
			}while(n>50);
			cin.ignore();
			for(int i=0;i<n;i++)
			hd[i].nhap();
		}
		void xuatcb(){
			for( int i=0;i<n;i++)
				for(int j=i+1;j<n;j++)
				if(hd[i]>hd[j]){
					nhanvien tam;
					tam=hd[i];
					hd[i]=hd[j];
					hd[j]=tam;
				}
			for ( int i=0; i<n;i++)
			hd[i].xuat();
		}
		void xuatcb_dv(){
			//sap xep theo dv
			for ( int i=0;i<n;i++)
				for ( int j=i+1;j<n;j++)
				if(hd[i].get_donvi()>hd[j].get_donvi()){
					nhanvien tam;
					tam=hd[i];
					hd[i]=hd[j];
					hd[j]=tam;
				}
			//in theo dv
			for( int i=0;i<n;i++){
				if(i==0|| hd[i].get_donvi()!=hd[i-1].get_donvi())
				cout<<"\n Don vi: "<<hd[i].get_donvi()<<endl;
				hd[i].xuat();
			}	
		}
};
int main(){
	quanly ql;
	ql.nhapcb();
	ql.xuatcb();
	ql.xuatcb_dv();
	return 0;
}
