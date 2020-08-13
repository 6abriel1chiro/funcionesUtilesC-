#include <iostream>

using namespace std;

// EJERCICIOS  1 NUMERO MAYOR
int funcionNumeroMayor(int numeros[],int cantidad){
int i;
int mayor;
for(i=0;i<cantidad;i++){
if(i==0){
    mayor=numeros[i];
}
else{
    if(numeros[i]>mayor)
        mayor=numeros[i];
}

}
return mayor;
}
//EJERCICIO 2
void ProcedNumeroMayor(int numeros[],int cantidad,int& mayor){
int i;
for(i=0;i<cantidad;i++){
if(i==0){
    mayor=numeros[i];
}
else{
    if(numeros[i]>mayor)
        mayor=numeros[i];
}

}
cout<<"Resultado de PROCEDIMIENTO, el mayor es "<<mayor<<endl;
}
// EJERCICIO 3
void ejer3(int& num1, int& num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
//EJERCICIO 4
void numerosAbundantes(){
int sumaDivisores=0;
	int numero, i, resto;
	cout << "Este proceso muestra si un numero es abundante" << endl;
	cout << "Dime un número: ";
	cin >> numero;
	cout << "Sus divisores son: ";
		for (i=1; i<=numero ; i++)
			{
			resto = numero%i;
			if (resto==0)
				{
				    if(i!=numero)
                        {
				cout << i << " ";
				sumaDivisores=sumaDivisores+i;
                        }
				}
			}
	cout << endl;
	cout<<"suma "<<sumaDivisores<<endl;
	if(numero<sumaDivisores)
        cout<<numero<<" es abundante "<<endl;
	else
        cout<<numero<<" NO es abundante "<<endl;


}

//EJERCICIO 5
int invertirNumero(int numero){

	int aux ,mult;
	int numeroR = 0;

	mult = 1;
	aux = numero;

	while(aux!=0){
		aux /=10;
		mult *=10;
	}

	mult /=10;

	while(numero!=0){
		aux = numero % 10;
		numeroR += mult * aux;
		numero /=10;
		mult /=10;
	}

	return numeroR;
}
void invertidosIguales(int pInicio,int pFinal){
    int i,invertido;
for(i=pInicio;i<pFinal;i++){
    invertido=invertirNumero(i);
    if(i==invertido)
        cout<<i<<endl;
}
}
//EJERCICIO 6
void leerHora(int &hora,int &minuto,int &segundo){
   do{
        cout<<"POR FAVOR INGRESE UNA HORA VALIDA "<<endl;
        cin>>hora>>minuto>>segundo;
    } while((hora>24) or (minuto>60) or (segundo>60));
}
void mostrarHora(int &hora,int &minuto,int &segundo){
    cout<<hora<<" :  "<<minuto<<" : "<<segundo<<endl;
}
bool esPrimeraHoraEsPosterior(int &h1,int &m1,int &s1,int &h2,int &m2, int &s2){

    if(h1>h2)
        return true;
        else if(m1>m2)
            return true;
                else if(s1>s2)
                    return true;
                    else
                    return false;
}
void HoraMasReciente(){
    int numero;
    int hora,minuto,segundo;
    int hora1,minuto1,segundo1;
    int horaMasReciente,minutoMasReciente,segundoMasReciente;
    cout<<"cuantas horas va a comparar? "; cin>>numero;
    cout<<endl;
    for(int i=0;i<numero;i++){
        leerHora(hora,minuto,segundo);
        if(i==0){
        hora1=hora;
        minuto1=minuto;
        segundo1=segundo;
        }
    if(!esPrimeraHoraEsPosterior(hora1,minuto1,segundo1,hora,minuto,segundo)){
        horaMasReciente=hora1;
        minutoMasReciente=minuto1;
        segundoMasReciente=segundo1;
    }
    else{
        horaMasReciente=hora;
        minutoMasReciente=minuto;
        segundoMasReciente=segundo;

    }

        hora1=hora;
        minuto1=minuto;
        segundo1=segundo;

    }
    cout<<"la hora mas reciente es "<<horaMasReciente<<" : "<<minutoMasReciente<<" : "<<segundoMasReciente<<endl;
}
//EJERCICIO 7
void sumarSegundo(int &hora,int &minuto,int &segundo){
int aSegundos = hora*3600+(minuto*60)+segundo;
aSegundos += 1;

hora = aSegundos / 3600;
minuto = ((aSegundos /60)-(hora*60));
segundo=(aSegundos-(minuto*60)-(hora*3600));

}

//MAIN
int main()
{
/*
int cantidad;
cout<<"cuantos numeros va a comparar?"<<endl;
cin>>cantidad;
int numeros[cantidad];

for(int i=0;i<cantidad;i++){
cout<<"ingresa un numero"<<endl;
cin>>numeros[i];
}
//1 FUNCION
int mayor=funcionNumeroMayor(numeros,cantidad);
cout<<"RESULTADO DE FUNCION, el mayor es "<<mayor<<endl;

//2 PROCEDIMIENTO
ProcedNumeroMayor(numeros,cantidad,mayor);

// EJERCICIO 3
        int a;
        int b;
        cout<<"primer valor "; cin>>a;
        cout<<"segundo valor "; cin>>b;
         cout<<"\nvalores:  ";
        cout<< a <<" "<< b<<endl;
        ejer3(a,b);
         cout<<"\nvalores nuevos: ";
        cout<< a <<" "<< b<<endl;



//EJERCICIO 4   numerosAbundantes();

//EJERCICIO 5
int a,b;
cout<<"Mostrar numeros del :"; cin>>a;
cout<<" al ";  cin>>b;
invertidosIguales(a,b);

//EJERCICIO 6
int hora, minuto, segundo;
int hora2,minuto2,segundo2;
leerHora(hora,minuto,segundo);
mostrarHora(hora,minuto,segundo);

    cout<<"ingrese la primera hora ";
    leerHora(hora,minuto,segundo);
    cout<<"ingrese la segunda hora ";
    leerHora(hora2,minuto2,segundo2);

cout<<esPrimeraHoraEsPosterior(hora,minuto,segundo,hora2,minuto2,segundo2)<<endl;

HoraMasReciente();
*/
//EJERCICIO 7
int hora,minuto,segundo;
int k;
leerHora(hora,minuto,segundo);

cout<<"cuantos segundos desea aumentar? "; cin>>k;
cout<<endl;
for(int i=0;i<k;i++)
sumarSegundo(hora,minuto,segundo);

cout<<"Nueva hora"<<endl;
cout<<hora<<" : "<<minuto<<" : "<<segundo<<endl;



    return 0;
}
