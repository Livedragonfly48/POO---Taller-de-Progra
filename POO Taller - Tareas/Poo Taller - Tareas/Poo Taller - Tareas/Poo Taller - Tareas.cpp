#include <iostream>


#pragma region Tarea 1 Funciones

#pragma region 1 Ejercico

    /*void maxnum(int num1, int num2, int num3) 
    {
        if (num1 == num2 && num3 == num2) 
        {
            std::cout << "Los numeros son todo iguales, por lo tanto no se puede encontra el mayor entre ellos";
        }
        else if (num1 > num2) 
        {
            if (num1 > num3)
            {
                std::cout << "El maximo de ellos es : " << num1;
            }
            else 
            {
                std::cout << "El maximo de ellos es : " << num3;
            }
        }
        else 
        {
            if (num2 > num3)
            {
                std::cout << "El maximo de ellos es : " << num2;
            }
            else 
            {
                std::cout << "El maximo de ellos es : " << num3;
            }
        }
    }*/

#pragma endregion

#pragma region 2 Ejercicio

    /*void Grades(int m1, int m2, int m3) 
    {
        int Avg = (m1 + m2 + m3) / 3;

        if (Avg >= 60) 
        {
            std::cout << "Perfecto ";
        }
        else if (Avg >= 35 && Avg < 60)
        {
            std::cout << "Bien Logrado ";
        }
        else 
        {
            std::cout << "Muy Mal ";
        }
    }*/

#pragma endregion 

#pragma region 3 Ejercicio

    /*void CalculateFuerza(int m, int a) 
    {
        int F = m * a;

        if (F >= 1000) 
        {
            std::cout << "Esta muy fuerte";
        }
        else if (F < 800 && F >= 125)
        {
            std::cout << "Es normal de fuerza";
        }
        else if (F < 35)
        {
            std::cout << "Es debil";
        }
        else
        {
            std::cout << "No se puede calcular la fuerza, disculpa.";
        }
    }*/

#pragma endregion

#pragma region 4 Ejercicio

    /*void Discount(int amount)
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
    }*/

#pragma endregion

#pragma endregion


int main()
{
#pragma region Tarea  1 Main

#pragma region 1 Ejercicio

   /* int num1;
    int num2;
    int num3;

    std::cout << "Porfavor, ingresa los 3 numeros a valorar" << std::endl;
    std::cout << "Primer Numero: ";
    std::cin >> num1;
    std::cout << "Segundo Numero: ";
    std::cin >> num2;
    std::cout << "Tercer Numero: ";
    std::cin >> num3;

    maxnum(num1, num2, num3);*/

#pragma endregion

#pragma region 2 Ejercicio

    /*int m1 = 0;
    int m2 = 0;
    int m3 = 0;

    std::cout << "Haremos un promedio de calificaciones respecto a tus 3 materias. " << std::endl << std::endl;
    std::cout << "Dime cuanto sacaste en Inteligencia Artifical ll: ";
    std::cin >> m1;
    std::cout << "Dime cuanto sacaste en Programacion Grafica ll: ";
    std::cin >> m2;
    std::cout << "Dime cuanto sacaste en Ingeniera de Software: ";
    std::cin >> m3;

    Grades(m1,m2,m3);*/

#pragma endregion

#pragma region 3 Ejercicio

    /*int m;
    int a;

    std::cout << "Calcularemos la fuerza segun los valores que proporciones." << std::endl << std::endl;
    std::cout << "Porfavor dame la masa del objeto: ";
    std::cin >> m;
    std::cout << "Ahora porfavor dame la aceleracion del mismo: ";
    std::cin >> a;

    CalculateFuerza(m, a);*/

#pragma endregion
 
#pragma region 4 Ejercicio

    /*int Amount;

    std::cout << "Cuanto pagaras? Me parece que tenemos algunos descuentos: ";
    std::cin >> Amount;

    Discount(Amount);*/

#pragma endregion

#pragma endregion
}

