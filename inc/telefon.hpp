#ifndef TELEFON_HPP
#define TELEFON_HPP

#include <string>
#include <cstring>
#include <cstdlib>
#include "device.hpp"

using namespace std;

class telefon : public device
{
    int mem;

public:

    telefon();
    
    telefon(int p, int m) ;
    
    telefon(int m) ;
    
    telefon(const telefon &dev);

    ~telefon(); 
    
    void showInfo();
};

#endif // TELEFON_HPP

