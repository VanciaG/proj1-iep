#ifndef TELEFON_HPP
#define TELEFON_HPP

#include <string>
#include <cstring>
#include <cstdlib>
#include "device.hpp"
#include "casti.hpp"

#include <memory>



using namespace std;

class telefon : public device
{
    int mem;
    

public:
    //casti c ;

    unique_ptr<casti> c;

    telefon();
    
    telefon(int p, int m, char *cul) ;
    
    telefon(int m) ;
    
    telefon(const telefon &dev);

    telefon& operator=(const telefon &dev);
    
    void showInfo();

    void afisareCasti();

    void changeCastiCuloare(char *x);
};

#endif // TELEFON_HPP

