//Práctica Nº3:  de A5/1
//Autor: Adán Rafael López Lecuona

#include <iostream>                                         
#include <cmath>                                            
#include <string.h>                                         

using namespace std;



bool mayoria(bool a, bool b, bool c)
{
     return (a * b) ^ (a * c) ^ (b * c); //----> nos da el bit mayoria
}


bool cifrado(bool R1[],bool R2[],bool R3[])
{
     bool z = R1[18] ^ R2[21] ^ R3[22]; //-----> nos devuelve el bit que sale en z
     bool f = mayoria(R1[8], R2[10], R3[10]); //------> realizamos la llamada la función mayoria
     
     if (R1[8] == f) //---> si R1[8] cumple con la condicion del bit mayoria
     {
               bool x = R1[18] ^ R1[17] ^ R1[16] ^ R1[13]; //---> realizamos la operacion xor para introducir dicho bit en R1[0]
               for (int i=18; i>0; i--)
                   R1[i] = R1[i-1];  //----> desplazamos para sustituir el primer valor
               R1[0] = x; //--> sustitución del valor
     }
     
     if (R2[10] == f)
     {
               bool x = R2[21] ^ R2[20];//---> realizamos la operacion xor para introducir dicho bit en R2[0]
               for (int i=21; i>0; i--)
                   R2[i] = R2[i-1]; //----> desplazamos para sustituir el primer valor
               R2[0] = x;//--> sustitución del valor
     }
     
     if (R3[10] == f)
     {
               bool x = R3[22] ^ R3[21] ^ R3[20] ^ R3[7];//---> realizamos la operacion xor para introducir dicho bit en R3[0]
               for (int i=22; i>0; i--)
                   R3[i] = R3[i-1]; //----> desplazamos para sustituir el primer valor
               R3[0] = x;//--> sustitución del valor
     }
     
     return z; //---> retornamos el valor resultante de la operación xor de los últimos valores de los tres registros 
}



void mostrar(bool R1[],bool R2[],bool R3[])
{
     cout<<"R1 = [";
     for (int x=18; x>=0; x--)
     {
        cout<<R1[x]; //----> mostramos de último bit al primero del primer registro
        if (x != 0)
           cout<<", ";
     }
     cout<<"]"<<endl;
     
     cout<<"R2 = [";
     for (int y=21; y>=0; y--)
     {
         cout<<R2[y];//----> mostramos de último bit al primero del segundo registro
         if (y != 0)
           cout<<", ";
     }
     cout<<"]"<<endl;
     
     cout<<"R3 = [";
     for (int z=22; z>=0; z--)
     {
        cout<<R3[z];//----> mostramos de último bit al primero deltercer registro
        if (z != 0)
           cout<<", ";
     }
     cout<<"]"<<endl;
     
     cout<<"F("<<R1[8]<<", "<<R2[10]<<", "<<R3[10]<<") = "<<mayoria(R1[8], R2[10], R3[10])<<endl;
     
     cout<<"Z(t) = "<<cifrado(R1,R2,R3)<<endl;
     
     cout<<endl;
}
     
                  

int main()
{
    int num = 0;
    int sel;
    bool R1 [19] = {1,0,0,0,1,0,1,1,0,0,0,1,0,0,0,1,0,0,1};
    bool R2 [22] = {0,1,0,1,1,0,0,1,0,0,0,1,1,1,1,0,0,1,1,0,1,0};
    bool R3 [23] = {1,1,1,1,0,0,0,0,1,1,1,1,0,1,1,0,0,1,1,1,1,0,1};
    
    system("color 3") ;
    cout<<"\n\n\n\n";
    cout<<"\t         ---------BIENVENIDO AL GENERADOR A5/1--------\n\n\n";
    cout<<"\n                * * * * * * * *   PRESIONA START  * * * * * * * *\n" ;
    cout<<"\n\n\n\n";
    system ("PAUSE");
    system("clS");
    system("color 3");
            cout<<"\n\n\n\n";
            cout<<"\t *************************************************************"<<endl;
            cout<<"\t ***********************> GENERADOR A5/1 <***********************"<<endl;
            cout<<"\t *************************************************************"<<endl;
            cout << endl;
            cout<<" 1) Realizar cifrado con valores introducidos por usted. Introduzca '1'. "<<endl;
            cout<<" 2) Realizar cifrado con valores por defecto. Introduzca '2'. "<<endl;
            cout<<"Introduzca su opción a elegir: ";
            cin>>sel;
            system("PAUSE");
            system("cls");
            
    
    if ( sel != 2){
    for (int i=0; i<19; i++){       
            system("color 3");
            cout<<"\n\n\n\n";
            cout<<"\t *************************************************************"<<endl;
            cout<<"\t ***********************> GENERADOR A5/1 <***********************"<<endl;
            cout<<"\t *************************************************************"<<endl;
            cout << endl;
            cout <<"Introduccion de valores en el registro R1"<< endl;
            cout<<"Rellene R1 =["<<i + 1<<"]: ";
            cin>>R1[i];
            system("cls");
    }
      for (int j=0; j<22; j++)
    {       system("color 3");
            cout<<"\n\n\n\n";
            cout<<"\t *************************************************************"<<endl;
            cout<<"\t ***********************> GENERADOR A5/1 <***********************"<<endl;
            cout<<"\t *************************************************************"<<endl;
            cout << endl;
            cout <<"Introduccion de valores en el registro R2"<< endl;
            cout<<"Rellene R2 =["<<j + 1<<"]: ";
            cin>>R2[j];
            system("cls");
    }
      for (int z=0; z<23; z++)
    {       system("color 3");
            cout<<"\n\n\n\n";
            cout<<"\t *************************************************************"<<endl;
            cout<<"\t ***********************> CIFRADO A5/1 <***********************"<<endl;
            cout<<"\t *************************************************************"<<endl;
            cout << endl;
            cout <<"Introduccion de valores en el registro R3"<< endl;
            cout<<"Rellene R3 =["<<z + 1<<"]: ";
            cin>>R3[z];
            system("cls");
    }
    
    system("PAUSE");
}
    system("color 3");
    cout<<"\n\n\n\n";
    cout<<"\t *************************************************************"<<endl;
    cout<<"\t ***********************> GENERADOR A5/1 <***********************"<<endl;
    cout<<"\t *************************************************************"<<endl;
    cout << endl;
    
    
    cout<<"Introduzca el numero de bits que desee generar de secuencia cifrante:  ";
    cin>>num;
    cout<<endl;
    
    for (int i=0; i<num; i++)
    {
        cout<<"Bit de Secuencia Cifrante "<<i + 1<<": "<<endl;
        cout<<endl;
        mostrar(R1,R2,R3);
    }
        
    cout<<endl;    
    system("PAUSE");   
    return 0;
}
    
