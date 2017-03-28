#include<iostream>
#include<cmath>
using namespace std;

class Elo{
	public:
		void setK (double K);
		void setRa (double Ra);
		void setRb (double Rb);
		double getK();
		double getRa();
		double getRb();

		int a(double Sa);
		int b(double Sb);

	private:
		double K, Ra, Rb;
};	
