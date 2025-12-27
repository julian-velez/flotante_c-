#include <iostream> 
// Incluye la librería iostream, que permite usar entrada y salida estándar
// como cout (imprimir en pantalla)

int main() { 
    // Función principal: aquí empieza la ejecución del programa

    double value = 3.14; 
    // Se declara una variable de tipo double (número decimal de mayor precisión)
    // y se le asigna el valor 3.14

    float floatValue = 45.8; 
    // Se declara una variable de tipo float (número decimal de menor precisión)
    // y se le asigna el valor 45.8

    std::cout << value + floatValue; 
    // Se suman las dos variables (double + float)
    // El resultado se convierte automáticamente a double
    // y se imprime en pantalla usando cout

    return 0; 
    // Indica que el programa terminó correctamente
}
