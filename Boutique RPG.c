#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct objet {
	char nomObj[30];
	int prix;
	int nombre;
	char descipt[150];
};

typedef struct objet objet;

 int choix = 10;
 int choixo = 10;
 int choixb = 10;
 int bourse = 300;

int main() {


	objet Dague = {"Dague", 50, 5, "Une dague solide qui represente tout le savoir faire du forgeron du village."};
	objet Hache = {"Hache", 80, 2, "Utiliser principalement par les bucherons du village. Assez pratique pour tuer tout ce qui ne vous plait pas ! "};
	objet Plumephnix = {"Plume de phoenix", 8000, 1, "Plume de l'oiseau legendaire ! Peut guerir n'importe quel blessure ! (Made In China)"};
	objet Casquecuir = {"Casque en cuir", 40, 4, "Modeste casque, protege modeste cervelle."};
	objet Fleche10 = {"Fleche x10", 10, 8, "Un stock de fleche bien badasse (Arc vendu separement)"};

	while (choix != 3) {

	printf("Bonjour etranger ! Bienvenue dans la meilleure boutique de bric-a-brac de la region ! \nJ'ai quelques objets qui pourrait vous interessez !\n");
	printf("Acheter[1]\nVendre[2]\nSortir[3]\n");
	scanf("%d",&choix);

	if (choix == 1) {
		printf("[1] %s | %d Berry | %d en stock \n", Dague.nomObj, Dague.prix, Dague.nombre);	
		printf("[2] %s | %d Berry | %d en stock \n", Hache.nomObj, Hache.prix, Hache.nombre);
		printf("[3] %s | %d Berry | %d en stock \n", Plumephnix.nomObj, Plumephnix.prix, Plumephnix.nombre);
		printf("[4] %s | %d Berry | %d en stock \n", Casquecuir.nomObj, Casquecuir.prix, Casquecuir.nombre);
		printf("[5] %s | %d Berry | %d en stock \n", Fleche10.nomObj, Fleche10.prix, Fleche10.nombre);
		printf("Retour [0]\n");
		scanf("%d",&choixo);
		
		if(choixo == 1) {
			printf("Bourse : %d Berry\n", bourse);
			printf("------------------\n", bourse);
			printf("Description : %s\n", Dague.descipt);
			printf("Acheter [1]\n");
			printf("Retour [0]\n");
			scanf("%d",&choixo);
			if(choixo == 1 && bourse >= Dague.prix) {
				bourse = bourse - Dague.prix;
				printf("Vous obtenez %s !\n", Dague.nomObj);
				printf("------------------\n", bourse);
			}

			if(choixo == 1 && bourse < Dague.prix) {
				printf("Vous n'avez pas assez de berry !\n");
				printf("------------------\n", bourse);
			}
			if(choixo == 0) {}

		}
		if(choixo == 2) {
			printf("Bourse : %d Berry\n", bourse);
			printf("------------------\n", bourse);
			printf("Description : %s\n", Hache.descipt);
			printf("Acheter [1]\n");
			printf("Retour [0]\n");
			scanf("%d",&choixo);
			if(choixo == 1 && bourse >= Hache.prix) {
				bourse = bourse - Hache.prix;
				printf("Vous obtenez %s !\n", Hache.nomObj);
				printf("------------------\n", bourse);
			}

			if(choixo == 1 && bourse < Hache.prix) {
				printf("Vous n'avez pas assez de berry !\n");
				printf("------------------\n", bourse);
			}

			if(choixo == 0) {}
		
		}
		if(choixo == 3) {
			printf("Bourse : %d Berry\n", bourse);
			printf("------------------\n", bourse);
			printf("Description : %s\n", Plumephnix.descipt);
			printf("Acheter [1]\n");
			printf("Retour [0]\n");
			scanf("%d",&choixo);
			if(choixo == 1 && bourse >= Plumephnix.prix) {
				bourse = bourse - Plumephnix.prix;
				printf("Vous obtenez %s !\n", Plumephnix.nomObj);
				printf("------------------\n", bourse);
			}

			if(choixo == 1 && bourse < Plumephnix.prix) {
				printf("Vous n'avez pas assez de berry !\n");
				printf("------------------\n", bourse);
			}
			if(choixo == 0) {}
		}
		if(choixo == 4) {
			printf("Bourse : %d Berry\n", bourse);
			printf("------------------\n", bourse);
			printf("Description : %s\n", Casquecuir.descipt);
			printf("Acheter [1]\n");
			printf("Retour [0]\n");
			scanf("%d",&choixo);
			if(choixo == 1 && bourse >= Casquecuir.prix) {
				bourse = bourse - Casquecuir.prix;
				printf("Vous obtenez %s !\n", Casquecuir.nomObj);
				printf("------------------\n", bourse);
			}

			if(choixo == 1 && bourse < Casquecuir.prix) {
				printf("Vous n'avez pas assez de berry !\n");
				printf("------------------\n", bourse);
			}
			if(choixo == 0) {}
		}
		if(choixo == 5) {
			printf("Bourse : %d Berry\n", bourse);
			printf("------------------\n", bourse);
			printf("Description : %s\n", Fleche10.descipt);
			printf("Acheter [1]\n");
			printf("Retour [0]\n");
			scanf("%d",&choixo);
			if(choixo == 1 && bourse >= Fleche10.prix) {
				bourse = bourse - Fleche10.prix;
				printf("Vous obtenez %s !\n", Fleche10.nomObj);
				printf("------------------\n", bourse);
			}

			if(choixo == 1 && bourse < Fleche10.prix) {
				printf("Vous n'avez pas assez de berry !\n");
				printf("------------------\n", bourse);
			}
			if(choixo == 0) {}
		}
		if(choixo == 0) {


		}

	


	if(choix == 2) {


	}





	

}

	if(choix == 3) {
		printf("Revenez quand vous voulez !\n");
		break;
	}

}




return 0;
}