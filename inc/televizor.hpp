#ifndef TELEVIZOR_HPP
#define TELEVIZOR_HPP

#include <string>
#include <cstring>
#include <cstdlib>
#include "device.hpp"
#include <memory>

using namespace std;

class televizor : public device
{
     char *producator;
    

public:

    televizor();
        
    
    
     televizor(int p, char *prod);
        
    
    
    televizor(int p) ;
        
    
    
    televizor(char *prod) ;
        
    
    
    televizor(const televizor &dev);
       
    
    televizor& operator=(const televizor &dev);
    
    

    void showInfoPret();

    void showInfoProducator();

    
        
        
};


#endif // TELEVIZOR_HPP

