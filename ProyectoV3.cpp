#include<iostream>
using namespace std;

void escapecoche(int, int);
void escape(int, int);
void escapeh(int,int);
//version 2//
int main(){
	char decision;
	int companeros=10,dinero=0;
	bool error=false;
	
	cout<<"EL ULTIMO GOLPE"<<endl;
	cout<<"Tu eres lider de un grupo de ladrones y estas en tus ultimos anos de ser un ladron buscas jubilarte y junto a tu grupo intentas buscar la mejor opcion de atraco"<<endl<<endl;
	cout<<"tu mano derecha Mariani Robini sugiere robar a gran escala e ir por el banco principal de el pais,mientras que gran parte del grupo prefiere ir a un banco mas pequeno y con menos riesgo, mientras tanto tu piensas en grande y quieres robarte un Bugatti valorado en 10 millones de dolares"<<endl<<endl;
	do{
	
	cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
	cout<<"dinero: "<<dinero<<endl<<endl;
	
	cout<<"digita tu respuesta y presiona enter"<<endl;
	
	cout<<"a) Hacerle caso a Robini e ir al banco del pais"<<endl;
	cout<<"b) Hacerle caso a el grupo e ir a un banco mas pequeno"<<endl;
	cout<<"c) Robar el coche exotico "<<endl;
	cout<<"d) Salir del juego "<<endl;
	
	cin>>decision; 
	
	switch(decision){

		case 'a':{
		   
			break;
		}
		case 'b':{
		
			
			
			break;
		}
		case 'c':{
			
			
		case 'd':{
			cout<<"Fin del juego";
			return 0;
			break;
		}
		default: {
			cout<<"caracter no valido porfavor intenta otra vez";
			error=true;
		}
		
	}
	}while(error==true);
	
	
return 0;	
}


					
		
