#include <stdio.h>
#include <stdlib.h>

int main()
{
  float math;
  float science;
  float eng;
  float totalMarks;
  float averageMarks;
  printf("Enter the Mathematics marks: ");
  scanf("%f", &math);
  printf("Enter the Science marks:");
  scanf("%f", &science);
  printf("Enter the English marks:");
  scanf("%f", &eng);
  totalMarks = math+science+eng;
  printf("Total: %.2f  \n",totalMarks);
  averageMarks = totalMarks/3.0;
  printf("Average: %.2f\n", averageMarks );


   if(averageMarks>=80){
    printf("Grade : A\n");
  }else if(70<=averageMarks<=79){
     printf("Grade : B\n");
  }else if(60<=averageMarks<=69){
    printf("Grade : C\n");
  }else if(50<=averageMarks<=59){
    printf("Grade : D\n");
  }else{
    printf("Grade : F\n");}
    if(math>=40 && science>=40 && eng>=40){
      printf("Result: Pass\n");
  }else{
    printf("Result: Fail\n");

  }
    return 0;
}
