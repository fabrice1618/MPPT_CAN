requete: requete.c CAN.c CAN.h
	gcc -Wall -Werror -Wextra -o requete requete.c CAN.c

reponse: reponse.c CAN.c CAN.h MPPT.c MPPT.h
	gcc -Wall -Werror -Wextra -o reponse reponse.c CAN.c MPPT.c

correction1: requete_correction.c CAN.c CAN.h
	gcc -Wall -Werror -Wextra -o correction1 requete_correction.c CAN.c

correction2: reponse.c CAN.c CAN.h MPPT_correction.c MPPT.h
	gcc -Wall -Werror -Wextra -o correction2 reponse.c CAN.c MPPT_correction.c

clean:
	rm correction1 correction2 reponse requete