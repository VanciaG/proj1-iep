#include <../inc/device.hpp>
#include <../inc/telefon.hpp>
#include <../inc/televizor.hpp>

int main()
{
    
    
    telefon ob(12,3);
    ob.showInfo();
    
    telefon ob2(ob);
    ob2.showInfo();
    
    telefon ob1(5);
    ob1.showInfo();
    
    telefon ob3(ob1);
    ob3.showInfo();
    
    char s[11] = "samsung";
    
    televizor ob4(12, s);
    ob4.showInfo();
    televizor ob5(ob4);
    ob5.showInfo();

    
    return 0;
}
