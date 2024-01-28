#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void printMainMenu() {
    printf("\033[35m");
    printf("Main Menu:\n");
    printf("\033[37m");
    printf("1. Calendar\n");
    printf("2. Age Calculator\n");
    printf("3. Date Conversion\n");
    printf("0. Exit\n");

 
}

void printCalendar() {
    int year, month;
    printf("Enter the year (1206-1498): ");
    scanf("%d", &year);
    while (year==0 || year<1206 || year>1498)
    {
        printf("enter the year:");
        scanf("%d",&year);
    }

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    while (month==0 || month<1 || month>12)
    {
       printf("enter the month (1-12)");
       scanf("%d",&month);
    }
       
    
  
    // Perform calendar calculations and print the result
    printf("Calendar for year %d, month %d:\n", year, month);

    displayCalendar(year,month);


    soal( month );

    // ...
    // Print the calendar
    // ...

    
}

void printAgeCalculator() {
    int birthYear, birthMonth, birthDay;
    int currentyear,currentmonth,currentday;
    int yeardistance,monthdistance,daydistance;
    int alldays;
    int faseleaztavalod,sham;
    printf("Enter your birthdate:\n");
    printf("Year (1206-1498): ");
    scanf("%d", &birthYear);
    while (birthYear == 0 || birthYear<1206 || birthYear>1498) {
        printf("year (1206-1498)");
        scanf("%d",&birthDay);
    
    }
    printf("Month (1-12): ");
    scanf("%d", &birthMonth);
    while (birthMonth == 0 || birthMonth<1 || birthMonth>12)
    {
        printf("month (1-12):");
        scanf("%d",&birthMonth);
    }
     
      
        

    
 
    printf("Day (1-31): ");
    scanf("%d", &birthDay);
   while(birthDay == 0|| birthDay<1 || birthDay>31) 
    {
        printf("day(1-31)");
        scanf("%d",&birthDay);

       
       
    }
  
    // Perform age calculation and print the result
    printf("Age calculation:\n"); 
    time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("now: %d-%02d-%02d \n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

  currentyear=tm.tm_year+1900;
  currentmonth=tm.tm_mon+1;
  currentday=tm.tm_mday;
  yeardistance=(currentyear-tabdilsal(birthYear,birthMonth,birthDay));
     printf("yeardistance is:%d\n",yeardistance-1);

 if(currentmonth>birthMonth)
 {
    monthdistance=currentmonth-tabdilmah(birthMonth,birthDay);
       printf("monthdistance is:%d\n",monthdistance);
 }
 else if(currentmonth<birthMonth )
 {
    monthdistance=(tabdilmah(birthMonth,birthDay)-currentmonth)+2;
        printf("monthdistance is:%d\n",monthdistance);
 }
 
 if(currentday>birthDay)
 {
    daydistance=(currentday-birthDay)+10;
 if(daydistance>30)
         {
            daydistance=((currentday-birthDay)+10)-30;
            printf("daydistance is:%d\n",daydistance);
         }
         else 
         {
            daydistance=(currentday-birthDay)+10;
            printf("daydistance is:%d\n",daydistance);
         }
 }
 else if(currentday<birthDay)
 {
     daydistance=(currentday+30)-birthDay;
       if(daydistance>30)
         {
            daydistance=((currentday+30)-birthDay)-30;
            printf("daydistance is:%d\n",daydistance);
         }
         else 
         {
            daydistance=(currentday+30)-birthDay;
            printf("daydistance is:%d\n",daydistance);
         }
 }
     alldays=(yeardistance*365)+(monthdistance*30)+daydistance;
         printf("the days you passed is:%d\n",alldays);

         faseleaztavalod=365-((monthdistance*30)+daydistance);
         printf("\033[32m");
         printf("ta tavalod shoma hodada %d roz mande:\n",faseleaztavalod);
         sham=yeardistance-1;
         printf("emsal shoma shame %d ra foot mikonid:\n",sham);
         printf("\033[36m");

        

    
}


void printDateConversion() {
    int choice;
   printf("\033[36m");
    menu(choice);
    printf("\033[37m");
    
        return ;
}
//calender
int getNumberOfDays(int year, int month) {
    switch (month) {
        case 12:
            if ((year % 33 == 1 ) || (year % 33 == 5) || (year % 33 == 13) || (year % 33 == 9) || (year % 33 == 17)|| (year % 33 == 22)||(year % 33 == 26)|| (year % 33 == 30))
                return 30;  // leap year
            else
                return 29;
        case 9:
        case 10:
        case 11:
        case 8:
        case 7:

            return 30;
        default:
            return 31;
    }
 
}

void displayCalendar(int year, int month) {
    int i, j;
    int numberOfDays = getNumberOfDays(year, month);
    int startDay;
   
    printf("     Month: %d, Year: %d\n", month, year);
    printf("\033[33m");
    if(month<1 && month>12)
    {
        printf(" \033[31m");
        printf("invalid inout!");
        printf("\033[37m");   
    }
     else if(month==1)
    {
            
        printf("           farvardin\n");
    }
    else if (month == 2)
    {
            
        printf("           ordiehesht\n");
    }
    else if(month == 3)
    {
            
        printf("            khordad\n");
    }
    else if(month == 4)
    {
            
        printf("            tir\n");
    }
    else if(month == 5)
    {
            
        printf("            mordad\n");
    }
    else if(month == 6)
    {
            
        printf("          sharivar\n");
    }
    else if(month == 7)
    {
            
        printf("            mehr\n");
    }
    else if(month == 8)
    { 
            
        printf("            aban\n");
    }
    else if(month == 9)
    { 
            
        printf("            azar\n");
    }
    else if(month == 10)
    { 
             
        printf("            dey\n");
    }
    else if(month == 11)
    {
             
        printf("            bahman\n");
    }
    else if(month == 12)
    { 
            
        printf("            esfand\n");
    }
    printf("\033[37m");

    printf("   SH  YE  DO  SE  CH  PN  JO\n");

    // محاسبه روز شروع ماه
    startDay = 1;
    for (i = 1; i < year; i++) {
        if ((i % 33 == 1 ) || (i % 33 == 5) || (i % 33 == 9) || (i % 33 == 13) || (i % 33 == 17) || (i % 33 ==22) || (i % 33 == 26) || (i % 33 == 30))
            startDay += 366;
        else
            startDay += 365;
    }

    for (i = 1; i < month; i++) {
        startDay += getNumberOfDays(year, i);
    }

    startDay = (startDay % 7) + 1;

    // نمایش تقویم
    int day = 1;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            if (i == 0 && j < startDay)
                printf("    ");
            else if (day <= numberOfDays)
                printf("%4d", day++);
            else
                printf("    ");
        }
        printf("\n");
    }
}
int soal( int month )
{
    if( month==10)
    {
        printf("\033[34m");
        printf("8 day is mybirthday\n");
        printf("2 day is mom birthday\n");
        printf("\033[37m");
    }
    else if( month==11)
    {
         printf("\033[34m");
        printf("22 bahman is bistodobahman\n");
         printf("\033[37m");
    }
    else if( month==1)
    {
         printf("\033[34m");
        printf("1 farvardin is eid noroz\n");
        printf("13 farvardin is sizdahbedar\n");
         printf("\033[37m");
    }
    else if( month==9)
    {
         printf("\033[34m");
        printf("12 azar is malolin day\n");
         printf("\033[37m");
    }
    else if ( month==12)
    {
         printf("\033[34m");
        printf("1 esfand is dad birthday\n");
         printf("\033[37m");
    }
    
}

