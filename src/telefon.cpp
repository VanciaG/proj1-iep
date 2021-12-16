#include "../inc/telefon.hpp"
#include "../inc/device.hpp"
#include "../inc/casti.hpp"
#include "device.cpp"
#include "casti.cpp"
#include <iostream> 
#include <memory>

using namespace std;



telefon::telefon(): device(){
    mem=0;
    }
    
telefon::telefon(int p, int m, char *cul) : device(p) {
        unique_ptr<casti> pc (new casti(cul));
        c = move(pc);
        mem=m;
    }
    
telefon::telefon(int m) : device() {
        mem=m;
    }
    
telefon::telefon(const telefon &dev) : device(dev.pret) {     
        mem = dev.mem;
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
        
        cout  << " pret=" << device::showPret()<< " lei, " << "mem=" << mem << " " ;
        c->showInfo();
        
}

void telefon::changeCastiCuloare(char *x){
        c->changeCuloare(x);
          
}

void telefon::afisareCasti(){
         c->showInfo();
          
}
    
    




