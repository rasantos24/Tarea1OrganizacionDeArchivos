#include "tarea1.h"
#include <QApplication>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tarea1 w;
    w.show();

    fstream lux("C:\\Users\\Rafael\\Tareas_Orga\\Tarea1\\Luxray1.jpg", ios::binary | ios::in);
    fstream ray("imagen.txt", ios::binary | ios::out);

    lux.seekg(0, ios::end);
    int tamanio = lux.tellg();

    cout<<"Tamanio del Archivo: "<<tamanio<<endl;

    lux.seekg(0, ios::beg);

    char* cantBytes = new char[tamanio];

    lux.read(cantBytes, tamanio);

    fstream imagen("Luxray1.jpg", ios::binary | ios::out);

    cantBytes[405] = 'L';
    cantBytes[450] = 'U';
    cantBytes[504] = 'X';
    cantBytes[540] = 'R';
    cantBytes[900] = 'A';
    cantBytes[999] = 'Y';

    ray.write(cantBytes, tamanio);
    lux.write(cantBytes, tamanio);

    cout<<cantBytes[405]<<endl;
    cout<<cantBytes[450]<<endl;
    cout<<cantBytes[504]<<endl;
    cout<<cantBytes[540]<<endl;
    cout<<cantBytes[900]<<endl;
    cout<<cantBytes[999]<<endl;

    imagen.close();
    ray.close();

    return a.exec();
}
