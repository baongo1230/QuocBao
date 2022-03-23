#include <iostream>
using namespace std;
class Time
{
int h,m,s;
	public:
		//ham tao
		Time(int a = 0,int b = 0,int c = 0);
		void nhap();
		void xuat();
		Time chuanhoa(); //chuan hoa
		int operator < (Time b); //so sanh <
		Time operator += (int k); //cong k giay
		int operator - (Time b); //tru 2 doi tuong thoi gian
		Time operator ++(); //tang doi tuong thoi gian len 1 giay
		int operator ==(Time ob); //so sanh 2 doi tuong thoi gian co bang nhau
	};
		//ham tao
	Time::Time(int a,int b,int c)
		{ h=a; m=b; s = c;}
		//ham nhap du lieu
void Time::nhap()
{
	cout<<"Nhap gio: "; cin>>h;
	cout<<"Nhap phut: "; cin>>m;
	cout<<"Nhap giay: "; cin>>s;
}
	//ham xuat du lieu
void Time::xuat()
	{ cout<<h<<":"<<m<<":"<<s<<"s"<<"\n"; }
//ham chuan hoa theo quy dinh
Time Time::chuanhoa()
{
	if(s>=60)
	{
	 m = m+s/60;
	s = s%60;
		}
	if(m>=60)
	{
		h = h+m/60;
		m = m%60;
		}
	if (h>=24)
	{
		h = h%24;
		}
	return *this;
}
int Time::operator < (Time b)
{
	int k;
		k = (h*3600 + m*60 + s) - (b.h*3600 + b.m*60 + b.s);
	if (k<0)
		return 1;
	else
		return 0;
}
Time Time::operator += (int b) //tang k giay
	{
	s=s+b;
	chuanhoa();
	return *this;
		}	
	int Time::operator - (Time b)
	{
	return (h*3600+m*60+s) - (b.h*3600+b.m*60+b.s);
		}
Time Time :: operator ++()
{
	s=s+1; //tang 1 giay
	chuanhoa();
	return (*this);
}
int Time::operator ==(Time ob)
{ 
	if (h==ob.h&&m==ob.m&&s==ob.s)
		return 1;
	else
		return 0;
 // return (h==ob.h&&m==ob.m&&s==ob.s);
}
int main()
{		Time ob1(2,45,65);
	ob1.chuanhoa();
	ob1.xuat();
	ob1 += 60;
	cout<<"ob1 sau khi tang 60s : ";
	ob1.xuat();
}
