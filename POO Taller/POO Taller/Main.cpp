#include <iostream>

#pragma region Clase 1 Funciones

#pragma region Clase 1 Ejercicio Pagina 16
/*
    void Working(int hour)
    {
        if (hour >= 9 && hour <= 16)
        {
            std::cout << "Horario de trabajo";
        }
        else
        {
            std::cout << "No es horario de trabajo";
        }
    }
*/
#pragma endregion

#pragma region Clase 1 Ejercicio Pagina 18
/*
    void ParImpar(int n)
    {
        if (n % 2 == 0)
        {
            std::cout << "Par" << std::endl;
        }
        else
        {
            std::cout << "Impar" << std::endl;
        }
    }
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 20  
/*
    void MaxBet3(int n1, int n2, int n3)
    {
        if (n1 == n2 && n2 == n3)
        {
            std::cout << "Los numeros son iguales :/ ";
        }
        else if (n1 > n2)
        {
            if (n1 > n3)
            {
                std::cout << n1 << " es el mayor de los 3 ";
            }
            else
            {
                std::cout << n3 << " es el mayor de los 3 ";
            }
        }
        else
        {
            if (n2 > n3)
            {
                std::cout << n2 << " es el mayor de los 3 ";
            }
            else
            {
                std::cout << n3 << " es el mayor de los 3 ";
            }
        }
    }
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 21
/*
    void CalculateAverage(int Avg)
    {
        if (Avg >= 60)
        {
            std::cout << "Perfecto tu calificacion es de: " << Avg;
        }
        else if (Avg >= 35 && Avg < 60)
        {
            std::cout << "Bien Logrado tu calificacion es de: " << Avg;
        }
        else if (Avg < 35)
        {
            std::cout << "Muy Mal tu calificacion es de: " << Avg;
        }
        else
        {
            std::cout << "esto no te deberia salir";
        }
    }
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 22
/*
    void CalculateFuerza(int F)
    {
        if(F >= 1000)
        {
            std::cout << "Esta muy fuerte";
        }
        else if(F < 800 && F >= 125)
        {
            std::cout << "Es normal de fuerza";
        }
        else if(F < 35)
        {
            std::cout << "Es debil";
        }
        else
        {
            std::cout << "Lamentablemente, debo informarte que no se pudo calcular la fuerza";
        }
    }  
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 23
/*
    void Discount(int amount) 
    {
        float disAmount = 0;  
        float finalAmount = amount;  
        bool disValueCalculated;
        bool disDone;

        if (amount > 5000) 
        {
            disAmount = 0.50 * amount; 
            disValueCalculated = true;

            if (disAmount > 0 && disValueCalculated) 
            {  
                std::cout << "El descuento es: " << disAmount << std::endl;               
                finalAmount -= disAmount;
                bool disDone = true;

                if(disDone)
                {
                    std::cout << "El total a pagar es: " << finalAmount;
                }
                else
                {
                    std::cout << "No se pudo calcular la cantidad total a pagar";
                }
            }
            else
            {
                std::cout << "No se pudo calcular la cantidad de Descuento a ejercer";
            }
        }
        else if (amount >= 2000 && amount <= 5000)
        {
            disAmount = 0.25 * amount;
            disValueCalculated = true;

            if (disAmount > 0 && disValueCalculated)
            {
                std::cout << "El descuento es: " << disAmount << std::endl;
                finalAmount -= disAmount;
                bool disDone = true;

                if (disDone)
                {
                    std::cout << "El total a pagar es: " << finalAmount;
                }
                else
                {
                    std::cout << "No se pudo calcular la cantidad total a pagar";
                }
            }
            else
            {
                std::cout << "No se pudo calcular la cantidad de Descuento a ejercer";
            }
        }
        else if (amount >= 200 && amount < 2000)
        {
            disAmount = 0.10 * amount;
            disValueCalculated = true;

            if (disAmount > 0 && disValueCalculated)
            {
                std::cout << "El descuento es: " << disAmount << std::endl;
                finalAmount -= disAmount;
                bool disDone = true;

                if (disDone)
                {
                    std::cout << "El total a pagar es: " << finalAmount;
                }
                else
                {
                    std::cout << "No se pudo calcular la cantidad total a pagar";
                }
            }
            else
            {
                std::cout << "No se pudo calcular la cantidad de Descuento a ejercer";
            }
        }
        else {
            disAmount = 0.0 * amount;
            disValueCalculated = true;

            if (disAmount > 0 && disValueCalculated)
            {
                std::cout << "No hay descuento " << std::endl;
                finalAmount -= disAmount;
                bool disDone = true;

                if (disDone)
                {
                    std::cout << "El total a pagar es: " << finalAmount;
                }
                else
                {
                    std::cout << "No se pudo calcular la cantidad total a pagar";
                }
            }
            else
            {
                std::cout << "No se pudo calcular la cantidad de Descuento a ejercer";
            }
        } 
    }
*/
#pragma endregion

