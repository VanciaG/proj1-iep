#include <../inc/device.hpp>
#include <../inc/telefon.hpp>
#include <../inc/televizor.hpp>

#include <iostream>

void makeTelevizor(){
    char s2[11] = "samsung";
    int i;
    shared_ptr<televizor> t = make_shared<televizor>(6, s2);
    for(i=0;i<3;i++)
    {
        shared_ptr<televizor> t1 = t;  //daca faceam unique nu puteam sa il egalez cu t
        t1->showInfoProducator(); //cout << t.use_count() << "\n";
    }
    //aici pointerul t1 nu mai exista
    t->showInfoPret();
    cout << t.use_count() << "\n";
}

/*shared_ptr<televizor> makeTelevizor(){
    char s2[11] = "samsung";
    shared_ptr<televizor> t = make_shared<televizor>(6, s2);
    return t;

}*/




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

    telefon ob2(12, 13, s);  //cand apelez asta telefon imi face si un casti de culoarea alb, si e mai bine ca mi-l face asa ca daca l-as fi facut si dupa
                                //l-as fi dat ca param si aparea o eroare la creare, nu il mai puteam sterge, pt ca el nu a ajuns sa fie luat de un pointer

    char s1[11] = "negru";
    ob2.changeCastiCuloare(s1);
    ob2.showInfo();

    char s2[11] = "samsung";
    
    //shared_ptr<televizor> t = make_shared<televizor>(6, s2);
    /*{
    shared_ptr<televizor> t1 = t;
    
    t->showInfoPret();

    cout << t.use_count() << "\n";
    }

    cout << t.use_count() << "\n";*/



    /*shared_ptr<televizor> t1 = makeTelevizor();
    cout << t1.use_count() << "\n";
    t1->showInfoProducator();*/
    
    makeTelevizor();
    return 0;
    
}
