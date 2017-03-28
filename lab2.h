#include<iostream>
#include<cmath>
using namespace std;

class Elo{
	public:
		void setK (double k);
		void setRa (double ra);
		void setRb (double rb);
		double getK();
		double getRa();
		double getRb();

		int a(double Sa);
		int b(double Sb, double RA);

	private:
		double K, Ra, Rb;
};	
