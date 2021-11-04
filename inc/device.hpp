#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

class device 
{
protected: int pret;
    
protected:
    device();
    
    
    
    device(int p) ;
    
    
    
    device(const device &dev);
       
    
    
public:
     
    int showPret();
        
    
};
#endif // DEVICE_HPP
