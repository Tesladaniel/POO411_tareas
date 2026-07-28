#include <iostream>
#include <string>

class Audio {
private:
    std::string nombre;
    float duracion;
public:
    Audio(std::string n, float d) { nombre = n; duracion = d; }
    void mostrarInfo() {
        std::cout << "=== INFO AUDIO ===" << std::endl;
        std::cout << "Archivo: " << nombre << std::endl;
        std::cout << "Duracion: " << duracion << " segundos" << std::endl;
    }
};

int main() {
    Audio a("Cancion1.mp3", 200);
    a.mostrarInfo();
    return 0;
}