#include<bits/stdc++.h>
using namespace std;

class date {
	int d, m, y;
	public:
		int nhuan (){
			return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
		}
		int thang(){
			return ( m ==4 || m==6 || m==9 || m==11)?30:
				(m==2)?28+nhuan():31;
		}
		int nam (){
			return nhuan() ?366:365;
		}
		void nhap(){
			int s, k;
			do {
			
				cout<<"Nhap ngay thang nam : "<<endl;
				cin>>d>>m>>y;
				s=thang();
				if((d > 0) && (d <= s) && (m >= 1) && (m <= 12) && y > 0)
				k=1 ;// hople 
			else {
				cout<<"Khong hop le"<<endl;
				k=0;// khonghople
				}
			}
			while (k == 0);
		}
		int operator >(date ob){
			return (y>ob.y)?1:(y<ob.y)?0:(m>ob.m)?1:(m<ob.m)?0:(d>ob.d)?1:0;
		}
		date operator --(){//giam ngay
			if (--d == 0)// vd 1 11 2021
			{
				--m;//m=0
				d=thang();//d=31
				if( m== 0){
					m=12;
					y=y-1;
				}
			}
			return *this;//tra ve vi tri con tro this dang tro den
		}
		void hienthi(){
			cout<<"Ngay hom truoc la:"<<d<<"/"<<m<<"/"<<y;
		}		
		int operator -(date ob){// tru 2 ngay 
			date d;
			int s1=0, s2=0, t=0;
			for (d.m=1, d.y =y; d.m<m;d.m++)
				s1+=d.thang();
				s1+=ob.d;
				//cout<<"s1 ="<<s1;
			for ( s2=0; ob.m<=12;ob.m++)
				s2+=ob.thang();
				//cout<<"s2 ="<<s2;
			if (ob.y==y)//hai ngay trung nhau
				t+=s2 -nam();
			else {
				for ( ob.y++;ob.y<y;++ob.y)//hai doi tuong khac nhau ve nam
					t=t+ob.nam();
					t=t+s1+s2;
			}
			return t;
		}
};
int main (){
	date ob1, ob2;
	ob1.nhap();
	ob2.nhap();
	if(ob1>ob2)
	
		cout<<"ob1>ob2";
		else 
			cout<<"\n ob1 <= ob2"<<endl;
			--ob1;
			ob1.hienthi();
	date ob3, ob4;
	cout<<"\n Nhap ob3 = "<<endl;
	ob3.nhap();
	cout<<"\n Nhap ob4 = "<<endl;
	ob4.nhap();
	cout<<"\n Khoang cach giua 2 duoi tuong ob3 va ob4 la : "<<ob3-ob4;	
}

