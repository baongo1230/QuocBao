#include<iostream>
#include<conio.h>
#define N 50
using namespace std;

class stack{
	int a[N];
	int top;
	public:
		stack() {top =-1;}//khoi tao stack rong
		void push(int k);//nap them 1 phan tu 
		int pop();// lay ra 1 phan tu
		int get_top(){
			return top;
		}
};
void stack::push(int k){
		if( top==N-1){
			cout<<"\n Stack day";
			return ;
		}
		a[++top]=k;
	}	
int stack::pop(){
		if (top==-1){
			cout<<"\n Stack rong";
			exit(1);
		}
		return a[top--];
	}
				
class chuyendoi:public stack{
	int n,k;
	public:
		void doicoso(){
			cout<<"Nhap so nguyen duong he 10:";
			cin>>n;
			cout<<"Nhap co so (2/8/16): ";
			cin>>k;
			while(n!=0){
				int i=n % k;//lay so du cua phep chia n/k
				push(i);//ham push class stack
				n=n/k;//gan lai cho n
			}
		}
		int get_cs(){
			return k;//tra ve gia tri k
		}
		void xuat(){//hien thi ket qua chuyen doi
		cout<<"Chuyen qua so he "<<k<<" la : ";
		while(get_top()!=1){
			if (k==16)
				cout<<hex<<pop();//dung hex de doi sang he 16 cua nhung gt>=10
			else 
				cout<<pop();
			}
		}
};
int main(){
	char ch;
	chuyendoi cd;
	do{
		cout<<"CHUONG TRINH CHUYEN DOI SO HE 10 SANG "
		<<"SO HE 2, HE 8, HE 16"<<endl;
		cd.doicoso();
		cd.xuat();
		cout<<"\nTiep tuc ?(y/n): "<<endl;
		ch=getch();}
		while(ch!='n');
		return 0;
}
