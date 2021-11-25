#include <../inc/device.hpp>
#include <../inc/telefon.hpp>
#include <../inc/televizor.hpp>

int main()
{
    
    
    telefon ob(12,3), ob1(13,9), ob2;
    //ob.showInfo();

    ob2 = ob = ob1;    //multiple assignment
    ob2.showInfo();

    ob.showInfo();
    
    telefon ob3(12,3);
    ob3 = ob3;      //self-assignment
    ob3 = ob;
    /*telefon ob2(ob);
    ob2.showInfo();
    
    telefon ob1(5);
    ob1.showInfo();
    
    telefon ob3(ob1);
    ob3.showInfo();*/
    
    char s[11] = "samsung";
    
    televizor ob4(12, s), ob5(14,s), ob6;
    //ob4.showInfo();
    ob6 = ob4 = ob5;
    ob6.showInfo();

    ob4 = ob4;

    ob4.showInfo();
    return 0;
}
