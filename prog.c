#include <stdio.h>
int main()
{
    printf("Vvedite kolvo elementov\n");
    int k;
    scanf("%d",&k);
    printf("Vvedite massiv\n");
    float a[k];
    for (int i=0; i<k; i++)
    {
        scanf("%fl",&a[i]);
    }
    for (int i=0; i<k-1; i++)
    {
        for (int j=0; j<k-i-1; j++)
        {
            if (a[j+1]<a[j])
            {
                float b=a[j+1];
                a[j+1]=a[j];
                a[j]=b;
            }
        }
    }
    for (int i=0; i<k; i++)
    {
        printf("%f ",a[i]);
    }
    return 0;
}
