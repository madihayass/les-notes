#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t[13] ;t[15];
    float min , max ;
    int i;
    //declaration du tableau 1
    printf("veuillez saisir les notes des etudiant de la 1�re class:\n");
    for(i=0;i<13;i++){
     printf("entrer la note min%d\n",i+1);
       scanf("%f",&t[i]);

    }
    min =t[0];
     for(i=1;i<13;i++){
        if(min>t[i]){
            min=t[i];
    }
     }
    printf("le minimum des note est:%f\n",min);
       max = t[0];
     for(i=1;i<13;i++){
        if(max<t[i]){
            max=t[i];
}
     }
printf("le maximum des note est:%f\n",max);

    for (i=0;i<13;i++){

  if(t[i]>=10)
      printf("le nombre des notes superieurs a 10 est:%f \n",t[i]);}

      //declaration du tableau 2

    printf("veuillez saisir les notes des etudiant de la 2�re class:\n");
    for(i=0;i<15;i++){
     printf("entrer la note min%d\n",i+1);
       scanf("%f",&t[i]);

    }
    min =t[0];
     for(i=1;i<15;i++){
        if(min>t[i])
            min=t[i];

     }
    printf("le minimum des note est:%f\n",min);
       max = t[0];
     for(i=1;i<15;i++){
        if(max<t[i])
            max=t[i];

     }
printf("le maximum des note est:%f\n",max);

    for (i=0;i<15;i++){

  if(t[i]>=10)
      printf("le nombre des notes superieurs a 10 est:%f \n",t[i]);




}
return 0;

}