int tabdilsal(int year,int month,int day)
{
    int yeardistance;
    if(month<10)
    {
        yeardistance=year+621;
             return yeardistance;
    }
    else if(month==10 && day<=10)
    {
        yeardistance=year+621;
             return yeardistance;
    }
    else if(month>10)
    {
        yeardistance=year+622;
             return yeardistance;
    }
}
int tabdilmah(int month,int day)
{
    
          if(month=1 && day>=12 || month==2 && day<=10)
          {
            return 4;
          }
          else if(month==2 && day>=11 || month==3 && day<=10)
          {
            return 5;
          }
          else if (month==3 && day>=11 || month==4 && day<=9)
          {
            return 6;
          }
          else if (month==4 && day>=10 || month==5 && day<=9)
          {
            return 7;
          }
          else if (month==5 && day>=10 || month==6 && day<=9)
          {
            return 8;
          }
          else if (month==6 && day>=10 || month==7 && day<=8)
          {
            return 9;
          }
          else if(month==7 && day>=9 || month==8 && day<=9)
          {
            return 10;
          }
          else if(month==8 && day>=10 || month==9 && day<=9)
          {
            return 11;
          }
          else if(month==9 && day>=10 || month==10 && day<=10)
          {
            return 12;
          }
          else if(month==10 && day>11 || month==11 && day<=11)
          {
            return 1;
          }
          else if(month==11 && day>=12 || month==12 && day<=9)
          {
            return 2;
          }
          else if(month==12 && day>=10 || month==1 && day<=11)
          {
            return 3;
          }
          
        }
        int menu(int choice) {
    int shamsiyear,shamsimonth,shamsiday,miladiyear,miladimonth,miladiday;
    
    do {
        printf("\033[35m");
        printf("tabdiltarikh:\n");
        printf("\033[37m");
        printf("1. shamsi be miladi:\n");
        printf("\033[31m");
        printf("2. shamsi be qamari:\n");
        printf("\033[37m");
        printf("3. miladi be shamsi:\n");
        printf("4. miladi be qamari\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1\n");
                printf("please enter the shamsi year:\n");
                scanf("%d",&shamsiyear);
                printf("please enter shamsi month:\n");
                scanf("%d",&shamsimonth);
                printf("please enter shamsi day:\n");
                scanf("%d",&shamsiday);
                miladiyear=tabdilsalshamsi(shamsiyear,shamsimonth,shamsiday);
                printf("sal miladi:%d\n",miladiyear);
                miladimonth=tabdilmahshamsi(shamsimonth,shamsiday);
                printf("mah miladi:%d\n",miladimonth);
                miladiday=shamsiday+21;
                if(miladiday>30)
                {
                  miladiday=(shamsiday+21)-30;
                  printf("roz miladi:%d\n",miladiday);
                }
                else 
                {
                printf("roz miladi:%d\n",miladiday);
                }

                
                
                break;
            case 2:
                printf("You selected Option 2\n");
                printf("please enter the year:\n");
                scanf("%d",&shamsiyear);
                printf("please enter the month:\n");
                scanf("%d",&shamsimonth);
                printf("plese enter the day:\n");
                scanf("%d",&shamsiday);
                printf("qamari year is:%d\n",salshamsibeqamari(shamsiyear));
                printf("qamari month is:%d\n",mahshamsibeqamari(shamsimonth));
               
                
                break;
            case 3:
                printf("You selected Option 3\n");
                printf("please enter the year:\n");
                scanf("%d",&miladiyear);
                printf("plese enter the month:\n");
                scanf("%d",&miladimonth);
                printf("please enter the day:\n");
                scanf("%d",&miladiday);
                printf("shamsi year is:%d\n",salmiladi(miladiyear,miladimonth,miladiday));
                printf("shamsi month is:%d\n",mahmiladi(miladimonth,miladiday));
                printf("shamsi day is:%d\n",rozmoiladi(miladiday));
                break;
            case 4:
                printf("you select Option 4\n");
                printf("please ener the year:\n");
                scanf("%d",&miladiyear);
                printf("please enter the month:\n");
                scanf("%d",&miladimonth);
                printf("please enter the day:\n");
                scanf("%d",&miladiday);
                Miladibeqamari(miladiyear,miladimonth,miladiday);
                break;
            case 0:
                printf("Bye!\n");
                break;
            default:
          
                printf("Invalid input!\n");
        }

        printf("\n");
    } while (choice != 0);

    
}
int tabdilsalshamsi(int year,int month, int day)
{
    int miladiyear;
    if(month<10)
    {
        miladiyear=year+621;
        return miladiyear;
    }
    else if(month==10 && day<=10)
    {
        miladiyear=year+621;
        return miladiyear;
    }
    else if(month>10)
    {
        miladiyear=year+622;
        return miladiyear;
    }
}
int tabdilmahshamsi(int month,int day)
{
    int miladimonth;
       if(month==1 && day>=12 || month==2 && day<=10)
       {
        miladimonth=4;
         return miladimonth;
       }
       else if(month==2 && day>=11 || month==3 && day<=10)
       {
        miladimonth=5;
         return miladimonth;
       }
       else if(month==3 && day>=11 || month==4 && day<=9)
       {
        miladimonth=6;
         return miladimonth;
       }
       else if(month==4 && day>=10 || month==5 && day<=9)
       {
        miladimonth=7;
          return miladimonth;
       }
       else if(month==5 && day>=10 || month==6 && day<=9)
       {
        miladimonth=8;
          return miladimonth;
       }
       else if(month==6 && day>=10 || month==7 && day<=8)
       {
        miladimonth=9;
          return miladimonth;
       }
       else if(month==7 && day>=9 || month==8 && day<=9)
       {
        miladimonth=10;
           return miladimonth;
       }
       else if(month==8 && day>=10 || month==9 && day<=9)
       {
        miladimonth=11;
           return miladimonth;
       }
       else if(month==9 && day>=10 || month==10 && day<=10)
       {
        miladimonth=12;
           return miladimonth;
       }
       else if(month==10 && day>=11 || month==11 && day<=11)
       {
       miladimonth=1;
          return miladimonth;
       }
       else if(month==11 && day>=12 || month==12 && day<=9)
       {
        miladimonth=2;
           return miladimonth;
       }
       else if(month==12 && day>=10 || month==1 && day<=11)
       {
        miladimonth=3;
           return miladimonth;
       }
    }
    int faseleaztavalod(int month,int day)
    {
        int fasele;
        fasele=365-((month*30)+day);
        printf("%d",fasele);
    }

    int salshamsibeqamari(int year)
    {
        int qamariyear;
        qamariyear=year+42;
    }
    int mahshamsibeqamari(int month)
    {
        int qamarimonth;
       qamarimonth=month+1;
    }

    int salmiladi(int year,int month,int day)
    {
        int shamsiyear;
        if(month<=3 && day<=21)
        {
            shamsiyear=year-622;
                return shamsiyear;
        }
        else 
        {
            shamsiyear=year-621;
                return shamsiyear;
        }
    }
    int mahmiladi(int month,int day)

    {
         if(month==3 && day>=20 ||month==4<=20)
         {
                 return 1;
         }
         else if(month==4 && day>=21 || month==5 && day<=21)
         {
                 return 2;
         }
         else if(month==5 && day>=22 || month==6 && day<=21) 
         {
                 return 3;
         }
         else if(month==6 && day>=22 || month==7 && day<=22)
         {
                 return 4;
         }
         else if(month==7 && day>=23 || month==8 && day<=22)
         {
                 return 5;
         }
         else if(month==8 && day>=23 || month==9 && day<=22)
         {
                 return 6;
         }
         else if(month==9 && day>=23 || month==10 && day<=22)
         {
                 return 7;
         }
         else if(month==10 && day>23 || month==11 && day<=21)
         {
                 return 8;
         }
         else if(month==11 && day>=22 || month==12 && day<=21)
         {
                 return 9;
         }
         else if(month==12 && day>=22 || month==1 && day<=20)
         {
                 return 10;
         }
         else if(month==1 && day>=21 || month==2 && day<=19)
         {
                 return 11;
         }
         else if(month==2 && day>=20 || month==3&& day<=19)
         {
                 return 12;
         }
    
    }

    int rozmoiladi(int day)
    {
        int shamsiday; 
        shamsiday=day-21;
             if(shamsiday<0)
             {
             shamsiday=(day-21)+30;
                 return shamsiday;
             }
             else 
             {
                shamsiday=day-21;
                     return shamsiday;
             }
    }

    int intPart(double value) {
    if (value < 0) {
        return (int)(value - 0.5);
    } else {
        return (int)(value + 0.5);
    }
}

