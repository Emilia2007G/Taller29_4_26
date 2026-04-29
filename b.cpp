#include <iostream>
#include <string>
using namespace std;

class Playlist{
    private:
    string nombre;
    int duraciones[10];
    int numCanciones=0;
    public: 
    Playlist(string nom){
        nombre=nom;
        numCanciones=0;
    }
    int duracionTotal(){
        int suma = 0;
             for (int i = 0; i < numCanciones ; i ++) {
                 suma = suma + duraciones [ i ];
                }
                 return suma ;
                        }

    // Agrega una cancion
 void agregar ( int segundos ) {
 if ( numCanciones < 10) {
 // TODO 1: Guardar segundos en duraciones [ numCanciones ]
            duraciones[numCanciones] = segundos;
            
 // TODO 2: Incrementar numCanciones en 1
			numCanciones++;
			
 cout << " Cancion agregada (" << segundos << " seg)" << endl ;
 } else {
 cout << " Playlist llena !" << endl ;
 }
 }
 // Reproduce la playlist
 void reproducir (int & minutosEscuchados ) {
 int minutos = duracionTotal () / 60;
 // TODO 3: Sumar minutos a minutosEscuchados
			minutosEscuchados+=minutosEscuchados;
 cout << " Reproduciendo ... +" << minutos << " minutos " << endl ;
 }

 // Muestra info
 void mostrar () {
 cout << " === PLAYLIST === " << endl ;
 // TODO 4: Imprimir " Nombre : " seguido de nombre
 		cout<<"Nombre: "<<nombre<<endl;
 // TODO 5: Imprimir " Canciones : " seguido de numCanciones
 		cout<<"Canciones: "<<numCanciones<<endl;
 // TODO 6: Imprimir " Duracion total : " seguido de duracionTotal () y " seg"
		cout<<"Duracion total: "<<duracionTotal()<<"seg"<<endl;
		
 cout << " Detalle :" << endl ;
 for (int i = 0; i < numCanciones ; i ++) {
 cout << " Cancion " << ( i +1) << ": " << duraciones [i] << " seg " << endl ;
 }
 }
 // Retorna puntero a numCanciones
 int * getNumCancionesPtr () {
 // TODO 7: Escribir return & numCanciones ;
	return &numCanciones;
	
 }};
 // FUNCION EXTERNA CON PUNTERO
 void resetear ( int * ptrCanciones ) {
 // TODO 8: Poner * ptrCanciones en 0
  *ptrCanciones = 0;
 cout << " Playlist reseteada " << endl ;
 }
 int main(){
 	int minutosEscuchados = 0;

 string nombre ;
 cout << " Nombre de tu playlist : ";
 cin >> nombre ;

 Playlist miPlaylist ( nombre ) ;

 int opcion ;
 int duracion ;
 while ( true ) {
 cout << "\n === PLAYLIST MANAGER === " << endl ;
cout << "1. Agregar cancion " << endl ;
 cout << "2. Reproducir playlist " << endl ;
 cout << "3. Ver info " << endl ;
 cout << "4. Resetear playlist " << endl ;
 cout << "5. Salir " << endl ;
 cout << " Opcion : ";
 cin >> opcion ;

 if ( opcion == 1) {
 cout << " Duracion en segundos : ";
 // TODO 9: Leer duracion con cin
cin >> duracion;
 miPlaylist . agregar ( duracion ) ;
 } else if ( opcion == 2) {
 miPlaylist . reproducir ( minutosEscuchados );
 } else if ( opcion == 3) {
 miPlaylist . mostrar () ;
 // TODO 10: Imprimir " Minutos escuchados : " seguido de minutosEscuchados
cout << "Minutos escuchados: " << minutosEscuchados << endl;

 } else if ( opcion == 4) {
 resetear ( miPlaylist . getNumCancionesPtr () );
 } else if ( opcion == 5) {
 break ;
 }
 }


 cout << " Hasta luego !" << endl ;
 return 0;
 }
 

