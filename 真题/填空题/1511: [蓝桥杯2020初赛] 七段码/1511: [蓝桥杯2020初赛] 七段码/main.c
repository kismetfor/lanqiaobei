#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int sum = 0;
     
    //有一段二极管发光; a,b,c,d,e,f,g
    int l1 = 7;
    //有两段二极管发光; ab,af,bc,bg,cg,cd,de,eg,ef,fg
    int l2 = 10;
    //有三段二极管发光; abf,abc,abg,afg,afe,bcd,bcg,bgf,bge,cgd,cgf,cge,cde,cdg,deg,def,efg
    int l3 = 16;//
    //有四段二极管发光; abcd,abcg,abcf,abge,abgf,abfe,afeg,bcde,bcdg,bcgf,bcge,bged,bgef,cdef,cdeg,cdgf,cgfa,cgfe,defg,defa
    int l4 = 20;
    //有五段二极管发光即有两端不发光; ab,ac,ad,ae,af,ag,bc,bd,be,bg,cd,cf,cg,de,df,dg,ef,eg,fg
    int l5 = 19;//
    //有六段二极管发光即有一端不发光; a,b,c,d,e,f,g
    int l6 = 7;//(找一段二极管不发光的：)
    //第七种情况，全部发光
    int l7 = 1;
     
    sum = l1 + l2 + l3 + l4 + l5 + l6 + l7;
    printf("%d\n", sum);
  return 0;
}
