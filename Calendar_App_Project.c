#include<stdio.h>

    int getFirstDayOfTheYear(int year){
        int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
        return day;
    }
    int  main(){
        char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int i,j,totalDay,weekDay=0,spaceCounter=0,year;
         printf("Enter your Favorite year : ");
         scanf("%d",&year);
         printf("\n\n*************** Welcome to %d ***************\n\n",year);
         //check if it is leap year 
         if((year%4==0 && year%100!=0)||(year%400==0))
         daysInMonth[1]=29;
    
    //get the first dayes of year
    weekDay=getFirstDayOfTheYear(year);
    for( i= 0; i<12; i++){
        printf("\n\n\n-------------------- %s --------------------\n",month[i]);
        printf ("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
        for(spaceCounter=1;spaceCounter<=weekDay;spaceCounter++){
            printf("      ");
        }
        totalDay=daysInMonth[i];
        for(j=1;j<=totalDay;j++){
            printf("%6d",j);
            weekDay++;
            if(weekDay>6){
                weekDay=0;
                printf("\n");
            }
        }
    }
    return 0;
}
