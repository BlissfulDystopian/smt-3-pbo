#include <iostream>

//	Bangun Ruang

class BangunRuang {
protected :
	float luas;
	float keliling;
	float volume;

public :
	void hitungLuas() {
		std::cout << "Hitung Luas!\n";
	}
	void hitungKeliling() {
	std::cout << "Hitung Keliling!\n";		
	}
	void hitungVolume() {
		std::cout << "Hitung Volume!\n";	
	}
	void printInfo() {
		std::cout << "Luas = " << luas << std::endl;
		std::cout << "Keliling = " << keliling << std::endl;
		std::cout << "Volume = " << volume << "\n"<< std::endl;
	}
};
class Balok : public BangunRuang {
	float p, l, t;
public :
	Balok(float _p,float _l, float _t) {
		p = _p;
		l = _l;
		t = _t;
	}
	void hitungLuas() {
		luas = 2 * ((p *l) + (p * t) + (l * t));
	}
	void hitungKeliling() {
		keliling = 4 * (p + l + t);
	}
	void hitungVolume() {
		volume = p * l * t;
	}
};
class Bola : public BangunRuang {
	const float phi = 22 / 7.f;
	float r;
public :
	Bola(float _r) {
		r = _r;
	}
	void hitungLuas() {
		luas = 4.f * phi * r * r; 
	}
	void hitungKeliling() {
		keliling = 4/3.f * phi * r * r;
	}
	void hitungVolume() {
		volume = 4/3.f * phi * r * r * r;
	}
};
class Kubus : public BangunRuang {
	float s;
public :
	Kubus(float _s) {
		s = _s;
	}
	void hitungLuas() {
		luas = 6 * s * s;
	}
	void hitungKeliling() {
		keliling = 12 * s;
	}
	void hitungVolume() {
		volume = s * s * s;
	}
};
int main() {
	Balok balox = Balok(4, 5, 6);
	balox.hitungLuas();
	balox.hitungKeliling();
	balox.hitungVolume();
	balox.printInfo();
	
	Bola ballz = Bola(7.f);
	ballz.hitungKeliling();
	ballz.hitungLuas();
	ballz.hitungVolume();
	ballz.printInfo();
	
	Kubus cube = Kubus(5.f);
	cube.hitungLuas();
	cube.hitungKeliling();
	cube.hitungVolume();
	cube.printInfo(); 
	
	 
	return 0;
}
