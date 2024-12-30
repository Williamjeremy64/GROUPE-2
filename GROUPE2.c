#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Structures
typedef struct GROUPE2
{
 char codecli[10]; // Code unique du client
 char prenom[50]; // Prénom du client
 char nom[50]; // Nom du client
 char tel[15]; // Téléphone du client
 char ville[50]; // Ville du client
} Client;

typedef struct GROUPE2
{
 char numero[10]; // Numéro unique du compte
 char dateouverture[11]; // Date d'ouverture du compte (JJ/MM/AAAA)
 char agence[50]; // Agence où le compte est enregistré
 float solde; // Solde du compte
 char codecli[10]; // Code du client associé à ce compte
} Compte;

typedef struct GROUPE2
{
 char code[10]; // Code unique de l'opération
 char numero[10]; // Numéro du compte concerné
 char type[10]; // Type d'opération : "dépôt" ou "retrait"
 float montant; // Montant de l'opération
 char dateoperation[11]; // Date de l'opération
 struct Operation *suivant; // Pointeur vers la prochaine opération (liste chaînée)
} Operation;
