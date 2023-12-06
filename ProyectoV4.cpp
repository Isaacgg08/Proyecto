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
		   
			do{
			cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
			cout<<"dinero: "<<dinero<<endl<<endl;
	
			cout<<"Has escogido confiar en tu mano derecha Robini y tu piensan hacer un golpe grande, es hora de planear la estrategia, los miembros del equipo te proponen distintas estrategiaas"<<endl;
			cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
			cout<<"dinero: "<<dinero<<endl<<endl;
			
			cout<<"digita tu respuesta y presiona enter"<<endl;
			
			cout<<"a)Usar un helicoptero para entrar por el techo "<<endl;
			cout<<"b)Entrar por la puerta principal a fuerza bruta "<<endl;
			cout<<"c)Hacer una distraccion en la puerta principal para entrar por la puerta trasera"<<endl;
			cout<<"d) Salir del juego"<<endl;
			cin>>decision; 
			
			switch(decision){
		
				case 'a':{
					do{
					cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
					cout<<"dinero: "<<dinero<<endl<<endl;

					cout<<"Deciden rentar el helicoptero por lo que ahora tienen una deuda que pagar,todos entran discretamente evitando los guardias y los enfrentamientos, hasta que llegan a una pequena bodega cuidada por 7 guardias, les parece curioso y algunes discuten sobre la posibilidad de que en la bodega haya una gran cantidad de dinero"<<endl;
					cout<<"COMPANEROS-1"<<endl;
					cout<<"DINERO - 100"<<endl;
					companeros=companeros-1;
					dinero=dinero-100;
				
					cout<<"digita tu respuesta y presiona enter"<<endl;
					
					cout<<"a)No entrar a la bodega "<<endl;
					cout<<"b)Entrar a la bodega "<<endl;
					cout<<"c) Dividirse en dos grupos "<<endl;
					cout<<"d) Salir del juego"<<endl;
					cin>>decision; 
					
					switch(decision){
				
						case 'a':{
							cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
							cout<<"dinero: "<<dinero<<endl<<endl;
							cout<<"Deciden no entrar a la bodega y van a la bodega principal, pierdes 6 miembros pero ahora tienes 8 millones de dolares."<<endl;
							cout<<"MIEMBROS -6"<<endl;
							companeros=companeros-6;
							cout<<"DINERO + 8,000,000";
							dinero=dinero+8000000;
							escapeh(companeros,dinero);
							break;
						}
						case 'b':{
							cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
							cout<<"dinero: "<<dinero<<endl<<endl;
							cout<<"toman el riesgo de entrar a la bodega secreta se enfrentan a los guardias, pierdes 2 miembros pero encontraste una bolsa con diamantes,ahora tienes 15 millones de dolares."<<endl;
							cout<<"MIEMBROS -2"<<endl;
							cout<<"DINERO+ 15,000,000.";
							companeros=companeros-2;
							dinero=dinero+15000000;
							escapeh(companeros,dinero);
							break;
						}
						case 'c':{
							cout<<"Se dividieron en dos grupos, lastimosamente en las dos bodegas habia suficientes guardias para capturarlos a todos"<<endl;
	
							cout<<"Mision fallida mas suerte para la proxima";
							break;
						}
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
					break;
				}
				case 'b':{
					cout<<"Han decidido entrar por la puerta principal, ha sido una masacre y solo dos de ustedes sobrevivieron";
					cout<<"Mision fallida mas suerte para la proxima";
					return 0;
					break;
				}
				case 'c':{
					
						do{
						cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
						cout<<"dinero: "<<dinero<<endl<<endl;
					
						cout<<"Tres de ustedes se ofrecieron para causar un alboroto afuera lo que hace que los guardias de la puerta trasera se dirigan a la puerta principal" ;
						cout<<"COMPANEROS-3";
					
						companeros=companeros-3;
						
						cout<<"Al entrar activan una alarma por lo que su tecnico les dice que solo tienen 10 minutos antes de que la policia llegue"<<endl;
					
						cout<<"digita tu respuesta y presiona enter"<<endl;
						
						cout<<"a)Robar todo lo que puedan en 9 minutos "<<endl;
						cout<<"b)Solo usar 5 minutos para robar y 5 para escapar "<<endl;
						cout<<"c)Esperar a que acaben los 10 minutos "<<endl;
						cout<<"d) Salir del juego"<<endl;
						cin>>decision; 
						
						switch(decision){
					
							case 'a':{
								cout<<"Consiguen robar 7 millones, pero cuando intentan escapar la policia ya lo estaba esperando y 2 de ustedes mueren"<<endl;
								cout<<"DINERO + 7,000,000."<<endl;
								cout<<"COMPANEROS-2"<<endl;
								companeros=companeros-2;
								escape(companeros,dinero);
								
								break;
							}
							case 'b':{
								cout<<"Usan la mitad de el tiempo para tomar el dinero por lo que consiguen 4 millones, y pudieron salir del banco todos"<<endl;
								cout<<"DINERO+ 4,000,000";
								escape(companeros,dinero);
								break;
							}
							case 'c':{
								cout<<"Deciden usar todo el tiempo que tienen consiguen 10 millones pero a la salida ya habia suficientes policias para capturarlos a todos"<<endl;
								cout<<"Mision fallida mas suerte para la proxima";
								return 0;
								break;
							}
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
					break;
				}
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
