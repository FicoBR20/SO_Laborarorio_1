//comentario sencillo
///comentario resaltado una sola linea
/*multiples
 * lineas
 */
/**multiples
 * lineas
 * resaltado
 */

/*
	autor
	e-mail
	fecha
	proposito
 */

/*
	imcabezas@ieee.org
	Descripción:
	La función main permite explicar los conceptos de:
    	* if-else
		* switch-case
		* for
		* do-while
		* while
		* operador incremento decremento
		* operador módulo
*/


// Directiva de compilacion
#include <iostream>

int main(){
   
    int pollito=34;   

	std::cout<<"int pollito=34;"<<std::endl; 
    if (pollito==33){
        std::cout<<"pollito vale 33"<<std::endl;   
        std::cout<<"Se ejecuta todo lo asociado a la condicion true"<<std::endl;   
    }
    else{
            std::cout<<"pollito NOOOO vale 33"<<std::endl;   
            std::cout<<"Se ejecuta todo lo asociado a la condicion false\n";
			std::cout<<"en caso de que exista un else"<<std::endl;   
    }


    switch(pollito){
        case 1234:
            std::cout<<"pollito vale 1234"<<std::endl;   
        	break;

        case 34:
            std::cout<<"pollito vale 34"<<std::endl;   
        	break;
       
        default:
            std::cout<<"default corresponde a cualquier otro valor"<<std::endl;   
        	break;       
    }
       
    std::cout<<"---------- for ---------"<<std::endl;   
    for (int idx=0; idx<=21; idx++){
        if (idx%2==0){
            std::cout<<idx<<std::endl;
        }
    }
   
    std::cout<<"---------- do while ---------"<<std::endl;       
    int idx=0;
    do{
        std::cout<<idx<<std::endl;
		//idx=idx+2;
        idx+=2; 
    }while(idx<21);
   
    std::cout<<"---------- while ---------"<<std::endl;       
    idx=21;
    while(idx>0){
        if (--idx%2==0){
            std::cout<<idx<<std::endl;
        }   
    }   

    std::cout<<"---------- while ---------"<<std::endl;   
    idx=0;
    while(true){
        if (idx%2==0){
			std::cout<<idx<<std::endl;
        }
		
        if (++idx==21){
            break;
        }		
    }   

       
    return 0;   
}