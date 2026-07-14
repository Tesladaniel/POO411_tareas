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
    c.estudiante = "Daniel";
    c.nota = 95;

    lista.push_back(c);

    for(size_t i = 0; i < lista.size(); i++)
    {
        std::cout << "\nEstudiante: " << lista[i].estudiante;
        std::cout << "\nNota: " << lista[i].nota;
    }

    return 0;
}
