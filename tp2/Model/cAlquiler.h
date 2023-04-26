#ifndef _CALQUILER_H
#define _CALQUILER_H
using namespace std;
#include <ctime>

class cAlquiler {
public: 
    cAlquiler();
    ~cAlquiler();
time_t get_Tiempo();

void set_Tiempo(time_t tiempo);
private: 
    bool anticipacion;
    bool BuenEstado;
    time_t tiempo;
};

#endif //_CALQUILER_H