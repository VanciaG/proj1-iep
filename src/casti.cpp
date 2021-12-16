#include "../inc/casti.hpp"
#include <iostream> 

using namespace std;


casti::casti()
{
     culoare = new char('\0');
}

casti::casti(char *c)
{
    culoare = new char[strlen(c) + 1];
    strcpy(culoare, c);
}
   
casti::casti(const casti &dev)
{
    culoare = new char[strlen(dev.culoare) + 1];
    strcpy(culoare, dev.culoare);
}

void casti::showInfo(){
        
        cout  << "Casti, culoare=" << culoare<< "\n";
        
    }

void casti::changeCuloare(char *c)
{
    culoare = new char[strlen(c) + 1];
    strcpy(culoare, c);
}







