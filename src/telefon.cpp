#include "../inc/telefon.hpp"
#include "../inc/device.hpp"
#include "device.cpp"
#include <iostream> 

using namespace std;



telefon::telefon(): device(){
        mem=0;
    }
    
telefon::telefon(int p, int m) : device(p) {
        mem=m;
    }
    
telefon::telefon(int m) : device() {
        mem=m;
    }
    
telefon::telefon(const telefon &dev) : device(dev.pret) {
        mem = dev.mem;
    }
    
	void telefon::showInfo(){
        
        cout  << "Telefon, pret=" << device::showPret()<< " lei, " << "mem=" << mem << "\n";
        
    }

telefon::~telefon(){
    cout << "Telefon destroyed\n";
}
    




