#include <iostream>
#include <vector>
#include <string>

struct Maestro
{
    std::string nombre;
    int codigo;
};

int main()
{
    std::vector<Maestro> lista;

    Maestro m;
    m.nombre = "Daniel";
    m.codigo = 101;

    lista.push_back(m);

    for(size_t i = 0; i < lista.size(); i++)
    {
        std::cout << "\nNombre: " << lista[i].nombre;
        std::cout << "\nCodigo: " << lista[i].codigo;
    }

    return 0;
}
