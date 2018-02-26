//北航11年第二题
/*先输入两个矩阵A和B，然后输入替换位置（左上角），编写程序将矩阵A中从替换位置开始的子矩阵（与B同样大小）替换为B，
并输出替换后的矩阵。*/

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
