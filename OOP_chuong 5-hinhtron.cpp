#include<iostream>
using namespace std;
class diem{
	private:
		 int x, y;
		public:
			void nhap();
			void xuat();
};
void diem::nhap(){
	cout<<"Nhap hoanh do: ";
	cin>>x;
	cout<<"Nhap tung do: ";
	cin>>y;
}
void diem::xuat(){
	cout<<"x = "<<x<<" y = "<<y;
}
class hinhtron:public diem{
	float R;
	public:
		void nhap_R(){
			cout<<"Nhap ban kinh: ";
			cin>>R;
		};
		void xuat_R(){
			cout<<"Ban kinh = "<<R;
		};
		float dientich(){
			return R*R*3.1416;	
		};
};
int main(){
	hinhtron ob[10];
	//nhap du lieu
	int n,i;
	cout<<"Nhap n: ";
	cin>>n;
	for (int i=0; i<n;i++){
		ob[i].nhap();//nhap toa do
		ob[i].nhap_R();
		}
	float max =ob[0].dientich();
	for ( i=0; i<n;i++)
	if (max <ob[i].dientich())
	max=ob[i].dientich();
	//in du lieu
	for( i=0;i<n;i++)
	if ( max == ob[i].dientich())// so sanh ==, xuat ra R max
	{
		ob[i].xuat();
		ob[i].xuat_R();
		cout<<"  Dien tich = "<<ob[i].dientich();
	}
	return 0;
}
	
