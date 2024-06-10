#include "Video.h"

Video::Video(int id, const std::string& nombre, float duracion, const std::string& genero)
    : id(id), nombre(nombre), duracion(duracion), genero(genero) {}

void Video::agregarCalificacion(int calificacion) {
    calificaciones.push_back(calificacion);
}

float Video::calcularCalificacionPromedio() const {
    if (calificaciones.empty()) {
        return 0.0;
    }
    return std::accumulate(calificaciones.begin(), calificaciones.end(), 0.0) / calificaciones.size();
}

void Video::mostrar() const {
    std::cout << "ID: " << id << ", Nombre: " << nombre << ", Duración: " << duracion 
              << ", Género: " << genero << ", Calificación Promedio: " << calcularCalificacionPromedio() << std::endl;
}

const std::string& Video::getNombre() const {
    return nombre;
}

const std::string& Video::getGenero() const {
    return genero;
}
