#include<iostream>
using namespace std;

class danhmuc{
	private:
		char nhande[30];
		char tacgia[30];
	protected:
		int tk;
	public:
		void nhap(){
			cout<<"Nhap nhan de ";
			cin.ignore(1);
			cin.get(nhande,30);
			cout<<"Nhap tac gia";
			cin.ignore(1);
			cin.get(tacgia,30);
			cout<<"Nhap so lan tham khao";
			cin>>tk;
		};
		void xuat(){
			cout<<"Nhan de: "<<nhande<<"\n";
			cout<<"Tac gia: "<<tacgia<<"\n";
			cout<<"So lan tham khao:"<<tk;
		};
		int get_tk(){
			return tk;//tra ve tham khao
		}
		char *get_tg(){
			return tacgia;//tra ve tac gia
		}
		virtual int khenthuong()//ham ao
		{
			return 0;//tra ve int
		}
		
};
class sach:public danhmuc{
		char nxb[30];
		int version;
	public:
		void nhap_sach(){
			nhap();//ham nhap danh muc
			cout<<"Nha xuat ban: ";
			cin.ignore(1);
			cin.get(nxb,30);
			cout<<"Lan in thu: ";
			cin>>version;
		};
		void xuat_sach(){
			xuat();//ham xuat danh muc
			cout<<"Nha xuat ban: "<<nxb;
			cout<<"In lan thu:"<<version;
		};
		int khenthuong(){
		//dinh nghia ham ao o lop sach
		return tk>20;
		};
};
class tapchi:public danhmuc{
		char ten_tc[30];
		int so_tc;
	public:
		void nhap_tc(){
			nhap();//nhap o danh muc
			cout<<"Nhap ten tap chi: ";
			cin.ignore(1);
			cin.get(ten_tc,30);
			cout<<"So tap chi: ";
			cin>>so_tc; 
		};
		void xuat_tc(){
			xuat();
			cout<<"Ten tap chi: "<<ten_tc;
			cout<<"So tap chi: "<<so_tc;
		}
		int khenthuong()//dinh nghia ham ao khen thuong
		{
			return tk>10;
		};
};
int main(){
	danhmuc* DS[100];
	int i, n;
	int so;
	cout<<"Nhap so luong n = ";
	cin>>n;
	for (i=0;i<n;i++){
		cout<<"Nhap loai danh muc: 1-sach, 2-tap chi"<<endl;
		cin>>so;
		if(so==1){
			sach*p=new sach;//con tro p
			p->nhap_sach();
			DS[i]=p;
		}
		else
		{
			tapchi*p=new tapchi;
			p->nhap_tc();
			DS[i]=p;
		}
	}
	int max=DS[0]->get_tk();//max tham khao
	for(i=0;i<n;i++)
		if(max<DS[i]->get_tk())
		max=DS[i]->get_tk();
	cout<<"\n Danh muc co tham khao max"<<endl;//in max tham khao
	for(i=0;i<n;i++)
		if(max==DS[i]->get_tk())
			DS[i]->xuat();
	cout<<"Danh sach tac gia duoc khen thuong: ";
	for (i=0;i<n;i++)
		if(DS[i]->khenthuong()==1)
		cout<<DS[i]->get_tg()<<endl;
		return 0;
}
