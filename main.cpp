#include <iostream>
using namespace std;
// Potencia

double potencia (double base,double exponente){
    int multi;
    multi=1;
    for(int i=1;i<=exponente;i++)
    {
        multi=multi*base;
    }
    return multi;
}
// Factorial

double factorial (double valor){
    int recol, x;
    recol=1;
    for(int x=1;x<=valor;x++)
    {
        recol=recol*x;
    }

    return recol;
}
// Sumaserie
double sumaserie (double serie){
    double suma=0;
    suma= serie - (potencia(serie,3)/factorial(3))
          + (potencia(serie,5)/factorial(5))
          - (potencia(serie,7)/factorial(7));
    return suma;
}

//Función que recibe como parámetros el nombre de una persona y su edad,
// y devuelve un saludo, indicando además si es o no mayor de edad
string saludo(string nombre, int edad)
{
    string mensaje="Bienvenido " + nombre;
    if(edad>=18)
        mensaje= mensaje + ", Usted es mayor de edad";
    else
        mensaje= mensaje + ", Usted es mayor de edad";
    return mensaje;
}
//Una función recibe como parámentros el nombre de una person,
//el día y mes de nacimiento. La función debe devolver el nombre
//de la persona, indicando el signo del zodiaco al que pertenede
//Ejemplo. Hola Juan, tu signo del zodiaco es acuario
//Acuario (21 de enero-18 de febrero)
//Piscis (19 de febrero-20 de marzo)
//Aries (21 de marzo - 20 de abril)
//Tauro (21 de abril - 21 de mayo)
//Géminis (22 de mayo - 21 de junio)
//Cáncer (22 de junio-22 de julio)
//Leo (23 de julio-23 de agosto)
//Virgo (24 de agosto-23 de septiembre)
//Libra (24 de septiembre-23 de octubre)
//Escorpio (24 de octubre-22 de noviembre)
//Sagitario (23 de noviembre-21 de diciembre)
//Capricornio (22 de diciembre-20 de enero)

string zodiaco(string nombre, int mes, int dia)
{
    string mensaje="Hola " + nombre + ",";
    //Acuario (21 de enero-18 de febrero)
    if((mes==1 && dia>=21)|| (mes==2 && dia<=18))
    {
        mensaje = mensaje+" tu signo del zodiaco es Acuario";
    }
    else
    {
        //Piscis (19 de febrero-20 de marzo)
        if((mes==2 && dia>=19) || (mes==3 && dia<=20))
        {
            mensaje = mensaje+" tu signo del zodiaco es Piscis";
        }
        else
        {
            //Aries (21 de marzo - 20 de abril)
            if((mes==3 && dia>=21) || (mes==4 && dia<=20))
            {
                mensaje = mensaje+" tu signo del zodiaco es Aries";
            }
            else
            {
                //Tauro (21 de abril - 21 de mayo)
                if((mes==4 && dia>=21) || (mes==5 && dia<=21))
                {
                    mensaje = mensaje+" tu signo del zodiaco es Tauro";
                }
                else
                {
                    //Géminis (22 de mayo - 21 de junio)
                    if((mes==5 && dia>=22) || (mes==6 && dia<=21))
                    {
                        mensaje = mensaje+" tu signo del zodiaco es Geminis";
                    }
                    else
                    {
                        //Cáncer (22 de junio-22 de julio)
                        if((mes==6 && dia>=22) || (mes==7 && dia<=22))
                        {
                            mensaje = mensaje+" tu signo del zodiaco es Cancer";
                        }
                        else
                        {
                            //Leo (23 de julio-23 de agosto)
                            if((mes==7 && dia>=23) || (mes==8 && dia<=23))
                            {
                                mensaje = mensaje+" tu signo del zodiaco es Leo";
                            }
                            else
                            {
                                //Virgo (24 de agosto-23 de septiembre)
                                if((mes==8 && dia>=24) || (mes==9 && dia<=23))
                                {
                                    mensaje = mensaje+" tu signo del zodiaco es Virgo";
                                }
                                else
                                {
                                    //Libra (24 de septiembre-23 de octubre)
                                    if((mes==9 && dia>=24) || (mes==10 && dia<=23))
                                    {
                                        mensaje = mensaje+" tu signo del zodiaco es Libra";
                                    }
                                    else
                                    {
                                        //Escorpio (24 de octubre-22 de noviembre)
                                        if((mes==10 && dia>=24) || (mes==11 && dia<=22))
                                        {
                                            mensaje = mensaje+" tu signo del zodiaco es Escorpio";
                                        }
                                        else
                                        {
                                            //Sagitario (23 de noviembre-21 de diciembre)
                                            if((mes==11 && dia>=23) || (mes==12 && dia<=21))
                                            {
                                                mensaje = mensaje+" tu signo del zodiaco es Sagitario";
                                            }
                                            else
                                            {
                                                //Capricornio (22 de diciembre-20 de enero)
                                                if((mes==12 && dia>=22) || (mes==1 && dia<=20))
                                                {
                                                    mensaje = mensaje+" tu signo del zodiaco es Capricornio";
                                                }

                                            }
                                        }

                                    }
                                }
                            }
                        }
                    }

                }
            }
        }
    }

    return mensaje;
}
int main() {
    //Potencia
    int base, exponente, serie;
    cout << "Ingrese un numero de la base" << endl;
    cin>>base;
    cout<<"Ingrese un numero del exponente "<<endl;
    cin>>exponente;
    cout<<"La potencia del numero "<<base<< " es "<<potencia(base,exponente)<<endl;
    //Factorial
    int valor;
    cout << "Ingrese un numero" << endl;
    cin>> valor;
    cout<<"El factorial de "<<valor<<" es "<<factorial(valor)<<endl;
    //Sumaserie
    cout<<"ingrese el valor"<<endl;
    cin>>serie;
    cout<<endl<<"resultado: "<<sumaserie(serie)<<endl;
    // Mostrar saludo y edad
    string nombre;
    int edad;
    cout << "Ingrese su nombre" << endl;
    getline(cin,nombre);
    cout<<"Ingrese su edad"<<endl;
    cin>> edad;
    cout<<saludo(nombre,edad);
    // Mostrar saludo y el signo del zodiaco
    int dia,mes;
    cout << "Ingrese su nombre" << endl;
    getline(cin,nombre);
    cout<<"Ingrese su mes de nacimiento"<<endl;
    cin>>mes;
    cout<<"Ingrese su dia de nacimiento"<<endl;
    cin>>dia;
    cout<<zodiaco(nombre,mes,dia);
    return 0;
}
