#include <stdio.h>
int main()
{
    printf("Vvedite kolvo elementov");
    int k;
    scanf("%n",k);
    printf("Vvedite massiv");
    double a[k];
    for (int i=0; i<k; i++)
    {
        scanf("%fl",a[i]);
    }
    for (int i=0; i<k-1; i++)
    {
        for (int j=0; j<k-i-1; j++)
        {
            if (a[j+1]<a[j])
            {
                int b=a[j+1];
                a[j+1]=a[j];
                a[j]=b;
            }
        }
    }
    for (int i=0; i<k; i++)
    {
        printf("%fl ",a[i]);
    }
    return o;
}
