#include <stdio.h>
int main()
{
    int month,day,year;
	printf("Enter date(mm/dd/yy):");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("今天是%d年",year);
	switch(month){
		case 1: printf("一月");break; 
		case 2: printf("二月");break; 
		case 3: printf("三月");break; 
		case 4: printf("四月");break; 
		case 5: printf("五月");break; 
		case 6: printf("六月");break; 
		case 7: printf("七月");break; 
		case 8: printf("八月");break; 
		case 9: printf("九月");break; 
		case 10: printf("十月");break; 
		case 11: printf("十一月");break; 
		case 12: printf("十二月");break; 
		default:printf("%d月",month);
	}	
	    printf("%d日",day);
        int x,y,z,a;
        switch(month){
        	case 1:x=day;break; 
        	case 2:x=31+day;break; 
        	case 3:x=31+28+day;break; 
        	case 4:x=31+28+31+day;break; 
        	case 5:x=31+28+31+30+day;break; 
        	case 6:x=31+28+31+30+31+day;break; 
        	case 7:x=31+28+31+30+31+30+day;break; 
        	case 8:x=31+28+31+30+31+30+31+day;break; 
        	case 9:x=31+28+31+30+31+30+31+31+day;break; 
        	case 10:x=31+28+31+30+31+30+31+31+30+day;break; 
        	case 11:x=31+28+31+30+31+30+31+31+30+31+day;break; 
        	case 12:x=31+28+31+30+31+30+31+31+30+31+30+day;break; 
        }
        if(year%4==0){
        	if(month>2)x+=1;
        }
        a=((year-1980)+3)/4;
        z=(x+365*(year-1980)+a)%7;
        switch(z){
        	case 1:printf("星期二\n");break;
        	case 2:printf("星期三\n");break;
        	case 3:printf("星期四\n");break;
        	case 4:printf("星期五\n");break;
        	case 5:printf("星期六\n");break;
        	case 6:printf("星期七\n");break;
        	case 0:printf("星期二\n");break;
        }
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
			if(day>31){
				printf("此为错误日期"); 
			}
}       else if(month==4||month==6||month==9||month==11){
	           if(day>30){
	           	printf("此为错误日期"); 
	           }
}       else if(month==2){
	    if(year%4==0){
	    	if(day>29)printf("此为错误日期"); 
	    }else if(day>28)printf("此为错误日期"); 
}       else printf("此为错误日期");
	return 0;
} 
