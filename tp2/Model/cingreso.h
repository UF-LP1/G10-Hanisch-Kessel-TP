/**
 * Project Untitled
 */


#ifndef _CINGRESO_H
#define _CINGRESO_H
#include <string>
#include<ctime>
using namespace std;

class cingreso {
public: 
    time_t fecha;
    const string ID;
        
/**
 * @param ID
 */
 cingreso(const string ID);

 ~cingreso();
/**
 * @param fecha_const time
 */

void set_fecha(const time_t fecha);
    
const time_t get_fecha();
    
const string get_ID();

};

#endif //_CINGRESO_H