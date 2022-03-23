#include <iostream>
#include <stdlib.h>
using namespace std;
class dathuc
{
int *heso; //luu cac he so cua da thuc, dung mang cap phat dong
int bac; //bac cua da thuc
public:
void nhap();
void xuat();
friend dathuc operator +(dathuc a, dathuc b);
int & operator[](int i);
};
void dathuc:: nhap()
{
cout<<"Nhap vao bac cua da thuc: "; cin>>bac;
heso = new int [bac+1];
cout<<"Nhap vao cac he so cua da thuc: ";
for (int i=0; i<=bac; i++)
{ cout<<"He so bac "<<i<<" la: ";
cin>>heso[i];
}
}

void dathuc:: xuat()
{
for (int i=0; i<=bac; i++)
if (heso[i] != 0)
cout<<heso[i]<<"X^"<<i<<"+";
cout<<"\n\n";

}

dathuc operator +(dathuc a, dathuc b)
{ dathuc c;
if (a.bac < b.bac) //bac da thu a < bac da thuc b
{ c.bac = b.bac;
c.heso = new int[c.bac+1];

for (int i=0; i<=a.bac;i++)
c.heso[i]=a.heso[i]+b.heso[i];

for (int i=a.bac+1; i<=b.bac;i++)
c.heso[i]=b.heso[i];

}
else //bac da thuc a >= bac da thuc b
{ c.bac=a.bac;
c.heso=new int[c.bac+1];

for (int i=0; i<=b.bac;i++)
c.heso[i]=a.heso[i]+b.heso[i];

for (int i=b.bac+1; i<=a.bac;i++)
c.heso[i]=a.heso[i];

}
return c;
}
int & dathuc:: operator[](int i)
{ return heso[i]; }

int main()
{
dathuc ob1,ob2,ob3;
ob1.nhap();

ob2.nhap();
cout<<"\n Da thuc thu nhat : "; ob1.xuat();cout<<endl;
cout<<"\n Da thuc thu hai : ";ob2.xuat();cout<<endl;
ob3=ob1+ob2;
cout<<"\n Da thuc tong : ";ob3.xuat();cout<<endl;
cout<<"\n He so thu 3 cua ob3: "<<ob3[2];
return 0;
}
