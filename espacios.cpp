#include <conio.h>
#include <iostream.h>
#include <string.h>

void concatenar_espacios ()
{
  char linea1[10] = "", linea2[10] = "";
  
  cout<<"Ingrese un texto. \n";
  cin>>linea1;  /*El "cin" solo lee hasta el primer espacio de la linea de texto. Por eso, cuando ingresamos, por ejemplo,
                "Punto Fijo", en linea1 solo quedara "Punto". */
                
  strcat(linea2, linea1); /* Esta funcion, pega al final de linea2 el contenido de linea1. Es decir:
                          linea2 estaba vacio, y ahora le agregamos "Punto", que es el contenido de linea1. */
                          
  cin.get(linea1, 15);    /* Esta funcion lee el resto de caracteres luego del espacio, incluyendo los propios espacios. 
                          Es decir, ahora linea1 contiene " Fijo". */
                          
  strcat(linea2, linea1); /* Volvemos a pegar el contenido de la linea1 (" Fijo") al final de la linea2 ("Punto"). De forma 
                          que ahora linea2 contiene "Punto Fijo" */
  
  cout<<linea1<<"\n"; // Cuando mostramos linea1, nos saldra el texto luego del primer espacio.
  cout<<linea2<<"\n"; // Cuando mostramos linea2, nos aparece el texto completo.
}

main () 
{
  concatenar_espacios();
  getch();
  return(0);
}
