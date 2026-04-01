#include <iostream>

using namespace std;

int main()
{
    struct Package{
        string packageID;
        string destinationCity;
        int dimensions[3];
        Package* next;
    };

    struct Courier{
        string CourierName;
        string vehicleType;
    };

    Package* top = nullptr;

    const int maxCourier=3;
    Courier carray[maxCourier];//kurye arrayim

    void pushPackage(string id, string city){//dimension mantigini cozemedim
        Package* newP=new Package();
        newP->packageID=id;
        newP->destinationCity=city;
        newP->next=top; // Yeni paketi eskisinin üzerine koydu
        top = newP;
        cout << "Paket eklendi: " <<id;
    }

    void enqueueCourier(string name, string vehicle) {
        //circular queue logici bilmiyorum
    }

    void display() {
        cout << "\n--- DURUM ---\nPaketler: ";
        Package* curr = top;
        while(curr){
            cout << curr->packageID << " "; curr = curr->next;
        }
        cout << "\nKuryeler: ";
        for(int i=0;i<maxCourier;i++) {
           cout << carray[i]<< " ";
        }
    }
    //kurye paketi aldigi zaman paket silinmeli
    Package* temp = top;
    string pID = temp->packageID;
    top = top->next;
    delete temp;

    pushPackage("P1", "Eskisehir");
    pushPackage("P2", "Kutahya");
    pushPackage("P3", "Istanbul");

    enqueueCourier("Kerem", "Motor");
    enqueueCourier("Zehra", "Araba");
    enqueueCourier("Sevket", "Týr");

    display();

    return 0;
}
