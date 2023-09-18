#include <stdio.h>
#include "MPPT.h"

#define PRINT_BOOL(x) (x)? "true": "false"

// Affichage des données MPPT
void MPPT_print(MPPTData data)
{
   printf( "=== mppt_data ===\n" );
   printf( "mppt_id = %d\n", data.mppt_id);
   printf( "bvlr = %s\n", PRINT_BOOL(data.bvlr));
   printf( "ovt = %s\n", PRINT_BOOL(data.ovt));
   printf( "noc = %s\n", PRINT_BOOL(data.noc));
   printf( "undv = %s\n", PRINT_BOOL(data.undv));
   printf( "u_in = %5.2f\n", data.u_in );
   printf( "i_in = %5.2f\n", data.i_in );
   printf( "u_out = %5.2f\n", data.u_out );
   printf( "t_ambiante = %d\n", data.t_ambiante );
}

void MPPT_analyser_reponse(MPPTData* donnees, CANFrame reponse)
{
   donnees->mppt_id = reponse.mppt_id;
}
