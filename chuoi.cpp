#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class chuoi{
	private:
		char str[100];
		int n;
	public:
		chuoi(){
		};
		chuoi(char st[]){
			strcpy (str,st);
		}			

void nhap(){
	cout<<"Nhap chuoi :";
	gets(str);
	n=strlen(str);
}
void hienthi(){
	cout<<str<<endl;
}
char phantu(int i){
	if (i<0||i>=n)
		return -1;
	return str[i];
}
chuoi noi(chuoi ob2){
	chuoi ob;
	strcpy(ob.str,str);
	strcat(ob.str,ob2.str);
	ob.n=strlen(ob.str);
	return ob;
}
};
int main(){
	chuoi ob1,ob2,ob3;
	ob2=ob1.noi(ob2);
	cout<<"ob1= "<<endl;
	ob1.hienthi();
	cout<<"ob2 ="<<endl;
	ob2.hienthi();
	cout<<"ob3 ="<<endl;
	ob3.hienthi();
	cout<<"Phan tu thu 5 cua ob3 la:"<<ob3.phantu(4);
	ob1.nhap();
	ob2.nhap();
	ob3=ob1.noi(ob2);
	cout<<"ob1 ="; ob1.hienthi();
	cout<<"ob2 =";ob2.hienthi();
	cout<<"ob3 =";ob3.hienthi();
	cout<<"Phan tu thu 5 cua ob3 la:"<<ob3.phantu(4);
	return 0;
}

