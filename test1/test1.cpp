#include "pch.h"
#include <iostream>
using namespace std;
//class complex
//{
//    int real, imag;
//public:
//    complex(int i=1,int j=3): real(i),imag(j){};
//    //complex(int r=0,int i=0):real(r),imag(i){}
//   /* complex(const complex& d)
//    {
//        real = d.real;
//        imag = d.imag;
//    }*/
//    void show()
//    {
//        cout << real << "+" << imag << "i" << endl;
//    }
//    complex operator++()
//    {
//        ++real;
//        return *this;
//    }
//};
//int main()
//{
//    complex c;
//   // ++ ++c;
//  //  complex e;
////    e.show();
//   // complex&& d=++ ++c;
//   //complex d( ++ ++c);
//    c.show();
//    //d.show();
//    return 0;
//}

//class Myclass
//{
//	int i, j;
//public:
//	Myclass(){}
//	Myclass(int a, int b)
//	{
//		i = a;
//		j = b;
//	}
//	friend ostream& operator<<(ostream& stream, Myclass obj)
//	{
//		stream << obj.i << "," << obj.j << endl;
//		return stream;
//	}
//	friend istream& operator>>(istream& stream, Myclass& obj)
//	{
//		stream >> obj.i;
//		stream >> obj.j;
//		return stream;
//	}
//};
//void main()
//{
//	Myclass M(5, 8);
//	cout << M;
//	Myclass A;
//	cin >> A;
//	cout << A;
//}

class test
{
private:
	int a;
	double b;
public:
	test(int a=0,double b=0.0):a(a),b(b)
	{
		cout << "有参构造"<<endl;
	}
	/*test(test& t)
	{
		a = t.a;
		b = t.b;
	}*/
	test operator+(test& t)
	{
		int a = t.a + this->a;
		double b = t.b + this->b;
		//test c(a, b);
		return test(a,b);
	}
	void print(void)
	{
		cout << "a:" << a << " " << "b:" << b << endl;
	}
};
void main()
{
	test t1(2, 3.45), t2(6, 7.89), t3;
	t3 = t1 + t2;
	t1.print();
	t2.print();
	t3.print();
}