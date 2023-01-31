#include <stdio.h>
#include <stdlib.h>

// Structure contenant le nombre de lignes et de col

int main()
{
    int c,c1,l1,c2,l2,i,j,resultat,choix;
    printf("Bienvenu sur notre programme de calcul matriciel\n");

    do {
        printf("\nVeuillez entrer le nombre de ligne(s) de la première matrice A : ");
        scanf("%d",&l1);
        printf("Entrez le nombre de colonne(s) de la matrice A : ");
        scanf("%d",&c1);

        int A[l1][c1];

        // Remplissage de la première matrice
        for (i=0;i<l1;i++) {
            for (j=0;j<c1;j++) {
                printf("Entrez la valeur de A%d%d : ",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
        }

        // Affichage de la première matrice
        printf("La matrice A est : \n");
        for (i=0;i<l1;i++) {
            for (j=0;j<c1;j++) {
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }

        printf("\nVeuillez entrer le nombre de ligne(s) de la deuxième matrice B : ");
        scanf("%d",&l2);
        printf("Entrez le nombre de colonne(s) de la matrice B : ");
        scanf("%d",&c2);

        int B[l2][c2];

        // Remplissage de la deuxième matrice
        for (i=0;i<l2;i++) {
            for (j=0;j<c2;j++) {
                printf("Entrez la valeur de B%d%d : ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
        }

        // Affichage de la deuxième matrice
        printf("La matrice B est : \n");
        for (i=0;i<l2;i++) {
            for (j=0;j<c2;j++) {
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }

        // Début des opérations pour le calcul des deux matrices
        if (c1 == l2) {
            // Produit AB
            printf("\nLe produit AB est possible et vaut : \n");
            resultat = 0;
            for (i=0;i<l1;i++) {
                for (j=0;j<c2;j++) {
                    for (c=0;c<c1;c++) {
                        resultat = resultat + A[i][c]*B[c][j];
                    }
                    printf("%d ",resultat);
                    resultat = 0;
                }
                printf("\n");
            }
        }

        if (l1 == c2) {
            // Produit BA
            printf("\nLe produit BA est possible et vaut : \n");
            resultat = 0;
            for (j=0;j<l2;j++) {
                for (i=0;i<c1;i++) {
                    for (c=0;c<c2;c++) {
                        resultat = resultat + A[c][i]*B[j][c];
                    }
                    printf("%d ",resultat);
                    resultat = 0;
                }
                printf("\n");
            }
        }

      printf("\nVoulez-vous recommencer ???");
      printf("\n1-Oui\n2-Non");
      printf("\nSaisissez votre choix : ");
      scanf("%d",&choix);

    } while (choix != 2);

    system("pause");
    return 0;
}
