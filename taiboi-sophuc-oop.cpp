#include <iostream>
#include <math.h>
using namespace std;
class Sophuc
{
	private:
		float a,b; //a la phan thuc va b la phan ao cua so phuc a + bi, i goi la so ao,

//dinh nghia i2 = -1

	public:
		void nhap();
		void xuat();
		friend Sophuc operator+(Sophuc c1,Sophuc c2);
		friend Sophuc operator-(Sophuc c1,Sophuc c2);
		friend Sophuc operator*(Sophuc c1,Sophuc c2);
		friend Sophuc operator/(Sophuc c1,Sophuc c2);
		float modun();
};
void Sophuc::nhap()
{
	cout <<"\n Nhap a = "; cin >> a;
	cout <<"\n Nhap b = "; cin >> b;
}

void Sophuc::xuat()
	{ if (b>=0)
		cout<<a<<" + "<<b<<"i"<<endl;
	else
		cout<<a<<b<<"i"<<endl;
}
Sophuc operator+(Sophuc c1, Sophuc c2)
{
	Sophuc c; //(a+bi) + (c2.a+c2.bi)
		c.a= c1.a + c2.a ;
		c.b= c1.b + c2.b ;
		return c;
}

Sophuc operator*(Sophuc c1, Sophuc c2){

	Sophuc c;
		c.a= c1.a*c2.a - c1.b*c2.b ; //(a+bi)*(c2.a-c2.bi) = (a*c2.a- b*c2.b) +
//(a*c2.b + b*c2.a)i

		c.b= c1.a*c2.b + c1.b*c2.a ;
	return c;
}
Sophuc operator-(Sophuc c1, Sophuc c2){
	Sophuc c;
	c.a=c1.a-c2.a;
	c.b=c1.b-c2.b;
	return c;
}
Sophuc operator/(Sophuc c1, Sophuc c2){
	Sophuc c;
	if((c2.a==0)&&(c2.b==0))
	return c;

	float tongbp;
  	tongbp=c2.a*c2.a+c2.b*c2.b;
	c.a=(c1.a*c1.b+c2.a*c2.b)/tongbp;
	c.b=(c1.b*c2.a-c1.a*c2.b)/tongbp;
	return c;
}
float Sophuc::modun()
{ 
	return sqrt(a*a + b*b); //mo dun cua so phuc a + bi
}
int main()
{
	Sophuc c1, c2, c3, c4,c5,c6;
	c1.nhap();
	c2.nhap();
	c3 = c1+c2; //tong cua c1 và c2 va gan cho c3
		cout<<"So phuc 1 = ";
			c1.xuat();
		cout<<"So phuc 2 = ";
			c2.xuat();
		cout<<"\nTong cua 2 so phuc:"<<endl;
			c3.xuat();
		cout<<"Mo dun so phuc 1 = "<<c1.modun()<<endl;
		cout<<"Mo dun so phuc 2 = "<<c2.modun()<<endl;
	c4=c1*c2; //tich cua c1 va c2 va gan cho c4
		cout<<"Tich cua 2 so phuc = ";
			c4.xuat();
	c5=c1-c2;
		cout<<"Hieu hai so phuc: ";
		c5.xuat();
	c6=c1/c2;
		cout<<"Thuong hai so phuc:";
		c6.xuat();
	return 0;
}
