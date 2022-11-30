#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int carpan;
    do
    {
        cout<<"Bir sayý giriniz (1-10 aralýðýnda) :" ;
        cin>>carpan;
        if(carpan>10 || carpan<1)
        {
            cout<<"Hatalý giriþ yaptýnýz. Lütfen tekrar deneyiniz."<<endl;
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
