#include <iostream>

using namespace std;

struct Node{
    string data;
    Node* next;
};

void newWord(Node* ilk){
    Node* newNode;
    if(ilk == NULL){
        return newWord(ilk);
    }

}

void removeWord(Node* ilk){
    if (ilk == NULL){
        cout<<"empty";
    }
}

int main()
{
    Node* ilk = NULL;
    string input;

    while(true){
        cout<<"Enter word";
        cout<<"EXIT to leave, UNDO to remove";
        cin>>input;

        if(input=="EXIT"){
            break;
        }

        if(input=="UNDO"){
            ilk=removeWord(ilk);

        }

    }
}
