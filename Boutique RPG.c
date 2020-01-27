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

 int choix;

int main() {


	objet Dague = {"Dague", 50, 5, "Une dague solide qui represente tout le savoir faire du forgeron du village."};
	objet Hache = {"Hache", 80, 2, "Utiliser principalement par les bucherons du village. Assez pratique pour tuer tout ce qui ne vous plait pas ! "};
	objet Plumephnix = {"Plume de phoenix", 8000, 1, "Plume de l'oiseau legendaire ! Peut guerir n'importe quel blessure ! (Made In China)"};
	objet Casquecuir = {"Casque en cuir", 40, 4, "Modeste casque, protege modeste cervelle."};
	objet Fleche10 = {"Fleche x10", 10, 8, "Un stock de fleche bien badasse (Arc vendu separement)"};

	printf("Bonjour etranger ! Bienvenue dans la meilleure boutique de bric-a-brac de la region ! \nJ'ai quelques objets qui pourrait vous interessez !\n");
	printf("Acheter[1]\nVendre[2]\nSortir[3]\n");
	scanf("%d",&choix);

	if (choix == 1) {
		printf("[1] %s | %d Berry | %d en stock | Description : %s\n", Dague.nomObj, Dague.prix, Dague.nombre, Dague.descipt);
		printf("[2] %s | %d Berry | %d en stock | Description : %s\n", Hache.nomObj, Hache.prix, Hache.nombre, Hache.descipt);
		printf("[3] %s | %d Berry | %d en stock | Description : %s\n", Plumephnix.nomObj, Plumephnix.prix, Plumephnix.nombre, Plumephnix.descipt);
		printf("[4] %s | %d Berry | %d en stock | Description : %s\n", Casquecuir.nomObj, Casquecuir.prix, Casquecuir.nombre, Casquecuir.descipt);
		printf("[5] %s | %d Berry | %d en stock | Description : %s\n", Fleche10.nomObj, Fleche10.prix, Fleche10.nombre, Fleche10.descipt);



	}






return 0;
}