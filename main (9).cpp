#include <iostream>
#include <string>
#include <vector>

struct Material {
    int codigo;
    std::string titulo;
    std::string tipo;
    std::string extra;
};

struct Usuario {
    int id;
    std::string nombre;
};

int main() {
    std::vector<Material> materiales;
    std::vector<Usuario> usuarios;
    int cod = 1, id = 1, op;

    do {
        std::cout << "\n1.Registrar Libro 2.Registrar Revista 3.Mostrar Usuarios\n4.Cod Libros/Revistas 5.Todos Materiales 6.Registrar Usuario 0.Salir\nElige: ";
        std::cin >> op;
        std::cin.ignore();

        if(op == 1) {
            std::string t, a;
            std::cout << "Titulo: "; std::getline(std::cin, t);
            std::cout << "Autor: "; std::getline(std::cin, a);
            materiales.push_back({cod, t, "Libro", a});
            std::cout << "Registrado con codigo: " << cod << std::endl; cod++;
        }
        else if(op == 2) {
            std::string t; int n;
            std::cout << "Titulo: "; std::getline(std::cin, t);
            std::cout << "Numero: "; std::cin >> n; std::cin.ignore();
            materiales.push_back({cod, t, "Revista", std::to_string(n)});
            std::cout << "Registrada con codigo: " << cod << std::endl; cod++;
        }
        else if(op == 3) {
            std::cout << "\n--- USUARIOS ---" << std::endl;
            for(int i=0; i<usuarios.size(); i++)
                std::cout << "ID: " << usuarios[i].id << " | " << usuarios[i].nombre << std::endl;
        }
        else if(op == 4) {
            std::cout << "\n--- LIBROS ---" << std::endl;
            for(auto &m : materiales) if(m.tipo=="Libro") std::cout << m.codigo << ". " << m.titulo << " | Autor: " << m.extra << std::endl;
            std::cout << "\n--- REVISTAS ---" << std::endl;
            for(auto &m : materiales) if(m.tipo=="Revista") std::cout << m.codigo << ". " << m.titulo << " | Num: " << m.extra << std::endl;
        }
        else if(op == 5) {
            std::cout << "\n--- MATERIALES ---" << std::endl;
            for(auto &m : materiales)
                std::cout << m.codigo << ". " << m.titulo << " [" << m.tipo << "]" << std::endl;
        }
        else if(op == 6) {
            std::string n;
            std::cout << "Nombre: "; std::getline(std::cin, n);
            usuarios.push_back({id, n});
            std::cout << "Usuario registrado ID: " << id << std::endl; id++;
        }

    } while(op!=0);

    std::cout << "Saliendo..." << std::endl;
    return 0;
} https://github.com/YoelPilier/POO411_tareas.git 