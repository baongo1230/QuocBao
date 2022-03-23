#include <iostream>
using namespace std;
class Mang
{
float a[100];
int n;
public:
void nhap();
void hienthi();
int get_n();
Mang operator +(Mang m2);
int operator ==(Mang m2);
Mang operator ++(); // dang tien to
Mang operator ++(int); //dang hau to
};
void Mang::nhap()
{
cout<<"\n Nhap n = ";cin>>n;
for(int i=0;i<n;i++)
{ cout<<"a["<<i<<"]=";
cin>>a[i];
}
}

void Mang::hienthi()
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
Mang Mang::operator +(Mang m2)
{
Mang tam;
for(int i=0;i<n;i++)
tam.a[i] = a[i] + m2.a[i];
tam.n = n;
return tam;
}
int Mang::operator ==(Mang m2)
{
if (n != m2.n)
return 0;
for(int i=0;i<n;i++)
if (a[i] != m2.a[i])
return 0;
return 1;
}
Mang Mang::operator ++()
{
for(int i=0;i<n;i++)
++a[i];
return *this;
}
Mang Mang::operator ++(int)
{
Mang tam;
tam = *this;
++*this;

return tam;
}
int Mang::get_n()
{ return n;}

int main()
{
Mang m,m1,m2;
cout<<"\n\n Nhap mang m1: ";m1.nhap();
cout<<"\n Mang m1: "; m1.hienthi();
m2 = ++m1;
cout<<"\n";
cout<<"\n Mang m2: "; m2.hienthi();
cout<<"\n Mang m1: "; m1.hienthi();

cout<<"\n nhap lai du lieu moi cho m1, m2 ...";
m1.nhap();
m2.nhap();
if (m1.get_n() == m2.get_n())
{
m = m1 + m2;
cout<<"\n Tong cua m1 va m2 la: ";m.hienthi();
}
else
cout<<"\n 2 mang m1 va m2 khong cung kich thuoc !";

Mang m3,m4;
cout<<"\n\n Nhap mang m3: ";m3.nhap();
cout<<"\n Mang m3: "; m3.hienthi();
m4 = m3++;
cout<<"\n Mang m4: "; m4.hienthi();
cout<<"\n Mang m3: "; m3.hienthi();
return 0;
}
