#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int carpan;
    do
    {
        cout<<"Bir say� giriniz (1-10 aral���nda) :" ;
        cin>>carpan;
        if(carpan>10 || carpan<1)
        {
            cout<<"Hatal� giri� yapt�n�z. L�tfen tekrar deneyiniz."<<endl;
        }

    }

    while(carpan>10 || carpan<1);
    {
        for (int carpilan = 1; carpilan < 11; carpilan++)
        {
            cout << carpan << " * " << carpilan << " = " << carpan * carpilan << endl;
            cout << endl;
        }
    }
    return 0;
}
