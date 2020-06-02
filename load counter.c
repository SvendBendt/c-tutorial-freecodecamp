#include <stdio.h>
#include <stdlib.h>

    float AddOneLoadPart (float test1){                                                            printf("\n                   *** AddOneLoadPart CALLED with the value %.2f\n\n", test1);
        float weightAfterLoad;
        float addedLoad;

        printf("Enter new weight in tonnes, after partial load: ");
        scanf("%f", &weightAfterLoad);
        getchar();
        addedLoad = weightAfterLoad - test1;
        printf("\nLoaded %.2f tonnes \n", addedLoad);                                                 printf("\n                    *** AddOneLoadPart RETURNS %.2f\n\n", addedLoad);
        return (addedLoad);
    }

    float MainLoader (float test2){                                                                  printf("\n                   *** MainLoader CALLED with the value %.2f\n\n", test2);
        float addedLoadML;
        float newTotal;

        newTotal = test2 + AddOneLoadPart(test2);
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
