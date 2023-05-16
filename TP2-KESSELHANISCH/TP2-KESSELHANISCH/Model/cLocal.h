#include <vector>
#include "cArticulos.h"

class cLocal {
private:
    std::string horarioSemana;
    std::string horarioSabado;
    std::vector<cArticulos*> inventario;
    int stock;

public:
    cLocal();
    ~cLocal();
    void setHorarioSemana(std::string horario);
    void setHorarioSabado(std::string horario);
    std::string getHorarioSemana();
    std::string getHorarioSabado();
    void agregarArticulo(cArticulos* articulo);
    void mostrarInventario();
};

