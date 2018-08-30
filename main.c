/* Este programa fue realizado como la tarea#3 el 30 de agosto de 2018,
* para la clase de fundamentos de programación.
*
* Su proposito es preguntarle al usuario el año y el mes
* para asi mostrarle cuantos dias tiene el mes en ese año.
*
* Fecha: 30 de agosto de 2018
* Autor: Eduardo Parga Vela
* Correo: A01411896@itesm.mx
*/
#include <stdio.h>

int main(void) {
    //Declaración de variables.
    signed int year;  //La variable year acepta números negativos.
    int month;

    //El usuario escribe el año y luego el mes.
    printf("What year is it?");
    scanf("%i",&year);
    printf("What month is it?");
    scanf("%i",&month);

    /*Dependiendo del valor del mes que escribio el usuario,
     * se mostrara un mensaje correspdiente al número de dias
     * que tiene el mes.
     */
    switch(month) {
        //Valores correspondientes a abril, junio, septiembre y noviembre.
        case 4:
        case 6:
        case 9:
        case 11:
        {
            printf("The month has 30 days.");
            break;
        }
        /*Valores correspondientes a enero, marzo, mayo, julio,
         * agosto, octubre y diciembre.
         */
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            printf("The month has 31 days.");
            break;
        }
        //Valor correspondiente a febrero.
        case 2:
        {
            //Para saber si es año bisiesto o no se determina si
            //el residuo de la division del año entre 4 es 0 y el residuo de la division
            //del año entre 100 es diferente de 0 o que el residuo de la division del año entre 400 es 0.
            if((year%4==0&&year%100!=0)||year%400==0)
            {
                printf("The month has 29 days.");
            } else{
                printf("The month has 28 days.");
            }
            break;
        }
        //Cualquier valor diferente de 1 a 12 mostrara este mensaje.
        default:printf("Invalid input.");
    }
    return 0;
}