#include "../inc/televizor.hpp"

#include <iostream> 

using namespace std;

    
    
televizor::televizor(): device(){
        producator = new char('\0');
    }
    
televizor::televizor(int p, char *prod) : device(p) {
        producator = new char[strlen(prod) + 1];
        strcpy(producator, prod);
        
    }
    
televizor::televizor(int p) : device(p) {
        
    }
    
televizor::televizor(char *prod) : device() {
        producator = new char[strlen(prod) + 1];
        strcpy(producator, prod);
        
    }
    
televizor::televizor(const televizor &dev) : device(dev.pret) {
       producator = new char[strlen(dev.producator) + 1];
       strcpy(producator, dev.producator);
       
    }
    
televizor::~televizor(){
    cout << "Televizor destroyed\n";
}   
    
    void televizor::showInfo(){
        
        cout  << "Televizor, pret=" << device::showPret()<< " lei, " << "producator= " <<producator<< "\n";
        
    }



