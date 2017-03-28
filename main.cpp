#include<iostream>
#include<fstream>
#include"lab2.h"

int main(){
	int k;
	double Sa, ra, rb;	
	Elo elo;
	fstream file1, file2;
	file1.open("file.in", ios::in);
	file2.open("file.out", ios::out);
	file1 >> k >> ra >> rb ;
	elo.setK(k);
	elo.setRa(ra);
	elo.setRb(rb);
	file2 << ra << " " << rb << endl;
	while (file1 >> Sa)
	{
		file2 << elo.a(Sa) << " ";
		elo.setRa(elo.a(Sa));
		file2 << elo.b(1-Sa) << endl;
		elo.setRb(elo.b(1-Sa));
	}
	file1.close();
	file2.close();
}		
