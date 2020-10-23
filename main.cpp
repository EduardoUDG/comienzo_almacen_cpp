#include<iostream>
#include<conio.h>
#include<string>

#include "menu.h"
using namespace std;

int main(){
    int opc;
    Menu mainMenu;

    mainMenu.vistaMenu();

    do{
        
        cin>>opc;
        
        switch(opc)
        {
        case 1: cout<<"hola"<<endl; break;
        
        default: cout<<"Opcion fuera de rango"<<endl;
            break;
        }
    }while(opc != 3);


    return 0;
}