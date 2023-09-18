#include <stdio.h>
#include "can.h"

// Préparation et envoi de la requète pour un MPPT
void requete_mppt(int mppt_id)
{
   CANFrame requete; 

   // Compléter la préparation de la requete



   // Envoyer les données sur le bus CAN: 53
   CAN_send(requete);
}

// Test: initialisation et affichage structure
void tester_CANFrame()
{
   CANFrame requete; 

   // données de test avec tous les bits à 1
   requete.sof = 0x01;
   requete.base_id = 0x7F;
   requete.mppt_id = 0x0F;
   requete.rtr = 0x01;
   requete.res = 0x03;
   requete.dlc = 0x0F;
   requete.data = 0xFFFFFFFFFFFFFFFF;
   requete.crc = 0xFFFF;
   requete.ack = 0x03;
   requete.eof = 0x7F;

   CAN_dump(requete);   // Afficher le contenu de la trame
}

int main( ) 
{
   tester_CANFrame();   // Test de la trame CAN
   requete_mppt(1);     // Envoyer une requete MPPT

   return 0;
}