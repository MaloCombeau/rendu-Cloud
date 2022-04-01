#include <stdio.h>
#include <stdlib.h>

/*!
\fn int Saisientier()
\author Malo Combeau <combeaumal@eisti.eu>
\version 1
\date 14/11/2019
\brief demande la saisie d'un entier et le retourne
\param
\return entier
*/
int saisieEntier()
{
	int int_n;

	scanf("%d",&int_n);
	return (int_n);
}

/*!
\fn void Echange(int int_n1, int int_n2)
\author Malo Combeau <combeaumal@eisti.eu>
\version 1
\date 14/11/2019
\brief Prend en paramètre 2 entiers, enchange les deux valeurs et l'affiche
\param 2 entiers
\return
*/
void Echange(int int_n1, int int_n2)
{
	int int_res;

	printf("Avant échange n1=%d et n2=%d \n",int_n1, int_n2);
	int_res = int_n1;
	int_n1 = int_n2;
	int_n2 = int_res;
	printf("Après l'échange n1=%det n2=%d \n",int_n1, int_n2);
}

/*!
\fn void affichageTriangle(int int_n)
\author Malo Combeau <combeaumal@eisti.eu>
\version 1
\date 14/11/2019
\brief affiche le triangle de dimension du paramètre
\param entier
\return
*/
void affichageTriangle(int int_n)
{	
	for (int i = 0; i < int_n; ++i)
	{
		for (int j = int_n; j > i ; j--)
		{
			printf(" ");
		}

		for (int k = 0; k <= i*4; k+=2)
			{
				printf("*");
			}

		printf("\n");
	}
}

/*!
\fn void affichageTriangle(int int_n)
\author Malo Combeau <combeaumal@eisti.eu>
\version 1
\date 14/11/2019
\brief Affiche la table de mutliplication du nombre en paramètre
\param entier
\return
*/
void tableMultiplication(int int_n)
{
	int int_res;

	for (int i = 1; i <= 10; ++i)
	{
		int_res=i*int_n;
		printf("%d x %d = %d",i,int_n,int_res);
		printf("\n");
	}
}

/*!
\fn void NombreAmstrong(int int_amstrong, int int_taillenb)
\author Malo Combeau <combeaumal@eisti.eu>
\version 1
\date 14/11/2019
\brief Vérifie si le nombre entré est un nombre d'Amstrong
\param 2 entiers
\return
*/
void NombreAmstrong(int int_amstrong, int int_taillenb)
{
	int tint_res[int_taillenb];
	int int_res, int_tmp;
	int_res = 0;
	int_tmp = int_amstrong;

	for (int i = 0; i < int_taillenb; ++i) {
		tint_res[i] = int_amstrong % 10;
		int_amstrong = int_amstrong / 10;
	}

	for (int j = 0; j < int_taillenb; ++j) {
		int_res = int_res + (tint_res[j] * tint_res[j] * tint_res[j]);
	}

	if (int_res == int_tmp) {
		printf("Ce nombre est un nombre d'Amstrong\n");
	} 
	else 
	{
		printf("Ce nombre n'est pas un nombre d'Amstrong\n");
	}
}


/*!
\fn int main()
\author Malo Combeau <combeaumal@eisti.eu>
\version 1
\date 14/11/2019
\brief Menu
\param 
\return 0
*/
int main()
{
	int int_nb;
	int int_choix;
	int int_triangle;
	int int_mult;

	printf("1 : Saisie d'entier\n2 : Echange entiers\n3 : Triangle\n4 : Table de multiplication\n5 : Nombre Amstrong");
	printf("\n");
	scanf("%d",&int_choix);
	printf("\n");

	if (int_choix==1)
	{
		int_nb = saisieEntier();
		printf("%d",int_nb);
		printf("\n");
	}

	if (int_choix==2){
		Echange(5,6);
	}
	
	if (int_choix==3)
	{
		printf("Veuillez saisir un nombre :\n");
		scanf("%d",&int_triangle);
		affichageTriangle(int_triangle);
	}

	if (int_choix==4)
	{
		printf("Veuillez saisir un nombre :\n");
		scanf("%d",&int_mult);
		tableMultiplication(int_mult);
	}

	if (int_choix==5)
	{
		int int_taillenb;
		int int_test;
		int int_amstrong;

		int_taillenb = 1;
		int_test = 10;

		printf("Entrez l'entier que vous voulez tester \n");
		scanf("%d", &int_amstrong);

		while (int_amstrong > int_test) {
			int_taillenb = int_taillenb + 1;
			int_test = int_test *10;
		}
		NombreAmstrong(int_amstrong,int_taillenb);
	}

	return 0;
}