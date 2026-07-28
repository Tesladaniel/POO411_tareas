#include <iostream>
#include <string>

class Audio {
private:
    std::string nombre;
    float duracion;
public:
    Audio(std::string n, float d) { nombre = n; duracion = d; }
    void mostrarInfo() { std::cout << "Info: " << nombre << " | " << duracion << "s" << std::endl; }
    void reproducir() { std::cout << "Sonando: " << nombre << std::endl; }
};

int main() {
    Audio a("MiMusica.mp3", 180);
    int opcion;
    std::cout << "1. Info 2. Reproducir 3. Salir" << std::endl;
    std::cin >> opcion;
    if(opcion == 1) a.mostrarInfo();
    if(opcion == 2) a.reproducir();
    return 0;
}