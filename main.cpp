//����11��ڶ���
/*��������������A��B��Ȼ�������滻λ�ã����Ͻǣ�����д���򽫾���A�д��滻λ�ÿ�ʼ���Ӿ�����Bͬ����С���滻ΪB��
������滻��ľ���*/

#include <stdio.h>
#define M 20

int main()
{
    int A[M][M];
    int B[M][M];

    int am,an;
    int bm,bn;
    int cm,cn;
    scanf("%d %d",&am,&an);
    int i,j;
    for(i = 0;i<am;i++)
        for(j=0;j<an;j++)
          scanf("%d",&A[i][j]);

    scanf("%d %d",&bm,&bn);
    for(i = 0;i<bm;i++)
        for(j=0;j<bn;j++)
          scanf("%d",&B[i][j]);

    scanf("%d %d",&cm,&cn);

     for(i = 0;i<bm;i++)
        for(j=0;j<bn;j++)
        {
            if((cn>an)||(cm>am)) break;
            A[cm-1+i][cn-1+j] = B[i][j];
        }

     for(i = 0;i<am;i++){
        for(j=0;j<an;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
     }
    return 0;
}