#pragma endregion

int main()
{

#pragma region Clase 1 Main

#pragma region Clase 1 Ejercicio Pagina 16
/*
    int hour;

    std::cout << "Ingresa la hora: ";
    std::cin >> hour;
    Working(hour);
*/
#pragma endregion

#pragma region Clase 1 Ejercicio Pagina 17
/*
    int age;

    std::cout << "Ingresa tu edad: ";
    std::cin >> age;

    if (age > 20 && age < 40)
    {
        std::cout << "Es una personaje joven" << std::endl;
    }
    else
    {
        std::cout << "No es una persona Joven" << std::endl;
    }
*/
#pragma endregion

#pragma region Clase 1 Ejercicio Pagina 18
/*
    int n;

    std::cout << "Ingresa el numero impar o par: ";
    std::cin >> n;
    ParImpar(n);
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 20
/*
    int n1;
    int n2;
    int n3;

    std::cout << "Elige el primer numero: ";
    std::cin >> n1;

    std::cout << "Elige el segundo numero: ";
    std::cin >> n2;

    std::cout << "Elige el tercer numero: ";
    std::cin >> n3;

    MaxBet3(n1, n2, n3);
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 21
/*
    int m1;
    int m2;
    int m3;

    std::cout << "Calificacion de la Primer Materia: ";
    std::cin >> m1;

    std::cout << "Calificacion de la Segunda Materia: ";
    std::cin >> m2;

    std::cout << "Calificacion de la Tercera Materia : ";
    std::cin >> m3;

    int Avg = (m1 + m2 + m3) / 3;

    CalculateAverage(Avg);
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 22
/*
    int F; 
    std::cout << "Introduce el valor de la fuerza que buscas calcular: ";
    std::cin >> F;

    CalculateFuerza(F);
*/
#pragma endregion

#pragma region Clase 1 Tarea Pagina 23
/*
    int Amount;

    std::cout << "Cuanto pagaras? Me parece que tenemos algunos descuentos: ";
    std::cin >> Amount;

    Discount(Amount);
*/
#pragma endregion

#pragma endregion

#pragma region Clase 2 Main
#pragma region Clase 2 Ejercicio Pagina 28
/*
    int menu;
    int area;

    std::cout << "Elija una de las siguientes opciones: " << std::endl;
    std::cout << "1 = Area de un cuadrado" << std::endl;
    std::cout << "2 = Area de un circulo" << std::endl;
    std::cout << "3 = Area de un triangulo" << std::endl;

    std::cin >> menu;

    switch (menu) 
    {
    case 1: 
    { 
        int lado;
        std::cout << "Ingresa el valor de uno de los lado del cuadrado: ";
        std::cin >> lado;
        area = lado * lado;
        std::cout << "El área del cuadrado es: " << area << std::endl;
        break;
    }
    case 2: 
    {       
        int radio;
        std::cout << "Ingresa el valor del radio del círculo: ";
        std::cin >> radio;
        area = 3 * radio * radio;
        std::cout << "El área del círculo es: " << area << std::endl;
        break;
    }
    case 3: 
    {    
        int base, altura;
        std::cout << "Ingresa el valor de la base del triángulo: ";
        std::cin >> base;
        std::cout << "Ingresa el valor de la altura del triángulo: ";
        std::cin >> altura;
        area = (base * altura) / 2;
        std::cout << "El área del triángulo es: " << area << std::endl;
        break;
    }
    default:
    {
        std::cout << "Por favor ingresa solo los números que se están mostrando" << std::endl;
        break;
    }
    }
*/
#pragma endregion

#pragma region Clase 2 Ejercicio Pagina 29
/*
    int x;
    int y;
    int choice;
   

    std::cout << "Elija una de las siguientes opciones: " << std::endl;
    std::cout << "1 = Add 2 numbers" << std::endl;
    std::cout << "2 = Substract 2 numbers" << std::endl;
    std::cout << "3 = Multiply 2 numbers" << std::endl;
    std::cout << "4 = Divide 2 numbers" << std::endl;

    std::cin >> choice;

    switch(choice)
    {
    case 1:
    {
        std::cout << "Elija el primer valor a sumar: " << std::endl;
        std::cin >> x;
        std::cout << "Elija el segundo valor a sumar: " << std::endl;
        std::cin >> y;
        std::cout << "El resultado de la suma es: " << x + y << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "Elija el primer valor a restar: " << std::endl;
        std::cin >> x;
        std::cout << "Elija el segundo valor a restar: " << std::endl;
        std::cin >> y;
        std::cout << "El resultado de la resta es: " << x - y << std::endl;
        break;
    }
    case 3:
    {
        std::cout << "Elija el primer valor a multiplicar: " << std::endl;
        std::cin >> x;
        std::cout << "Elija el segundo valor a multiplicar: " << std::endl;
        std::cin >> y;
        std::cout << "El resultado de la multiplicacion es: " << x * y << std::endl;
        break;
    }
    case 4:
    {
        std::cout << "Elija el primer valor a dividir: " << std::endl;
        std::cin >> x;
        std::cout << "Elija el segundo valor a dividir: " << std::endl;
        std::cin >> y;
        std::cout << "El resultado de la division es: " << x / y << std::endl;
        break;
    }
    default:
    {
        std::cout << "Por favor, ingresa sólo números de los que se están mostrando"<< std::endl;
        break;
    }
    }
 */
#pragma endregion

#pragma region Clase 2 Ejercicio Pagina 30
/* 
    int dinero;
    std::cout << "Porfavor ingresa una cantidad de dinero de tu gusto particular, como 48: " << std::endl;
    std::cin >> dinero;


    switch (dinero)
    {
    case 100:
    {
        std::cout << "Poco dinero" << std::endl;
        break;
    }
    case 500:
    {
        std::cout << "Dinero Moderado" << std::endl;
        break;
    }
    case 1000:
    {
        std::cout << "Mucho Dinero" << std::endl;
        break;
    }
    default:
    {
        std::cout << "cantidad variada de dinero" << std::endl;
        break;
    }
    }
*/
#pragma endregion

#pragma region Clase 2 Ejercicio Pagina 34 
/*
    std::cout << "De que numero quieres ver la tabla de multiplicar: ";
    int numero;
    std::cin >> numero;

    float i = 1; 
    while (i <= 10) 
    {
        std::cout << numero << " x " << i << " = " << numero * i <<   std::endl;
        i++; 
    }
*/
#pragma endregion

#pragma region Clase 2 Ejercicio Pagina 34 
/*
    std::cout << "De que numero quieres ver la tabla de multiplicar: ";
    int numero;
    std::cin >> numero;

    int i = 1;
    do 
    {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
        i++;  
    } while (i <= 10);
*/
#pragma endregion
#pragma endregion

}













