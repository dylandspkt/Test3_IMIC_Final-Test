#include <iostream>
#include <math.h>
using namespace std;
class pt_2 {
public:

	float a, b, c;
	float d;
	int GiaiPhuongTrinh()
	{
	if (a == 0) {
		if (b == 0) {
			return -1;
		}
		else {
			return -2;
		}
		
	}

	d = b * b - 4.0 * a*c;

	if (d > 0) {
		return 3;
	}
	else if (d == 0) {
		return 2;
	}
	else {
		return 1;
	}
}


};

int main()
{
	pt_2 pt;
	int kq=0;
	cout << " Nhap he so a: " << endl;
	cin>>pt.a;
	cout << " Nhap he so b: " << endl;
	cin >> pt.b;
	cout << " Nhap he so c: " << endl;
	cin >> pt.c;
	kq= pt.GiaiPhuongTrinh();


	if (kq == -1)
		cout << "Phuong trinh co vo so nghiem" << endl;
	else if (kq == -2)
		cout << "Phuong trinh co nghiem don x1 = " << -(pt.c) / pt.b << endl;
	else if (kq == 1)
		cout << "Phuong trinh vo nghiem" << endl;
	else if (kq == 2)
		cout << "Phuong trinh co nghiem kep x1 = x2 = " << -(pt.b) / (2.0 * pt.a )<< endl;
	else if (kq == 3)
		cout << "Phuong trinh co 2 nghiem phan biet x1 = " <<  (-pt.b + sqrt(pt.d)) / (2.0 * pt.a)<<"\t" << "x2 = " << (-pt.b - sqrt(pt.d)) / (2.0 * pt.a )<< endl;

	return 0;
}