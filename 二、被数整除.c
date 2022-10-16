//二、被数整除


//1 (21)

#include <math.h>
#include <stdio.h>
double  fun( int  n)
{

	int i;
	double sum=0.0;
	for(i=21;i<n;i++)
	{
		if(i%3==0&&i%7==0)
		{
			sum += i;
		}
	}
	return sqrt(sum);

}

void main()   /* 主函数 */
{  void NONO ();
   printf("s =%f\n", fun ( 1000) );
   NONO();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n ;
  double s;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d", &n) ;
    s = fun(n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}


//2 (63)

#include <stdio.h>

void  fun (int *a, int *n)
{

	int i,j=0;
	for(i=1;i<=1000;i++)
	{
		if((i%7==0||i%11==0)&&i%77!=0)
		{
			a[j++]=i;
			*n=j;
		}
	}

}

void main( )
{  int aa[1000], n, k ;
   void NONO (  );

   fun ( aa, &n ) ;
   for ( k = 0 ; k < n ; k++ )
      if((k + 1) % 10 == 0) printf("\n") ;
      else printf("%5d", aa[k]) ;
   NONO( );
}

void NONO ( )
{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
  int aa[1000], n, k ;
  FILE *fp ;

  fp = fopen("out.dat","w") ;
  fun ( aa, &n ) ;
  for ( k = 0 ; k < n ; k++ )
    if((k + 1) % 10 == 0) fprintf(fp, "\n") ;
    else fprintf(fp, "%5d", aa[k]) ;
  fclose(fp) ;
}


//3 (73)

#include <stdio.h>
double fun(int n)
{
	
	int i;
	double sum =0.0;
	for(i=5;i<=n;i++)
	{
		if(i%5==0||i%9==0)
		{
			sum += 1.0/i;
		}
	}

}

void main()
{
	 int n;
	 double s;
	 FILE *out;
	 printf("\nInput n:");
	 scanf("%d",&n);
	 s=fun(n);
	 printf("\n\ns=%f\n",s);
	 /******************************/
	 out=fopen("out.dat","w");
	 fprintf(out,"%f\n",fun(30));
  	 fclose(out);
	 /******************************/
}


//4 (103)

#include <stdio.h>
#define M 100
void  fun ( int  m, int *a , int *n )
{

	int i,j=0;
	for(i=1;i<=m;i++)
	{
		if(i%7==0||i%11==1)
		{
			a[j++]=i;
		}
	}
	*n=j;

}

void main( )
{  int aa[M], n, k;
   void NONO (  );
   fun ( 50, aa, &n );
   for ( k = 0; k < n; k++ )
     if((k+1)%20==0) printf("\n");
     else printf( "%4d", aa[k] );
   printf("\n") ;
   NONO( );
}

void NONO ( )
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n, j, k, aa[M], sum ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d,", &j) ;
    fun(j, aa, &n) ;
    sum = 0 ;
    for(k = 0 ; k < n ; k++) sum+=aa[k] ;
    fprintf(wf, "%d\n", sum) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}