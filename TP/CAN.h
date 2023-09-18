#ifndef __CAN_H
#define __CAN_H

/* Define CAN frame define a structure with bit fields */
typedef struct CAN_frame {
   unsigned int sof : 1;
   unsigned int base_id : 7;
   unsigned int mppt_id : 4;
   unsigned int rtr : 1;
   unsigned int res : 2;
   unsigned int dlc : 4;
   unsigned long data : 64;
   unsigned int crc : 16;
   unsigned int ack : 2;
   unsigned int eof : 7;
} CANFrame;

// Envoi de trame sur le bus CAN
void CAN_send(CANFrame frame);

// Reception de trame sur le bus CAN
void CAN_receive(CANFrame* frame);

// Affichage d'une trame CAN
void CAN_dump(CANFrame frame);

#endif