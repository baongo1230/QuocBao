#include<iostream>
using namespace std;

class date{
	private:
		int d,m,y;
	public:
		int nhuan();
		int ngaythang();
		void nhap();
		void xuat();
		int operator == (date d2);
		date operator ++();
		date operator ++(int);
		date operator +=(int);//tang k ngay
};
int date::nhuan(){
	if (y%400 ==0 || (y% 100 !=0 && y% 4 ==0))
		return 1;
	else 
		return 0;
}
int date::ngaythang(){
	return (m==4 || m==6 || m==9 || m== 11)?30
	:(m==2)?28 + nhuan():31;
} 
void date::nhap(){
	int s, k;
	do {
		cout<<"\n Nhap ngay - thang -  nam:";
		cin>>d>>m>>y;
		s = ngaythang();
		if ((d>0)&&(d<=s)&&(m>=1)&&(m<=12))
		k=1;
		else {
			cout<<"\n Khong co ngay nay trong nam "<< endl;
			cout<<"\n An phim bat ky de nhap lai";
			k=0;
		}
	}while (k ==0);
}
void date::xuat(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
int date::operator == (date d2){
	if (y==d2.y && m==d2.m &&d==d2.d)
	return 1;
	else
		return 0;
}
date date::operator ++(){
	int nday;
	nday=ngaythang();
	if(++d>nday){
		d=1;
		if (++m>12){
			m=1;
			y=y+1;
		}
	}
	return *this;
}
date date::operator ++(int k){
	int nkday;
	nkday=ngaythang();
	if(d++>nkday){
		d=1;
		if(m++>12){
			m=1;
			y=y+1;
		}
	}return *this;
}
date date::operator +=(int k){
	for ( int i =1; i<=k; i++)
	++(*this);
	return *this;
}
int main(){
	date d ; int k;
	cout<<"Nhap doi tuong date = ";
	d.nhap();
	++d;
	cout<<"\n Cong them 1 ngay = ";
	d.xuat();
	cout<<"\n Nhap so ngay can them vao : ";
	cin>>k;
	d +=k;
	cout<<"\n Cong them "<<k<< " ngay = ";
	d.xuat();
	return 0;
}
