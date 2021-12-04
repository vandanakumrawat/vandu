#include<stdio.h>
void detevalid( int dd,int mm,int yy)
{
    if(yy>=1999 && yy<=2021)
    {
        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) &&(mm==1||mm==3||mm==5||mm==7||mm==8))
            printf("date is valid"); 
            else if((dd>=1 && dd<=30)&&(mm==4||mm==6||mm==9||mm==11)){
                else if(dd>=1 && dd<=28) &&(mm==2){
                    else if((dd>=1 && dd>=29)&&(yy%4==0)){
                        printf("date invalid");
                    }
                    }else{
                         printf("date invalid");
                    }else{
                         printf("day is not invalid");
                    }else{
                         printf("month is not invalid");
                    }int main(){
                        int dd,mm.yy;
                        printf("enter date dd mm and yy");
                        scanf("%d%d%d",&dd,&mm,&yy);
                        deteval(dd,mm,yy);
                    }
                }
            }
        }


    }
