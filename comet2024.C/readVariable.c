#include<stdio.h>
int main()
{
    int int_var;
    char char_var;
    float float_var;
    
     printf(" enter a decimal value=");
     scanf("%f",&float_var);
     
     printf("enter an integer value =");
    scanf("%d",&int_var);
    
    printf("enter a character value/name=");
     scanf(" %c",&char_var);
     
      printf("float value:%f\n",float_var);
      printf("integer value:%d\n",int_var);
      printf("character/name:%c\n",char_var);
      
      
      
    return 0;
}