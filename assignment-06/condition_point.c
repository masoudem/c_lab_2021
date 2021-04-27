/*
* Project name: condition_point
--------------------------------------------
    ID:9931098
    Name:ابراهیم صدیقی
    Mail:isedighi06@gmail.com
--------------------------------------------
*/
#include <stdlib.h>

/*
توجه: برای اعداد توی یک خط یا سه خط نقاط را از چپ به راست وارد کنید
توجه: برای لوزی اعداد را از پایین ترین نقطه به صورت ساعت گرد وارد کنید
*/


int main(){
    float x1 ,x2 ,x3 ,x4 ,y1 ,y2 ,y3 ,y4 ,m1 ,m2 ,m3 ,m4 ,m5 ,m6 ,m7 ,m8 ,m9  ;
    printf("Enter point 1: ") ;
    scanf("%f %f",&x1,&y1) ;
    printf("Enter point 2: ") ;
    scanf("%f %f",&x2,&y2) ;
    printf("Enter point 3: ") ;
    scanf("%f %f",&x3,&y3) ;
    printf("Enter point 4: ") ;
    scanf("%f %f",&x4,&y4) ;

    m1=(y2-y1)/(x2-x1) ;
    m2=(y3-y1)/(x3-x1) ;
    m3=(y4-y1)/(x4-x1) ;
    m4=(y3-y2)/(x3-x2) ;
    m5=(y4-y2)/(x4-x2) ;
    m6=(y3-y2)/(x3-x2) ;
    m7=(y4-y1)/(x4-x1) ;
    m8=(y2-y1)/(x2-x1) ;
    m9=(y3-y4)/(x3-x4) ;

    if(m1==m2){
      if(m2==m3){
        printf("All in one line") ;
      }else printf("Three in one line") ;
    }else if(m4==m5){
          printf("Three in one line") ;
          }else if(m6==m7 && m8==m9){
                printf("Diamond") ;
                }else printf("None") ;
     return 0;
}        
