/*fichier permettant de tester l'envoi et la réception 
de trames sur le bus CAN */
#include <stdio.h>
#include "CAN.h"

// Envoi d'une trame CAN
void CAN_send(CANFrame frame)
{
    printf("=== can_send() ===\n");
    CAN_dump(frame);
}

/* exemple de données MPPT à recevoir
Byte 1: 0001 0011 => 0x13
Byte 2: 0110 1101 => 0x6D
Byte 3: 0000 0000 => 0x00
Byte 4: 1000 1111 => 0x8F
Byte 5: 0000 0011 => 0x03
Byte 6: 0110 1101 => 0x6D
Byte 7: 0001 1001 => 0x19
Byte 8: 0000 0000 => 0x00

contenu du champ MPPT Data: 0x136D008F036D1900
*/

// Recevoir une trame CAN
void CAN_receive(CANFrame *frame)
{
    frame->sof = 0;
    frame->base_id = 0b1110111;
    frame->mppt_id = 1;                 // numéro du MPPT
    frame->rtr = 0x01;
    frame->res = 0;
    frame->dlc = 0x07;                  // Longueur des données
    frame->data = 0x136D008F036D1900;   // Données
    frame->crc = 0xFFFF;
    frame->ack = 0x03;
    frame->eof = 0x7F;
}

// Afficher le contenu d'une trame CAN
void CAN_dump(CANFrame frame)
{
    printf("sof = 0x%02X\n", frame.sof);
    printf("base_id = 0x%02X\n", frame.base_id);
    printf("mppt_id = 0x%02X\n", frame.mppt_id);
    printf("rtr = 0x%02X\n", frame.rtr);
    printf("res = 0x%02X\n", frame.res);
    printf("dlc = 0x%02X\n", frame.dlc);
    printf("data = 0x%lX\n", frame.data);
    printf("crc = 0x%X\n", frame.crc);
    printf("ack = 0x%02X\n", frame.ack);
    printf("eof = 0x%02X\n", frame.eof);
}