#include <iostream>

// Bangun Datar

class BangunDatar {

protected :
	float luas;
	float keliling;

public :
	void hitungLuas() {
		std::cout << "hitung Luas!\n";
	}
	void hitungKeliling() {
		std::cout << "hitung Keliling!\n";
	}
	void printInfo() {
		std::cout << "Luas = " << luas << std::endl;
		std::cout << "Keliling = " << keliling << std::endl;
	}
};

class Lingkaran : public BangunDatar {
private :	
	const float phi = 22 / 7.f;
	float r;

public : 
	Lingkaran(float _r = 0) {
		r = _r;
	}
	void hitungLuas() {
		luas = phi * r * r;	
	}
	void hitungKeliling() {
		keliling = phi * (2.f * r);
	}
};
class Persegi : public BangunDatar {
	float s;
	
public :
	Persegi(float _s) {
		s = _s;	
	}
	void hitungLuas() {
		luas = s * s;
	}
	void hitungKeliling() {
		keliling = 4 * s;
	}
};
class PersegiPanjang : public BangunDatar {
	float p, l;	
public :	
	PersegiPanjang(float _p, float _l) {
		p = _p;
		l = _l;	
	}
	void hitungLuas() {
		luas = p * l;
	}
	void hitungKeliling() {
		keliling = (2 * p) + (2 * l);
	}
};
int main() {
	 
	Lingkaran ling1 = Lingkaran(7.f);
	ling1.hitungLuas();
	ling1.hitungKeliling();
	ling1.printInfo();
	
	Persegi p = Persegi(10.f);
	p.hitungLuas();
	p.hitungKeliling();
	p.printInfo();
	
	PersegiPanjang pP = PersegiPanjang(12.f, 5.f);
	pP.hitungLuas();
	pP.hitungKeliling();
	pP.printInfo();
	return 0;
}
