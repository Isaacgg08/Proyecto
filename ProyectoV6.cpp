#include<iostream>
using namespace std;

void escapecoche(int, int);
void escape(int, int);
void escapeh(int,int);

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
		
			do{
			cout<<"El equipo decidio ir por un banco mas pequeno,la estrategia es simple todos entran al banco a fuerza bruta aprovechando las debilidades de la seguirdad, como es poco botin no todos tienen que entrar a la bodega, por lo que propones que solo entres tu y Rubini, los demas tienen miedo de que los traicinonen por lo que se genera una discusion"<<endl;
			
			cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
			cout<<"dinero: "<<dinero<<endl<<endl;
		
			cout<<"digita tu respuesta y presiona enter"<<endl;
			
			cout<<"a) Entrar tu y Rubini a la bodega"<<endl;
			cout<<"b) Dividirse en dos "<<endl;
			cout<<"c) Entrar todos "<<endl;
			cout<<"d) Salir del juego"<<endl;
			cin>>decision; 
			
			switch(decision){
		
				case 'a':{
				do{
			
				cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
				cout<<"dinero: "<<dinero<<endl<<endl;
				cout<<"Solo Rubini y tu entran a la bodega ya adentro con el botin de 6 millones, Rubini te propone escapar con el dinero y no darle nada a los demas ";
				cout<<"digita tu respuesta y presiona enter"<<endl;
				
				cout<<"a)Escapar con Rubini "<<endl;
				cout<<"b)Escapar tu solo "<<endl;
				cout<<"c)No traicionar al equipo  "<<endl;
				cout<<"d) Salir del juego"<<endl;
				cin>>decision; 
				
				switch(decision){
			
					case 'a':{
						cout<<"Logran salir del banco, la paga para cada uno sera de 3 millones pero has perdido 8 companeros"<<endl;
						cout<<"DINERO + 3,000,000"<<endl;
						cout<<"COMPANEROS-8"<<endl;
						dinero=dinero+3000000;
						companeros=companeros-8;
						escape(companeros,dinero);
					}
					
					case 'b':{
						cout<<"Decidiste escapar tu solo, Rubini alerto a los demas y te terminaron matando"<<endl;
						cout<<"Mision fallida mas suerte para la proxima";
						break;
					}
					case 'c':{
						cout<<"No traicionas a nadie por lo que la paga sera pequena";
						escape(companeros,dinero);
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
						do{

						cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
						cout<<"dinero: "<<dinero<<endl<<endl;
						cout<<"Se han dividido en dos grupos, pero escuchas a la policia llegar";
						cout<<"los demas proponen escapar y dividir la paga solo entre ustedes";
						
						cout<<"a)Traicionar a los demas  "<<endl;
						cout<<"b)Ayudar a los que se quedaron afuera de la bodega "<<endl;
						cout<<"c)Fingir que te tienen de rehen y traicionar a todos  "<<endl;
						cout<<"d) Salir del juego"<<endl;
						cin>>decision; 
						
						switch(decision){
					
							case 'a':{
								cout<<"Deciden traicionar a los demas ahora tienen que escapar del banco";
								escape(companeros,dinero);
							}
							case 'b':{
								cout<<"Ayudas a los que estan afuera de la bodega y todos logran escapar";
								escape(companeros,dinero);
								break;
							}
							case 'c':{
								cout<<"Has traicionado a los demas ahora no tienes dinero y tus companeros estan presios, final malo";
								return 0;
								break;
							}
							case 'd':{
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
				case 'c':{
					cout<<"Al final escogieron entrar todos, el problema es que nadie cuidaba la entrada por lo que la policia los rodea"<<endl;
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
		case 'c':{
			
			do{
			
			cout<<"Te decidiste en robar el coche exotico por lo que se dirigen a una exposicion de coches en un hotel muy caro, esta muy bien cuidado mas que un banco por lo que tienen que ser sigilosos, juntos planean distintas estrategias y tu tendras que decidir cual tomar "<<endl;
			
			cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
			cout<<"dinero: "<<dinero<<endl<<endl;
			
			cout<<"digita tu respuesta y presiona enter"<<endl;
			
			cout<<"a)Esperar a la noche para apagar las luces y robarse el coche "<<endl;
			cout<<"b)Tomar como rehen a el dueno del coche y escapar "<<endl;
			cout<<"c)Compar el coche con dinero falso"<<endl;
			cout<<"d) Salir del juego"<<endl;
			cin>>decision; 
			
			switch(decision){
		
				case 'a':{
					
					do{

					cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
					cout<<"dinero: "<<dinero<<endl<<endl;
					cout<<"en la noche por alguna razon no hay guardias, todos no pueden caber en los coches por lo planean robar otro coche"<<endl;
					
				
					cout<<"a)Robar otro coche exlusivo"<<endl;
					cout<<"b)Robar una camioneta grande  "<<endl;
					cout<<"c)Robar motos para todos  "<<endl;
					cout<<"d) Salir del juego"<<endl;
					cin>>decision; 
					
					switch(decision){
				
						case 'a':{
							cout<<"Las ganancias aumentan en 3 millones";
							cout<<"DINERO+3000000";
							dinero=dinero+3000000;
							escapecoche(companeros,dinero);
							break;
						}
						case 'b':{
							cout<<"La camioneta resulto ser muy valiosa la suma aumenta en 10 millones";
							cout<<"DINERO+10000000";
							dinero=dinero+10000000;
							escapecoche(companeros,dinero);
							break;
						}
						case 'c':{
							cout<<"Escogieron las motos, pero resutlo ser muy peligroso ya que no tenian proteccion ni blindaje como los demas coches";
							cout<<"Mision fallida, mas suerte la proxima";
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
				case 'b':{
					
					do{

					cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
					cout<<"dinero: "<<dinero<<endl<<endl;
					cout<<"Deciden ser sigilosos y se preparan para la noche, y esperan a que el dueno del coche se encuentre solo, rapidamente lo tomas como rehen, todos escaparon ahora el rehen esta preocupado y les dice que tiene un escaner de rastreo por lo que la policia no tarda en capturarlos"<<endl;
					
					cout<<"a)Dejar al rehen"<<endl;
					cout<<"b)Llevarselo quitarle el escaner y pedir recompensa por el "<<endl;
					cout<<"c)Matar al rehen  "<<endl;
					cout<<"d) Salir del juego"<<endl;
					cin>>decision; 
					
					switch(decision){
				
						case 'a':{
							cout<<"Dejaron al rehen ahora la policia no tiene miedo de enfrentarlos y todos mueren"<<endl;
							cout<<"Mision fallida mas suerte para la proxima";
							return 0;
						}
						case 'b':{
							
							cout<<"Deciden escapar con el rehen";
							cout<<"piden una recompensa por lo que las ganancias aumentan 10 millones"<<endl;
							dinero=dinero+10000000;
							escapecoche(companeros,dinero);
							break;
						}
						case 'c':{
							cout<<"Mataron al rehen ahora estan en la lista de mas buscados del pais";
							escapecoche(companeros,dinero);
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
				case 'c':{
					cout<<"Es un coche muy caro, esa estrategia no funciono, se dieron cuenta que era dinero falso y todos terminaron en la carcel"<<endl;
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
	
	
return 0;	
}

void escapecoche(int companeros,int dinero){
	bool error= false;
	char decision;
	do{

	cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
	cout<<"dinero: "<<dinero<<endl<<endl;
	cout<<"es hora de escapar en los coches robados tienen que tener mucho cuidado de no chocar"<<endl;
	cout<<"hay muchas patrullas persiguiendolos que hacen?"<<endl;
	
	cout<<"a)Desviarse con un volantazo"<<endl;
	cout<<"b)Tirarse por un barranco"<<endl;
	cout<<"c)Provocar un choque   "<<endl;
	cout<<"d) Salir del juego"<<endl;
	cin>>decision; 
	
	switch(decision){

		case 'a':{
				do{

				cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
				cout<<"dinero: "<<dinero<<endl<<endl;
				cout<<"te desviaste exitosamente, pero llegas a un puente cerrado si te tiras del puente, caeras a el mar que decides hacer";
				
				cout<<"a)Lanzarte hacia el mar "<<endl;
				cout<<"b)Frenar "<<endl;
				cout<<"c)No hacer nada  "<<endl;
				cout<<"d) Salir del juego"<<endl;
				cin>>decision; 
				
				switch(decision){
			
					case 'a':{
						cout<<"Felicidaste te tiraste al puente y por coincidencia un barco estaba pasando, escapaste exitosamente"<<endl;
						cout<<"dinero recaudado: "<<dinero<<endl;
						cout<<"dinero para ti: "<<dinero/companeros<<endl;
						cout<<"fin del juego";
						exit(0);
						break;
					}
					case 'b':{
						cout<<"Frenas y la policia te atrapa"<<endl;
						cout<<"mas suerte para la proxima";
						exit(0);
						break;
					}
					case 'c':{
						cout<<"Te quedaste pensando que hacer,perdiste el control del coche y te capturaron";
						cout<<"mas suerte para la proxima";
						exit(0);
						break;
					}
					case 'd':{
						cout<<"Fin del juego";
						break;
					}
					default: {
						cout<<"caracter no valido porfavor intenta otra vez";
						error=true;
					}
					
				}
				}while(error==true);
		}
		case 'b':{
			cout<<"Nadie sobrevivio a la caida"<<endl;
			cout<<"Mision fallida, mas suerte la proxima";
			exit(0);
			break;
		}
		case 'c':{
			do{

			cout<<endl<<"Numero de companeros con vida: "<<companeros<<endl;
			cout<<"dinero: "<<dinero<<endl<<endl;
			cout<<"Por fin escapaste de la policia que es lo primero que haces"<<endl;
			
			cout<<"a)Cambiar las placas del coche "<<endl;
			cout<<"b)Disfrutar de tu dinero "<<endl;
			cout<<"c)Irte a otro pais  "<<endl;
			cout<<"d) Salir del juego"<<endl;
			cin>>decision; 
			
			switch(decision){
		
				case 'a':{
					cout<<"Final bueno"<<endl;
					cout<<"Felicidades, pudiste disfrutar tu dinero y permanecer desapecibido, fin del juego ";
					cout<<"dinero recaudado: "<<dinero;
					cout<<"dinero para ti : "<<dinero/companeros;
					exit(0);
				}
				case 'b':{
					cout<<"Es muy temprano para celebrar, la policia te investigo y termino encontrando tu casa, fin del juego";
					exit(0);
					break;
				}
				case 'c':{
					cout<<"Final bueno"<<endl;
					cout<<"Decides irte del pais con tu familia y viven una vida feliz con mucho dinero, fin del juego";
					exit(0);
					break;
				}
				case 'd':{
					cout<<"Fin del juego";
					exit(0);
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
			exit(0);
		}
		default: {
			cout<<"caracter no valido porfavor intenta otra vez";
			error=true;
		}
		
	}
	}while(error==true);
	
	
	
}



