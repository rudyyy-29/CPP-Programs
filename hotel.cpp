#include <iostream>
#include <string>
using namespace std;

class HotelRoom{
    private:
        int roomnum;
        string roomtype;
        int baserate;
        static int roomsAvailable;

    public:
        HotelRoom(){
        roomnum=0; roomtype=""; baserate=0;
         }

        HotelRoom(int num,string type,int rate){
            roomnum=num;
            roomtype=type;
            baserate=rate;
         }

         void checkIn(){
         cout<<"Enter Room Num: ";
         cin>>roomnum;
         cin.ignore();
         cout<<"Enter Room Type: ";
         getline(cin,roomtype);
         cout<<"Enter Base Rate of Room: ";
         cin>>baserate;
         cin.ignore();
         roomsAvailable--;
         }

         void display(){
            cout<<"The Rooom No is: "<<roomnum<<endl;
            cout<<"Room Type: "<<roomtype<<endl;
            cout<<"Base Rate: "<<baserate<<endl;
         }

         static void vacancy(){
            cout<<"\nThe Number of Available Rooms is: "<<roomsAvailable<<endl;
         }
         
         HotelRoom operator+(int xtraservices){
            baserate+=xtraservices;
            return *this;
         }

         ~HotelRoom(){
            cout<<"Room Checkout: "<<roomnum<<endl;
         }
};

int HotelRoom::roomsAvailable=20;

class SuiteRoom : public HotelRoom{
     private:
        string hasJacuzzi,separateLivingArea,butlerService,balcony;
     public:
        void accept(){
             cout<<"Room has Jacuzzi?\n";
              getline(cin,hasJacuzzi);
             cout<<"Room has a Separte Living Area?\n";
              getline(cin,separateLivingArea);
             cout<<"Room has Butler Sevices?\n";
              getline(cin,butlerService);
             cout<<"Room has Balcony?\n";
              getline(cin,balcony);
        }

        void disp(){
            display();
            cout<<"The Room has Jaccuzi?"<<hasJacuzzi<<endl;
            cout<<"The Room has Living Room: "<<separateLivingArea<<endl;
            cout<<"The Room has Butler Serv: "<<butlerService<<endl;
            cout<<"The Room has Balcony: "<<balcony<<endl;
        }

        void bookSpa(){
            cout<<"We have Booked a Spa! \n"<<endl;
        }
};

int main(){
    SuiteRoom R1;
    R1.checkIn();
    R1.accept();
    R1.disp();
    
    cout<<"The Total Rooms: 20";

    HotelRoom::vacancy();

    R1.bookSpa();
    return 0;
}