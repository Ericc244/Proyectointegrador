#include "Serie.h"

Serie::Serie(int id, const std::string& nombre, float duracion, const std::string& genero)
    : Video(id, nombre, duracion, genero) {}

void Serie::agregarEpisodio(const Episodio& episodio) {
    episodios.push_back(episodio);
}

void Serie::mostrarEpisodiosConCalificaciones(float calificacion) const {
    for (const auto& episodio : episodios) {
        if (episodio.calcularCalificacionPromedio() >= calificacion) {
            episodio.mostrar();
        }
    }
}

void Serie::mostrar() const {
    std::cout << "Serie -> ";
    Video::mostrar();
}

const std::vector<Episodio>& Serie::getEpisodios() const {
    return episodios;
}
