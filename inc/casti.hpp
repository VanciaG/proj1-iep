#ifndef CASTI_HPP
#define CASTI_HPP

#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

class casti 
{
public: char  *culoare;
    
public:
    casti();
    

    casti(char *culoare) ;
    
    
    
    casti(const casti &dev);
       
     
    void showInfo();

        
    void changeCuloare(char *c);
};
#endif // CASTI_HPP
