// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf("\t\t\t\t10\n");
    printf("\t\t\t9\t10\n");
    printf("\t\t8\t9\t10\n");
    printf("\t7\t8\t9\t10\n");
    printf("6\t7\t8\t9\t10\n");
    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10][10],n,m,i,j,max=0;
    printf("enter the row");
    scanf("%d",&n);
    printf("enter the col");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0];
    for(i=0; i<n; i++)
    {
        {
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    printf("max=%d",max);
    return 0;
}



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c,d,e,sum,per;
    printf("enter the 5 subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=(a+b+c+d+e);
    per=(sum/3);
    if(per>=90)
    {
        printf("A");
    }
    else if(per>=80)
    {
        printf("B");
    }
    else if(per>=70)
    {
        printf("C");
    }
    else if(per>=60)
    {
        printf("D");
    }
    else(per>=50);
    {
        printf("E");
    }
    return 0;
}