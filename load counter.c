#include <stdio.h>
#include <stdlib.h>

    float AddOneLoadPart (float fiskekage){                                                            printf("\n                   *** AddOneLoadPart CALLED with the value %.2f\n\n", fiskekage);
        float weightAfterLoad;
        float addedLoad;

        printf("Enter new weight in tonnes, after partial load: ");
        scanf("%f", &weightAfterLoad);
        getchar();
        addedLoad = weightAfterLoad - fiskekage;
        printf("\nLoaded %.2f tonnes \n", addedLoad);                                                 printf("\n                    *** AddOneLoadPart RETURNS %.2f\n\n", addedLoad);
        return (addedLoad);
    }

    float MainLoader (float kagefisk){                                                                  printf("\n                   *** MainLoader CALLED with the value %.2f\n\n", kagefisk);
        float addedLoadML;
        float newTotal;

        newTotal = kagefisk + AddOneLoadPart(kagefisk);
        printf("newtotal = %f", newTotal);                                                              printf("\n                   *** MainLoader RETURNS %.2f\n\n", newTotal);
        return (newTotal);
    }


int main(){
    float weight;
    float addedWeight;
    float totalWeight;

    printf("Enter start weight in tonnes: ");
    scanf("%f", &weight);
    getchar();

    addedWeight = AddOneLoadPart(weight);

    int i;
    for (i=1; i<3; i++)
    {
                    printf("                    ### Loop interation: %d", i);
        totalWeight = weight + addedWeight;
        totalWeight = MainLoader(totalWeight);
        printf("Total weight after adding another %.2f tonnes is %.2f tonnes", addedWeight, totalWeight);
    }
    printf("\n\n\n\n\n"); return 0;

}