void Miladibeqamari(int year, int month, int day) {
    int juliandate;

    if (year > 1582 || (year == 1582 && (month > 10 || (month == 10 && day >= 15)))) {
        juliandate = intPart((1461 * (year + 4800 + intPart((month - 14) / 12))) / 4)
                     + intPart((367 * (month - 2 - 12 * intPart((month - 14) / 12))) / 12)
                     - intPart((3 * intPart((year + 4900 + intPart((month - 14) / 12)) / 100)) / 4)
                     + day - 32075;
    } else {
        juliandate = 367 * year
                     - intPart((7 * (year + 5001 + intPart((month - 9) / 7))) / 4)
                     + intPart((275 * month) / 9)
                     + day + 1729777;
    }

    int l = juliandate - 1948440 + 10632;
    int n = intPart((l - 1) / 10631);
    l = l - 10631 * n + 354;

    int j = (intPart((10985 - l) / 5316)) * (intPart((50 * l) / 17719))
            + (intPart(l / 5670)) * (intPart((43 * l) / 15238));

    l = l - (intPart((30 - j) / 15)) * (intPart((17719 * j) / 50))
        - (intPart(j / 16)) * (intPart((15238 * j) / 43)) + 29;

    int lMonth = intPart((24 * l) / 709);
    int lDay = l - intPart((709 * lMonth) / 24);
    int lYear = 30 * n + j - 30;
     printf("qamari year is:%d\n",lYear);
    printf("qamari month is:%d\n",lMonth);
    printf("qamari day is%d\n",lDay);
   
}



  

int main() {

    printf("\033[37m");
    int choice;
    while (1) {
        printMainMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Bye!\n");
            break;
        } else if (choice == 1) {
            printCalendar();
            
        } else if (choice == 2) {
            printAgeCalculator();
           
        } else if (choice == 3) {
            printDateConversion();
          
        } else {
            printf("\033[31m");
            printf("Invalid input!\n");
        }
            printf("\033[37m");
        
        
    }

    return 0;
}

