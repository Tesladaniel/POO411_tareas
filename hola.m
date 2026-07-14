#include <iostream>
#include <vector>
#include <string>

struct Calificacion
{
    std::string estudiante;
    float nota;
};

int main()
{
    std::vector<Calificacion> lista;
    Calificacion c;

    std::cout << "Nombre del estudiante: ";
    std::getline(std::cin, c.estudiante);

    std::cout << "Nota: ";
    std::cin >> c.nota;

    lista.push_back(c);

    std::cout << "\nCalificacion registrada.";

    return 0;
}
