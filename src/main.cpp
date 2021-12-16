#include <../inc/device.hpp>
#include <../inc/telefon.hpp>
#include <../inc/televizor.hpp>

int main()
{
    
    
    /*telefon ob(12,3);
    ob.showInfo();
    
    telefon ob2(ob);
    ob2.showInfo();
    
    telefon ob1(5);
    ob1.showInfo();
    
    telefon ob3(ob1);
    ob3.showInfo();
    
    char s[11] = "samsung";
    //cout << s << endl;
    //char *p = a;
    televizor ob4(12, s);
    ob4.showInfo();
    televizor ob5(ob4);
    ob5.showInfo();
    //deviceVideo ob6;
    //ob6 = ob4 + ob5;
    //ob6.showPret();*/

    char s[11] = "alb";
    casti ob1(s);

    telefon ob2(12, 13, s);  //cand apelez asta telefon imi face si un casti de culoarea alb

    char s1[11] = "negru";
    ob2.changeCastiCuloare(s1);
    ob2.showInfo();
    
    return 0;
}
