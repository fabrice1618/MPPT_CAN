# TP Extension du système
       
Dans une séance de travaux pratiques vous utiliserez les codes sources précédents et vous réaliserez les extensions suivantes :
- Permettre l’extension de l’application pour gérer plusieurs contrôleurs MPPT
- Réalisation de la boucle de scrutation permettant de réaliser une requête vers chacun des MPPT configurés. Chaque MPPT doit être interrogé toutes les 2 minutes.
- Pour chaque données lues ajouter un champ « énergie produite » pendant la période. Vous utiliserez les informations çi-dessous.
- Stocker les données reçues dans un fichier texte en mode « append » en utilisant le format CSV. Ajouter un champ « timestamp » à chaque enregistrement.

## Calcul de l’énergie :

On fait l’hypothèse que la tension et l’intensité sont continues sur l’intervalle de mesure.

Formule littérale de l'énergie : E = P x t

- Unités adoptées par EDF/ERDF: E est exprimée en Wh (Watt.heure).
- Puissance en watt (W), P = Tension x Intensité
- t : temps en heure (h)
