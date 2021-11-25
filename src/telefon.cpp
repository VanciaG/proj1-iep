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

telefon::~telefon(){
    cout << "Telefon destroyed\n";
}

telefon& telefon::operator=(const telefon &dev) {
        if(this == &dev){
            cout << "self-assignment\n";
            return *this;
        }
        pret = dev.pret;
        mem = dev.mem;
        return *this;
    }
    
void telefon::showInfo(){
        
    cout  << "Telefon, pret=" << device::showPret()<< " lei, " << "mem=" << mem << "\n";
        
    }




    




