#ifndef __MPPT_H
#define __MPPT_H

#include <stdbool.h>
#include "CAN.h"

/* Define MPPT Data structure*/
typedef struct MPPT_data {
   unsigned int mppt_id;
   bool bvlr;
   bool ovt;
   bool noc;
   bool undv;
   float u_in;
   float i_in;
   float u_out;
   char t_ambiante;
} MPPTData;

void MPPT_print(MPPTData data);
void MPPT_analyser_reponse(MPPTData* donnees, CANFrame reponse);

#endif