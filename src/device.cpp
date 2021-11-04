#include "../inc/device.hpp"
#include <iostream> 

using namespace std;


device::device()
{
     pret = 0;
}

device::device(int p)
{
    pret=p;
}
   
device::device(const device &dev)
{
    pret=dev.pret;
}

int device::showPret(){
	return pret;
}







