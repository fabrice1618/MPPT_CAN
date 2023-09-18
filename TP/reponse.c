#include <stdio.h>
#include "CAN.h"
#include "MPPT.h"

int main( ) 
{
   CANFrame reponse; 
   MPPTData donnees;

   printf("=== CAN_receive() ===\n");
   CAN_receive(&reponse);                       // Réception des données CAN

   MPPT_analyser_reponse(&donnees, reponse);    // Analyser la réponse du MPPT
   MPPT_print(donnees);                          // Afficher les données

   return 0;
}