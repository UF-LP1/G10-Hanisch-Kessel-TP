
#ifndef _CMODOPAGO_H
#define _CMODOPAGO_H

class cModoPago {
private: 
    enum metodop Metodo;
    
metodop get_modoPago();

void set_modoPago(enum metodop Metodo);

public:
    cModoPago();
    ~cModoPago();
};

#endif //_CMODOPAGO_H