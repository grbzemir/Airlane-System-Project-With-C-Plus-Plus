#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management

{

    public:

    Management()

    {

    mainMenu();

    }

};

class Details

{

    public:

    static string name;
    static string sex;
    int phoneNo;
    int age;
    string address;
    static int customerId;
    char arr[100]; // 100 karakterlik bir dizi oluşturduk

    void information()

    {
        cout<<"\n Yolcu Idsini Giriniz: ";
        cin>>customerId;
        cout<<"\n Yolcu Adini Giriniz: ";
        cin>>name;
        cout<<"\n Yolcu Yasini Giriniz: ";
        cin>>age;
        cout<<"\n Yolcu Adresini Giriniz: ";
        cin>>address;
        cout<<"\n Yolcu Cinsiyetini Giriniz: ";
        cin>>sex;
        cout<<"\n Yolcu Detaylari Basari ile kaydedildi \n"<<endl;

    }

};

int Details::customerId;

string Details::name;
string Details::sex;

class registration

{

    public:
    static int secim;
    int secim1;
    int back;
    static float charges; // masraflar

    void flights()

    {

        string flightN[]={"Turkey","Azerbaycan","Almanya","Ingiltere","Fransa","Kanada"};

        for(int a = 0 ; a < 6 ; a++)

        {

            cout<<a+1<<"."<<flightN[a]<<endl;

        }

        cout<<"\n Havayollarina Hosgeldiniz! "<<endl;
        cout<<"\n Lutfen Ucusunuzu Seciniz: ";
        cin>>secim;

        switch(secim)

        {

            case 1:

            {

                cout<<"_________________Welcome to Turkish Airlanes_________________\n"<<endl;

                cout<<"Sizin Konforunuz Bizim Icin Onemlidir. Yolculugun Tadini Cikarin! "<<endl;

                cout<<"Lutfen Ucusunuzu Takip Ediniz: "<<endl;

                cout<<"[1] Istanbul - America"<<endl;
                cout<<"\t17-04-2023 22.00PM 10 HOURS Rs. 5000"<<endl;
                cout<<"[2] Istanbul - Rusya"<<endl;
                cout<<"\t17-04-2023 22.00PM 6 HOURS Rs. 5000"<<endl;
                cout<<"[3] Istanbul - Jamaica"<<endl;
                cout<<"\t17-04-2023 22.00PM 14 HOURS Rs. 5000"<<endl;

                cout<<"\n Lutfen Ucusunuzu Seciniz: ";
                cin>>secim1;

                if (secim1==1)

                {

                    charges = 15000;
                    cout<<"Ucusunuz Basariyla Kaydedildi TK - 1071"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;

                    
                }

                else if (secim1==2)

                {

                    charges==10000;
                    cout<<"Ucusunuz Basariyla Kaydedildi TK - 1453"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else if(secim1==3)

                {

                    charges==30400;
                    cout<<"Ucusunuz Basariyla Kaydedildi TK - 1938"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else

                {

                    cout<<"Lutfen Gecerli Bir Ucus Seciniz"<<endl;
                    flights();
                    
                }

                cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
                cin>>back;

                if (back==1)

                {

                    mainMenu();

                    
                }

                else

                {

                    mainMenu();
                    
                }
            }

            case 2:
               
               {

                cout<<"_________________Welcome to Azerbaycan Airlanes_________________\n"<<endl;

                cout<<"Sizin Konforunuz Bizim Icin Onemlidir. Yolculugun Tadini Cikarin! "<<endl;

                cout<<"Lutfen Ucusunuzu Takip Ediniz: "<<endl;

                cout<<"[1] Baku - America"<<endl;
                cout<<"\t18-05-2023 22.00PM 10 HOURS Rs. 15000"<<endl;
                cout<<"[2] Baku - Istanbul"<<endl;
                cout<<"\t18-05-2023 22.00PM 6 HOURS Rs. 25000"<<endl;
                cout<<"[3] Baku - Jamaica"<<endl;
                cout<<"\t18-05-2023 22.00PM 14 HOURS Rs. 35000"<<endl;

                cout<<"\n Lutfen Ucusunuzu Seciniz: ";
                cin>>secim1;

                if (secim1==1)

                {

                    charges = 115000;
                    cout<<"Ucusunuz Basariyla Kaydedildi AZ - 196"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;

                    
                }

                else if (secim1==2)

                {

                    charges==120000;
                    cout<<"Ucusunuz Basariyla Kaydedildi AZ - 197"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else if(secim1==3)

                {

                    charges==310400;
                    cout<<"Ucusunuz Basariyla Kaydedildi AZ - 199"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else

                {

                    cout<<"Lutfen Gecerli Bir Ucus Seciniz"<<endl;
                    flights();
                    
                }

                cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
                cin>>back;

                if (back==1)

                {

                    mainMenu();

                    
                }

                else

                {

                    mainMenu();
                    
                }


               }

               case 3:

               {

                cout<<"_________________Welcome to Germany Airlanes_________________\n"<<endl;

                cout<<"Sizin Konforunuz Bizim Icin Onemlidir. Yolculugun Tadini Cikarin! "<<endl;

                cout<<"Lutfen Ucusunuzu Takip Ediniz: "<<endl;

                cout<<"[1] Berlin - England"<<endl;
                cout<<"\t17-04-2023 22.00PM 10 HOURS Rs. 5000"<<endl;
                cout<<"[2] Kreuzberg - Turkey"<<endl;
                cout<<"\t17-04-2023 22.00PM 6 HOURS Rs. 5000"<<endl;
                cout<<"[3] Frankurt - Syria"<<endl;
                cout<<"\t17-04-2023 22.00PM 14 HOURS Rs. 5000"<<endl;

                cout<<"\n Lutfen Ucusunuzu Seciniz: ";
                cin>>secim1;

                if (secim1==1)

                {

                    charges = 15000;
                    cout<<"Ucusunuz Basariyla Kaydedildi GM - 1939"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;

                    
                }

                else if (secim1==2)

                {

                    charges==10000;
                    cout<<"Ucusunuz Basariyla Kaydedildi GM - 1945"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else if(secim1==3)

                {

                    charges==30400;
                    cout<<"Ucusunuz Basariyla Kaydedildi GM - 2345"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else

                {

                    cout<<"Lutfen Gecerli Bir Ucus Seciniz"<<endl;
                    flights();
                    
                }

                cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
                cin>>back;

                if (back==1)

                {

                    mainMenu();

                    
                }

                else

                {

                    mainMenu();
                    
                }

               }

               case 4:

               {
              
                cout<<"_________________Welcome to England Airlanes_________________\n"<<endl;

                cout<<"Sizin Konforunuz Bizim Icin Onemlidir. Yolculugun Tadini Cikarin! "<<endl;

                cout<<"Lutfen Ucusunuzu Takip Ediniz: "<<endl;

                cout<<"[1] England - Azerbaycan"<<endl;
                cout<<"\t19-06-2023 22.00PM 10 HOURS Rs. 15000"<<endl;
                cout<<"[2] England - Rusya"<<endl;
                cout<<"\t19-06-2023 22.00PM 6 HOURS Rs. 25000"<<endl;
                cout<<"[3] England - Turkey"<<endl;
                cout<<"\t19-06-2023 22.00PM 14 HOURS Rs. 35000"<<endl;

                cout<<"\n Lutfen Ucusunuzu Seciniz: ";
                cin>>secim1;

                if (secim1==1)

                {

                    charges = 15000;
                    cout<<"Ucusunuz Basariyla Kaydedildi EN - 33"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;

                    
                }

                else if (secim1==2)

                {

                    charges==10000;
                    cout<<"Ucusunuz Basariyla Kaydedildi EN - 31"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else if(secim1==3)

                {

                    charges==30400;
                    cout<<"Ucusunuz Basariyla Kaydedildi EN - 32"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else

                {

                    cout<<"Lutfen Gecerli Bir Ucus Seciniz"<<endl;
                    flights();
                    
                }

                cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
                cin>>back;

                if (back==1)

                {

                    mainMenu();

                    
                }

                else

                {

                    mainMenu();
                    
                }

               }

               case 5:

               {

                cout<<"_________________Welcome to France Airlanes_________________\n"<<endl;

                cout<<"Sizin Konforunuz Bizim Icin Onemlidir. Yolculugun Tadini Cikarin! "<<endl;

                cout<<"Lutfen Ucusunuzu Takip Ediniz: "<<endl;

                cout<<"[1] Paris - America"<<endl;
                cout<<"\t08-02-2023 22.00PM 10 HOURS Rs. 5000"<<endl;
                cout<<"[2] Lyon - Rusya"<<endl;
                cout<<"\t09-03-2023 22.00PM 6 HOURS Rs. 5000"<<endl;
                cout<<"[3] Istanbul - Jamaica"<<endl;
                cout<<"\t10-04-2023 22.00PM 14 HOURS Rs. 5000"<<endl;

                cout<<"\n Lutfen Ucusunuzu Seciniz: ";
                cin>>secim1;

                if (secim1==1)

                {

                    charges = 215000;
                    cout<<"Ucusunuz Basariyla Kaydedildi FR - 41"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;

                    
                }

                else if (secim1==2)

                {

                    charges==130000;
                    cout<<"Ucusunuz Basariyla Kaydedildi FR - NAPOLYON"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else if(secim1==3)

                {

                    charges==130400;
                    cout<<"Ucusunuz Basariyla Kaydedildi FR - CHURCHIL"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else

                {

                    cout<<"Lutfen Gecerli Bir Ucus Seciniz"<<endl;
                    flights();
                    
                }

                cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
                cin>>back;

                if (back==1)

                {

                    mainMenu();

                    
                }

                else

                {

                    mainMenu();
                    
                }

               }

               case 6:

               cout<<"_________________Welcome to Canadian Airlanes_________________\n"<<endl;

                cout<<"Sizin Konforunuz Bizim Icin Onemlidir. Yolculugun Tadini Cikarin! "<<endl;

                cout<<"Lutfen Ucusunuzu Takip Ediniz: "<<endl;

                cout<<"[1] Toronto - America"<<endl;
                cout<<"\t17-04-2023 22.00PM 10 HOURS Rs. 5000"<<endl;
                cout<<"[2] LosAngales - Rusya"<<endl;
                cout<<"\t17-04-2023 22.00PM 6 HOURS Rs. 5000"<<endl;
                cout<<"[3] NewYork - Jamaica"<<endl;
                cout<<"\t17-04-2023 22.00PM 14 HOURS Rs. 5000"<<endl;

                cout<<"\n Lutfen Ucusunuzu Seciniz: ";
                cin>>secim1;

                if (secim1==1)

                {

                    charges = 215000;
                    cout<<"Ucusunuz Basariyla Kaydedildi CN - 11"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;

                    
                }

                else if (secim1==2)

                {

                    charges==140000;
                    cout<<"Ucusunuz Basariyla Kaydedildi CN - 22"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else if(secim1==3)

                {

                    charges==304100;
                    cout<<"Ucusunuz Basariyla Kaydedildi CN - 23"<<endl;
                    cout<<"Menuye Donerek Biletinizi Alabilirsiniz"<<endl;
                    
                }

                else

                {

                    cout<<"Lutfen Gecerli Bir Ucus Seciniz"<<endl;
                    flights();
                    
                }

                cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
                cin>>back;

                if (back==1)

                {

                    mainMenu();

                    
                }

                else

                {

                    mainMenu();
                    
                }


        }
           
           

    }

};

float registration::charges;
int registration::secim;

class ticket : public registration , Details

{

      public:

      void Bill() // fatura

      {

        string destination=""; // yolculuk yeri
        ofstream outf("records.txt");

        {

            outf<<"_______________________Emir Airlines_______________________"<<endl;
            outf<<"_______________________Bilet_______________________________"<<endl;
            outf<<"___________________________________________________________"<<endl;

            outf<<"Customer ID: "<<Details::customerId<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Sex:  "<<Details::sex<<endl;
            outf<<"Description:   "<<endl<<endl;

            if (registration::secim==1)

            {

                destination="Turkey";
                
            }

            else if (registration::secim==2)

            {

                destination="Azerbaycan";
                
            }

            else if (registration::secim==3)

            {

                destination="Almanya";
                
            }

            else if (registration::secim==4)

            {

                destination="Ingiltere";
                
            }

            else if (registration::secim==5)

            {

                destination="Fransa";
                
            }

            else if(registration::secim==6)

            {

                destination="Kanada";

                
            }

            outf<<"Destination: "<<destination<<endl;
            outf<<"Charges: "<<registration::charges<<endl;


        }

        outf.close();

      }

      void dispBill()

      {

        ifstream ifs("records.txt");

        {
             
             if(!ifs)

             {

                cout<<"Dosya Acilamadi"<<endl;

             }

             while(!ifs.eof())

             {

                ifs.getline(arr , 100);
                cout<<arr<<endl;

             }

        }

        ifs.close();

      }

};

void mainMenu()

{

    int lsecim;
    int secim2;
    int back;

    cout<<"\t         Turkish Airlines        \n"<<endl;
    cout<<"\t_____________Main Menu___________\n"<<endl;

    cout<<"\t______________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;

    cout<<"\t|\t  [1] Yolcu Detaylari         \t|"<<endl;
    cout<<"\t|\t  [2] Ucus Kaydi              \t|"<<endl;
    cout<<"\t|\t  [3] Bilet Ucretleri         \t|"<<endl;
    cout<<"\t|\t  [4] Cikis                   \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t_______________________________________"<<endl;

    cout<<"\t\tSeciminizi Giriniz: ";
    cin>>lsecim;

    Details d;
    registration r;
    ticket t;

    switch(lsecim)

    {

        case 1:

        {

            cout<<"__________________Yolcular_________________\n"<<endl;
            d.information();

            cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
            cin>>back;

            if (back==1)

            {

                mainMenu();

                
            }

            else

            {

                mainMenu();
                
            }

            break;

        } 

        case 2:

        {

            cout<<"____________Sistemi Kullanarak Ucus Rezervasoynu Yapiniz____________\n"<<endl;
            r.flights();
            break;

        }

        case 3:

        cout<<"______________Bilet Ucretleri______________\n"<<endl;
        t.Bill();

        cout<<"Biletiniz Basildi Alabilirsiniz \n"<<endl;
        cout<<"Bileti Goruntulemek Icin Herhangi Bir Tusa Basiniz";

        cin>>back;

        if (back==1)

        {

            t.dispBill();
            cout<<"Menuye Donmek Icin Herhangi Bir Tusa Basiniz";
            cin>>back;

            if (back==1)

            {

              mainMenu();

                
            }

            else

            {
                    
                mainMenu();
                    
            
            }
            
        }

        else

        {
                
            mainMenu();
                
            
        }

        break;

    }

   
    
}





int main()

{
    system("color B");
    Management m;

    return 0;

}

