#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    string nombre, apellido, segApellido, matricula, codigo;
};

int main() {
    vector<Estudiante> lista;
    int op;

    do {
        cout << "\n1.Registrar 2.Ver 3.Salir\nOpcion: ";
        cin >> op;
        cin.ignore();

        if(op == 1) {
            Estudiante e;
            cout << "Nombre: "; getline(cin, e.nombre);
            cout << "Apellido: "; getline(cin, e.apellido);
            cout << "Segundo Apellido: "; getline(cin, e.segApellido);
            cout << "Matricula: "; getline(cin, e.matricula);
            cout << "Codigo: "; getline(cin, e.codigo);
            lista.push_back(e);
            cout << "Guardado!\n";
        }
        else if(op == 2) {
            for(int i=0; i<lista.size(); i++) {
                cout << "\n" << i+1 << ". " << lista[i].nombre << "
                     << lista[i].apellido << " << lista[i].segApellido
                     << " | Mat: " << lista[i].matricula
                     << " | Cod: " << lista[i].codigo << endl;
            }
        }
    } while(op!= 3);

    return 0;
}#FFFFFF

