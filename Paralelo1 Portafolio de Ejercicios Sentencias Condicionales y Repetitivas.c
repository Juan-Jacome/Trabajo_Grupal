/******************************************************************************
Danny Huacon
Juan Jacome
Anthony Sotelo

1. En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de acuerdo con el monto de su compra. El criterio para establecer el descuento se muestra abajo. Construye el correspondiente programa en C que, al recibir como dato el monto de la compra del cliente, obtenga el precio real que debe pagar luego de aplicar el descuento correspondiente.

Compra < $800 ⇒ Descuento 0%.
$800  Compra  $1500 ⇒ Descuento 10%.
$1500 < Compra  $5000 ⇒ Descuento 15%.
$5000 < Compra ⇒ Descuento 20%.

2. Construye el respectivo programa en C que, al recibir como datos tres variables reales que representan los lados de un probable triángulo, determine si esos lados corresponden a un triángulo. En caso de serlo, además de escribir el área correspondiente compruebe si el mismo es equilátero, isósceles o escaleno.
Datos: L1, L2 y L3 (variables de tipo real que representan los posibles lados de un triángulo).
Consideraciones:
• Si se cumple la propiedad de que la suma de los dos lados menores es menor a la del lado restante, es un triángulo.
• El área se obtiene aplicando la siguiente fórmula:



3. Escribe un programa en C que obtenga y escriba tanto los términos como la suma de los términos de la siguiente serie: (SENTENCIA WHILE)

2, 7, 10, 15, 18, 23, . . ., 2500

Donde: I es una variable de tipo entero que se utiliza para incrementar el valor de los términos de la serie.
SSE es una variable de tipo entero que se utiliza para sumar los términos.
CAM es una variable de tipo entero que se utiliza para distinguir el valor a sumar.

4. Los organizadores de un acto electoral solicitaron realizar un programa de cómputo para manejar el conteo de los votos. En la elección hay cinco candidatos, los cuales se representan con los valores comprendidos de 1 a 5. Construye un programa en C que permita obtener el número de votos de cada  candidato y el porcentaje que obtuvo respecto al total de los votantes. El usuario ingresa los votos de manera desorganizada, tal y como se obtienen en una elección, el final de datos se representa por un cero. Observa como ejemplo la siguiente lista: (SENTENCIA DO-WHILE)

2 5 5 4 3 4 4 5 1 2 4 3 1 2 4 5 0

Donde: 1 representa un voto para el candidato 1, 3 un voto para el candidato 3, y así sucesivamente.
Datos: VOT1, VOT2,..., 0 (variable de tipo entero que representa el voto a un candidato).

5. A la clase de Estructuras de Datos del profesor López asiste un grupo numeroso de alumnos. Construye un programa en C que  imprima la matrícula y el promedio de las cinco calificaciones de cada alumno. Además, debe obtener la matrícula y el promedio tanto del mejor como del peor alumno. (SENTENCIA FOR)

Datos: MAT1, CAL1,1, CAL1,2, CAL1,3, CAL1,4, CAL1,5
MAT2, CAL2,1, CAL2,2, CAL2,3, CAL2,4, CAL2,5
. . .
0

Donde: MATi es una variable de tipo entero que representa la matrícula del alumno i. El fin de datos está dado por 0.
CALi,j es una variable de tipo real que representa la calificación j del alumno i.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int opcion,i=1,sse=2,cam=0,vot,vot1=0,vot2=0,vot3=0,vot4=0,vot5=0,sumavot=0,cal,cont,rep,calalta=0,calbaja=10,sum=0;
    float vcompra,descuento,vdescuento=0,vreal=0,l1,l2,l3,semip=0,area=0;
    char alumno[10];
    printf("Menu principal\n1.Ejercicio1\n2.Ejercicio2\n3.Ejercicio3\n4.Ejercicio4\n5.Ejercicio5\n");
    printf("Escoja la opcion:");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
        printf("Tienda\nIngresa Valor de compra:\t");
        scanf("%f",&vcompra);
        if(vcompra<=800)
        descuento=0;
        else if(vcompra>5000)
            descuento=0.20;
            else if(vcompra<=5000 && vcompra>1500)
                descuento=0.15;
                else if(vcompra<=1500 && vcompra>800)
                descuento=0.10;
                vdescuento= vcompra*descuento;
                vreal=vcompra-vdescuento;
                printf("Valor de compra sin descuento:\t\t%.2f\n",vcompra);
                printf("Decuento\t\t\t\t%.2f\n",descuento*100);
                printf("Valor de descuento\t\t\t%.2f\n",vdescuento);
                printf("Valor a pagar \t\t\t\t%.2f\n",vreal);
        break;
        case 2:
            printf("Ingrese los lados del triangulo\n");
            printf("lado 1:\t");
            scanf("%f",&l1);
            printf("lado 2:\t");
            scanf("%f",&l2);
            printf("lado 3:\t");
            scanf("%f",&l3);
            if(l1<(l2+l3)&&l2<(l1+l3)&&l3<(l1+l2)){
                if(l1==l2&&l1==l3)
                    printf("Es un triangulo Equilatero\n");
                    else if (l1!=l2&&l1!=l3&&l2!=l3)
                    printf("Es un triangulo Escaleno\n");
                    else
                    printf("Es un triangulo Isoseles\n");
                semip=(l1+l2+l3)/2;
                area=sqrt(semip*(semip-l1)*(semip-l2)*(semip-l3));
            }
            else
            printf("Los datos no son de un triangulo");
        break;
        case 3:
            printf("orden de serie  \t # de serie\n");
            while(sse<2500){
                printf("%d\t\t%d\n",i,sse);
                cam=i%2;
                if(cam==1)
                    {sse=sse+5;}
                else
                    {sse=sse+3;}
                i++;
            }
        break;
        case 4:
            do{
                printf("ingrese el numero del candidato:\t");
                scanf("%d",&vot);
                if(vot>0&&vot<6)
                {
                    switch(vot){
                        case 1: vot1++;
                        break;
                        case 2: vot2++;
                        break;
                        case 3: vot3++;
                        break;
                        case 4: vot4++;
                        break;
                        case 5: vot5++;
                        break;
                    }
                    printf("gracias por votar\n");
                    sumavot++;                                       
                }
                    else if(vot==0){
                    printf("total de votantes:\t %d\n",sumavot);
                    printf("El candidato 1 obtuvo %d\tvotos con un %.2f de participacion \n",vot1,(float)vot1/(float)sumavot);
                    printf("El candidato 2 obtuvo %d\tvotos con un %.2f de participacion \n",vot2,(float)vot2/(float)sumavot);
                    printf("El candidato 3 obtuvo %d\tvotos con un %.2f de participacion \n",vot3,(float)vot3/(float)sumavot);
                    printf("El candidato 4 obtuvo %d\tvotos con un %.2f de participacion \n",vot4,(float)vot4/(float)sumavot);
                    printf("El candidato 5 obtuvo %d\tvotos con un %.2f de participacion \n",vot5,(float)vot5/(float)sumavot);
                    }
                    else
                   printf("voto incorrecto\n");
                }while(vot!=0);
        break;
        case 5:
            do{
                printf("ingrese nombre del alumno \t");
                scanf("%s",&alumno);
                for(cont=1;cont<=5;cont++)
                printf("ingrese nota %d del estudiante:\t",cont);
                scanf("%d",&cal);
                if(cal>calalta)
                    calalta=cal;
                if(cal<calbaja)
                    calbaja=cal;
                sum=sum+cal;
                printf("el alumno %s tiene:\n",alumno);
                printf("mejor nota: %d\n",calalta);
                printf("peor nota: %d\n",calbaja);
                printf("promedio: %.2f\n",(float)sum/5);
                sum=0;
                calalta=0;
                calbaja=10;
                printf("presione una tecla para promediar con otro alumno,o presione 0\n");
                scanf("%d",&rep);
            }while(rep!=0);
        break;
        default:
            printf("opcion invalida");
    }
}

