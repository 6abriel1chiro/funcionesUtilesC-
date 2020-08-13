#include <iostream>
#include <stdio.h>
#include <conio.h>  // para kbhit()
#include <windows.h>
#define COLORNORMAL 7
using namespace std;


//EJERCICIO 8
void dibujarLineaHorizontal(int tam,int posx, int posy,char c){

for(int i = 0;i<tam;i++){
        for (int j = 0; j <= i; j++)
        {
            cout <<c;
        }
        cout << endl;

}
}
void dibujarLineaVertical(int tam,int posx, int posy,char c)
{
for(int i = tam;i>0;i--){
        for (int j = 0; j < i; j++)
        {
            cout <<c;
        }
        cout << endl;

}
}
//EJERCICIO 9
void dibujarLineaHorizontalEjercicioNueve(int tam,int posx, int posy,char c){

for(int i = 0;i<tam;i++){
        for (int j = 0; j <= i; j++)
        {

            cout <<c;

               if(c=='z'){
                c='a';
            }
               c++;


        }
        cout << endl;

}
}
// EJERCICIO 10
void dibujarLineaHorizontalEjercicioDiez(int tam,int posx, int posy,int digito){

for(int i = 0;i<tam;i++){
        for (int j = 0; j <= i; j++)
        {
            cout <<digito;
        }
        cout << endl;

}
}
//EJERCICIO 11

void gotoxy(short x, short y)  //MUEVE EL CURSOR A LA POSICION (X ,Y)
{
   COORD pos = { x, y };
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void color(WORD col)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),col);
}
void dibujaLineaHorizontal(char car, int tamanio,int posx,int posy,int pintura)
//dibuja una linea con el car de un tamanio del color pintura, a partir de la posx,posy
{
    color(pintura);
    for (int i=0;i<tamanio;i++)
    {
        gotoxy(posx+i,posy);
        cout<<car;

    }
    color(COLORNORMAL);
}
void mostrarFiguraEnUnaPos(char car, int posx, int posy,
                           int lado, int pintura)
{

    color(pintura);
    for (int tam=0;tam<lado;tam++)
    {
        dibujaLineaHorizontal(car,tam,posx,posy,pintura);
        posy++;
    }

}

void borrarFiguraEnUnaPos(char car,int posx,int posy, int lado,int pintura)
{
   for (int tam=0;tam<lado;tam++)
    {
        dibujaLineaHorizontal(car,tam,posx,posy,pintura);
        posy++;
    }

}

void moverFiguraUnaPosDerecha(char car,int &posx, int posy,int lado,int pintura,int retardo)
{
    mostrarFiguraEnUnaPos(car,posx,posy,lado,pintura);
    Sleep(retardo);
    borrarFiguraEnUnaPos(car,posx, posy,lado,pintura);
    posx++;
    mostrarFiguraEnUnaPos(car,posx,posy,lado,pintura);
}
void moverFiguraUnaPosIzquierda(char car,int &posx, int posy,int lado,int pintura,int retardo)
{
    mostrarFiguraEnUnaPos(car,posx,posy,lado,pintura);
    Sleep(retardo);
    borrarFiguraEnUnaPos(car,posx, posy,lado,pintura);
    posx--;
    mostrarFiguraEnUnaPos(car,posx,posy,lado,pintura);
}
int main()
{
/*
    int tam;
    cin>>tam;

// EJERCICIO 8
dibujarLineaHorizontal(tam,0,0,'*');
cout<<endl;
dibujarLineaVertical(tam,0,0,'*');

//EJERCICIO 9
dibujarLineaHorizontalEjercicioNueve(tam,0,0,'a');

//EJERCICIO 10

int digito;
for(digito;digito<=9;digito++){
dibujarLineaHorizontalEjercicioDiez(5,0,0,digito);
dibujarLineaHorizontalEjercicioDiez(7,0,0,digito);
dibujarLineaHorizontalEjercicioDiez(9,0,0,digito);
dibujarLineaHorizontalEjercicioDiez(13,0,0,digito);

}
*/
//EJERCICIO 11
int posxDeMiCaracter1=10, posxDeMiCaracter2=10,posxDeMiCaracter3=10;

  // mostrarFiguraEnUnaPos('&',5,10,9,10);
   //Sleep(3000);
    //borrarFiguraEnUnaPos(' ',5,10,9,7);
          for (int i=0;i<20;i++){
    moverFiguraUnaPosDerecha('&',posxDeMiCaracter1,5,9,10,300);
    }
     for (int i=0;i<20;i++){
    moverFiguraUnaPosIzquierda('&',posxDeMiCaracter1,5,9,10,300);
     }

     //EJERCICIO 12



    return 0;
}
