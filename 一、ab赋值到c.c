////一、ab赋值到c
//
//
////1 （35）
//
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c=a/10*1+b%10*10+a%10*100+b/10*1000;
//
//}
//void main()
//{  int a,b; long c;
//   void NONO (  );
//   printf("Input a, b:");
//   scanf("%d %d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %ld\n", c);
//   NONO();
//}
//void NONO (  )
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat", "r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}
//
//
////2 (44)
//
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c=a%10*1+b%10*10+a/10*100+b/10*1000;
//
//}
//void main()   /* 主函数 */
//{  int a,b; long c;void NONO ();
//   printf("Input a, b:");
//   scanf("%d%d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %ld\n", c);
//   NONO();
//}
//void NONO ()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat","r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}
//
//
////3 (46)
//
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c = a/10+b/10*10+a%10*100+b%10*1000;
//
//}
//void main()
//{  int a,b; long c;
//   void NONO (  );
//   printf("Input a, b:");
//   scanf("%d %d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %ld\n", c);
//   NONO();
//}
//void NONO (  )
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat", "r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}
//
//
////4 (51)
//
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c = b/10+a%10*10+b%10*100+a/10*1000;
//
//}
//void main()
//{  int  a,b; long  c;void NONO ();
//   printf("Input a, b:");
//   scanf("%d%d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %ld\n", c);
//   NONO();
//}
//void NONO ()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat","r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}
//
//
////5 (53)
//
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c = b%10+a/10*10+b/10*100+a%10*1000;
//
//}
//void main()
//{  int a,b; long c;
//   void NONO ( );
//   printf("Input a, b:");  scanf("%d%d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %d\n", c);
//   NONO();
//}
//void NONO (  )
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。*/
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat", "r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}
//
//
////6 (54)
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c = b%10+a%10*10+b/10*100+a/10*1000;
//
//}
//void main()
//{  int a,b; long c;
//   void NONO ( );
//   printf("Input a, b:");  scanf("%d %d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %d\n", c);
//   NONO();
//}
//void NONO (  )
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat", "r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}
//
//
////7 (99)
//#include <stdio.h>
//void fun(int a, int b, long *c)
//{
//
//	*c = a%10+b/10*10+a/10*100+b%10*1000;
//
//}
//void main()
//{  int   a,b; long   c; void NONO ();
//   printf("Input a, b:");
//   scanf("%d%d", &a, &b);
//   fun(a, b, &c);
//   printf("The result is: %ld\n", c);
//   NONO();
//}
//void NONO ()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *rf, *wf ;
//  int i, a,b ; long c ;
//
//  rf = fopen("in.dat","r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    fscanf(rf, "%d,%d", &a, &b) ;
//    fun(a, b, &c) ;
//    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
//  }
//  fclose(rf) ;
//  fclose(wf) ;
//}