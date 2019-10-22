#include <stdio.h>
int main()
{
    printf("Vvedite kolvo elementov\n");
    int k;
    scanf("%d",&k);
    printf("Vvedite massiv\n");
    int a[k];
    int flag = 1;
    for (int i=0; i<k; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; (i<k-1) && (flag == 1); i++)
    {
        flag = 0;
        for (int j=0; (j<k-i-1); j++)
        {
            if (a[j+1]<a[j])
            {
                int b=a[j+1];
                a[j+1]=a[j];
                a[j]=b;
                flag = 1;
            }
        }
    }
    for (int i=0; i<k; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
