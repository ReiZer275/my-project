#include <iostream>

using namespace std;

int main()
{
    struct Song{
        string title;
        string artist;
        int ratings[3];
        Song *next;
        Song *prev;
    };


    void addsong(Song*& first,string title){ // to add new song
        Song* n= new Song;
        n -> title= title;
    };

    void next(Song* current){
        Song* current //hocam pointerlarý nasýl hareket ettireceðimi koda dokemedim
    };

    void prev(){


    };

    void removecurrent(){


    };

    void display(Song* h){
        for(int i=0; i<3; i++){
            cout << "->" << ratings[i];

        };

    };

    return 0;
}
