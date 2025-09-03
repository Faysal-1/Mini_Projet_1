#include <stdio.h>

int main(){

    int N[5],Moy,Max,Min;
    int Som=0;
    printf("\nGestion des notes d’un étudiant\n");
    for (int i = 0; i < 5; i++)
    {
       printf("\nEntre la Note  %d :",i + 1);
       scanf("%d",&N[i]);
    }
    printf("\nle total des notes:");

    for (int i = 0; i < 5; i++)
    { 
        Som += N[i];
    }
        printf("\nResultat : %d",Som);

    printf("\nla moyenne :");
        Moy =Som / 5;
            printf("\nResultat : %d",Moy);

    int j = 1 ;
    Max = N[0];
    while (j<5)
    {
        if(Max < N[j]){
            Max = N[j];
        }
        j++;
    }
    printf("\nla note la plus haute : %d ",Max);
    
    Min = N[0];
    while (j < 5)
    {
        if(Min > N[j]){
            Min = N[j];
        }
        j++;
    }
    printf("\nla note la plus basse : %d ",Min);

    if (Moy >= 90)
    {
        printf("\nExcellent");
    }else if (Moy <=89 && Moy >= 80)
    {
        printf("\nTrès bien");
    }else if (Moy <=79 && Moy >= 70)
    {
        printf("\nBien");
    }else if (Moy <=69 && Moy >= 60)
    {
        printf("\nPassable");
    }else{
        printf("\nÉchec");
    }

    

    if (Moy >= 50)
    {
        printf("\nEtudiant a reussi ");
    }else
    {
        printf("\nEtudiant a echoue ");
    }
    

    return 0;
}