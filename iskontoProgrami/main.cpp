#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    float adet,efiyat,ifiyat;
    cout<<"Ürün etiket fiyatını giriniz: ";
    cin>>efiyat;
    cout<< "Ürün adedini giriniz: ";
    cin>>adet;
    if(adet<5)
    {
        ifiyat= (efiyat*adet);
        cout<<"Girilen adet: "<<adet<<endl;
        cout<<"Yapılan iskonto: %0"<<endl;
        cout<< "Ödemeniz gereken tutar: "<<ifiyat;

    }
    else if(adet>4 && adet<11)
    {
        ifiyat= (efiyat*adet)-(efiyat*adet)*10/100;
        cout<<"Girilen adet: "<<adet<<endl;
        cout<<"Yapılan iskonto: %10"<<endl;
        cout<< "Ödemeniz gereken tutar: "<<ifiyat;

    }
    else if(adet>10 && adet<101)
    {
        ifiyat= (efiyat*adet)-(efiyat*adet)*15/100;
        cout<<"Girilen adet: "<<adet<<endl;
        cout<<"Yapılan iskonto: %15"<<endl;
        cout<< "Ödemeniz gereken tutar: "<<ifiyat;

    }
    else if(adet>100 && adet<1001)
    {
        ifiyat= (efiyat*adet)-(efiyat*adet)*20/100;
        cout<<"Girilen adet: "<<adet<<endl;
        cout<<"Yapılan iskonto: %20"<<endl;
        cout<< "Ödemeniz gereken tutar: "<<ifiyat;

    }
    else if(adet>1000)
    {
        ifiyat= (efiyat*adet)-(efiyat*adet)*25/100;
        cout<<"Girilen adet: "<<adet<<endl;
        cout<<"Yapılan iskonto: %25"<<endl;
        cout<< "Ödemeniz gereken tutar: "<<ifiyat;

    }
    return 0;
}



