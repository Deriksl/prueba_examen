// examen_Pacientes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Triage.h"

void Triage::AddPatient(int urgency, std::string patient_name) {
}

// Implementación de la función PassPatient en la clase Triage
void Triage::PassPatient() {
}

// Definición de la función Print fuera de la clase Triage
void Triage::Print() {
}

int main()
{
    Triage myTriage;

    // Agrega el paciente Pablo con nivel de urgencia 1
    myTriage.AddPatient(1, "Pablo");   
     // Agrega el paciente Maria con nivel de urgencia 5
    myTriage.AddPatient(5, "Maria");  
    // Agrega el paciente Luis con nivel de urgencia 3
    myTriage.AddPatient(3, "Luis");    
    // Agrega el paciente Pancho con nivel de urgencia 2
    myTriage.AddPatient(2, "Pancho");  
     // Agrega el paciente Juan con nivel de urgencia 1
    myTriage.AddPatient(1, "Juan"); 
    // Agrega el paciente Pepe con nivel de urgencia 4  
    myTriage.AddPatient(4, "Pepe"); 
    // Agrega el paciente Ana con nivel de urgencia 5   
    myTriage.AddPatient(5, "Ana");     
    // Agrega el paciente Pedro con nivel de urgencia 1
    myTriage.AddPatient(1, "Pedro");   

    // Atiende al siguiente paciente
    myTriage.PassPatient();   
    // Atiende al siguiente paciente         
    myTriage.PassPatient();            

    // Imprime la lista de pacientes por nivel de urgencia
    myTriage.Print();                  

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
