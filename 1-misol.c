#include <stdio.h>

int main()
{
    FILE *input_txt = fopen("input.txt", "r");
    FILE *output_txt = fopen("output.txt", "w");


    int numb; 
    float s = 0;

    for (int i = 0; i < 10; i++)
    {
        fscanf(input_txt, "%d", &numb);
        s += numb;
    }
    fprintf(output_txt, " result %f", s/10);


    fclose(input_txt);
    fclose(output_txt);
}