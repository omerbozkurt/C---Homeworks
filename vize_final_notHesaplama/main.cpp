#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int vize,final,ort;
    cout<<"Vize Notunu Girin : ";
    cin>>vize;
    cout<<"Final Notunu Girin : ";
    cin>>final;
    ort=(vize*0.4)+(final*0.6);
    cout<<"Not Ortalamanýz : "<<ort<<endl ;

    if(ort>=90)
    {
        cout << "Harf Notunuz: AA, Durum: Başarılı";
    }
    else if((ort>=80) && (ort<90))
    {
        cout << "Harf Notunuz: BA, Durum: Başarılı";
    }
    else if((ort>=70) && (ort<80))
    {
        cout << "Harf Notunuz: BB, Durum: Başarılı";
    }
    else if((ort>=65) && (ort<70))
    {
        cout << "Harf Notunuz: CB, Durum: Başarılı";

    }
    else if((ort>=60) && (ort<65))
    {
        cout << "Harf Notunuz: CC, Durum: Başarılı";

    }
    else if((ort>=55) && (ort<60))
    {
        cout << "Harf Notunuz: DC, Durum: Başarısız";

    }
    else if((ort>=50) && (ort<55))
    {
        cout << "Harf Notunuz: DD, Durum: Başarısız";

    }
    else if((ort>=40) && (ort<50))
    {
        cout << "Harf Notunuz: FD, Durum: Başarısız";

    }
    else if(ort<40)
    {
        cout << "Harf Notunuz: FF, Durum: Başarısız";

    }
    return 0;
}
