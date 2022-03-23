#include<iostream>

using namespace std;

class date{
	private:
		int D,M,Y;
	public:
		bool nhuan();//kiem tra ngay nhuan
		int ngaythang();//tra ve so ngay trong thang
		void nhap();
		void xuat();
		date cong1();//cong 1 ngay vao 
		date congk(int k);
		int ngaynam();
		int khoangcach(date d2);
};
bool date::nhuan(){
	if ((Y%4 == 0 && Y%100!=0 )||(Y%400==0))
		return true;
	else
	return false;
}
int date::ngaythang(){
	if (M==4||M==6||M==9||M==11)
	return 30;
	else if ( M==2)
	return 28+ nhuan();
	else 
	return 31;
}
void date::nhap(){
	int s;
	bool k;
	do {
		cout<<"Nhap vao ngay thang nam:"<<endl;
		cin>>D>>M>>Y;
		s=ngaythang();
		if((D>0)&&(D<=s)&&(M>=1)&&(M<=12)&&Y>0)
		k=true;//hop le
		else{
			cout<<"Sai ngay! Nhap lai:"<<endl;
			k=false;//ko hop le
		}
	}while (k==false);
}
void date::xuat(){
	cout<<D<<"/"<<M<<"/"<<Y<<endl;
}
date date::cong1(){
	int s;
	s=ngaythang();
	if (++D>s){
		D=1;
		if(++M>12){
			M=1;
			Y=Y+1;
		}
	}
	return *this;//doi tuong this ma con tro tro toi
}
date date::congk(int k){
	date t;
	t.D=D;
	t.M=M;
	t.Y=Y;
	for ( int i=1;i<k;i++)
	t.cong1();
	return t;
}
int main (){
	date d; int k;
	cout<<"Nhap doi tuong ob:";
	d.nhap();
	cout<<"Du lieu cua doi tuong:";
	d.xuat();
	d.cong1();
	cout<<"Sau khi tang 1 ngay:";
	d.xuat();
	cout<<"Nhap k= ";
	cin>>k;
	date d1, d2;
	cout<<"Nhap d1: ";
	d1.nhap();
	d2=d1.congk(k);
	cout<<"Sau khi tang k ngay: ";
	d2.xuat();
	return 0;
}
