#include<stdio.h>
int i,n=20,j,m,t;
	char s,c[2];
	int cc;
	char nc[100],ccc[2],pc[100],lc[2],brs[2],brs1[2];
void main()
{
	int num;
	login();
	do{
	system("cls");
	printf("\n");
	for(j=0;j<n*3;j++)
	printf(" ");
	for(i=0;i<n;i++)
	{
	
		printf("* ");
	}
	printf("\n");
	for(j=0;j<n*3;j++)
	{
	printf(" ");
    }
	printf("-----WELCOME TO THE SANGMNER STAND-----");
	printf("\n");
	for(j=0;j<n*3;j++)
	{
	printf(" ");
    }
	for(i=0;i<n;i++)
	{
	
		printf("* ");
	}
	printf("\n");
	for(j=0;j<n*3+6;j++)
	printf(" ");
	printf("SAFE TRAVEL SAFE LIFE !");	
		printf("\n");
	for(j=0;j<n*3-1;j++)
	printf(" ");
	printf("We Develope Safe Corridor For Sangmner !");	
	printf("\n");
		for(j=0;j<n*3-3;j++)
	printf(" ");
		for(i=0;i<n+2;i++)
	{
	
		printf("**");
	}

	printf("\n");
			printf("\n");printf("\n");
				for(i=0;i<70;i++)printf(" ");
				printf("-----------------------------------------");				
				printf("\n");
		for(i=0;i<70;i++)printf(" ");
	printf("||     Info (Enter i)                  ||");printf("\n");printf("\n");
	for(i=0;i<70;i++)printf(" ");
	printf("||     Booking	(Enter b)            ||");printf("\n");printf("\n");
	for(i=0;i<70;i++)printf(" ");
	printf("||     Route Info (Enter r)            ||");printf("\n");printf("\n");
	for(i=0;i<70;i++)printf(" ");
	printf("||     Complaint (Enter c)             ||");printf("\n");printf("\n");
	for(i=0;i<70;i++)printf(" ");
	printf("||     Logout (Enter l)                ||");
	printf("\n");
	for(i=0;i<70;i++)printf(" ");
				printf("-----------------------------------------");
	
	printf("\n");
	printf("\n");
	printf("Enter Your Selection\n");
	scanf("%c",&s);
	switch(s)
	{
	
		case 'i':
			info();break;
		case 'b':
			booking();break;
		case 'r':
			route();break;
		case 'c':
			complaint();break;
		case 'l':
			logout();break;		
			default:
			printf("Enetr The correct selection\n");
	}

	}while(num<=0);
}

	

	void info()
	{ 
int i;
char ic[2],fb[100],fbc[2];
system("cls");
	printf("\t\t\t\t\t\t\t");
	printf("    --------------------------------------------");
	printf("\n");
for(i=0;i<=43;i++)printf(" ");
	printf("                ||      History (Enter h)                 ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Management Staff (Enter m)        ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Working Staff (Enter w)           ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Contact (Enter c)                 ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Feedbacks (Enter f)               ||");	
	printf("\n");
	printf("\t\t\t\t\t\t\t");
	printf("    --------------------------------------------");
	printf("\n\n");
	printf("Enter your choice\n");
	scanf("%s",ic);
	switch (*ic)
		{
		case 'h':
			printf("\n                            The Maharashtra State Road Transport Corporation was established by the State Government of Maharashtra as per the provision in Section 3 of RTC Act 1950. The MSRTC operates its services by the approved scheme of road transport published vide Notification MVA 3173/30303-XIIA dated 29 November 1973 in the official gazette. The area covered by the scheme is the entire area of the state of Maharashtra. The undertaking is operating stage and contract carriage services in the entire area of the state of Maharashtra except S.T. undertaking defined under Section 68 A (b) of M. V. Act and other exceptions published in the scheme. The first bus was flagged off from Pune to Ahmednagar in 1948");
			printf("\nPress Enter To Exit\n");
			getch();

			break;
		case 'm':
		    printf("\t\t\t\t\t\t\t");
	printf("    -----------------------------------------------------------");
	printf("\n");
for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Madhe Kiran (Head Of Stand)                      ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Muthe Vaibhav (Head of Driver Union)             ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Girhe Sandip (Head Of Conductor Union)           ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Mokal Akash (Head Of Bus Booking)                ||");
	printf("\n");
	printf("\t\t\t\t\t\t\t");
	printf("    -----------------------------------------------------------");
	printf("\nPress Enter To Exit\n");
getch();
	break;
	case 'w':
		 printf("\t\t\t\t\t\t\t");
	printf("    -----------------------------------------------------------");
	printf("\n");
for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Nehe Rambhau (Driver)                            ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Kale Nanasaheb (conductor)                       ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Kakad Ramesh (Student Pass Cordinator)           ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Aher Babasaheb (Mechanical)                      ||");
	printf("\n");
	printf("\t\t\t\t\t\t\t");
	printf("    -----------------------------------------------------------");
	printf("\nPress Enter To Exit\n");
getch();
	break;
	case 'c':
		 printf("\t\t\t\t\t\t\t");
	printf("    -----------------------------------------------------------");
	printf("\n");
for(i=0;i<=43;i++)printf(" ");  
	printf("                ||      Madhe Kiran (9709230945)                         ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Muthe Vaibhav (7896340299)                       ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Girhe Sandip (9370885672)                        ||");
	printf("\n");
	for(i=0;i<=43;i++)printf(" ");
	printf("                ||      Mokal Akash (9809866013)                         ||");
	printf("\n");
	printf("\t\t\t\t\t\t\t");
	printf("    -----------------------------------------------------------");
	printf("\nPress Enter To Exit\n");
getch();
	break;
	case 'f':
		printf("-----MR.Ramesh kakane=>");
		printf("                 Thank you ever so much!! best illustration thus far.\n");
		printf("-----MS.lele Pankaj=>");
		printf("                 Great site and plan to use it much more.\n");
		printf("\n\n");
		
		printf("Press n for add Feedback or e for exit\n");
		scanf("%s",fbc);
		if(*fbc=='n')
		{
			printf("Enter Your Feedback Here\n");
		scanf("%s",fb);
		printf("Thanks for Feedback\n");
		default:
				printf("\tEnter The Correct Choice\n");
				
				printf("\t\tPress Enter Key For Resubmit...........\n");
				getch();
				info();
			
	}
	
printf("\nPress Enter To Exit\n");
getch();
		}
		
		
	}
		void booking()
	{
        	printf("\n");
        	system("cls");
		
		
			for(j=0;j<n*3;j++)
	{
	printf(" ");
    }
	printf("--------CITY BUSES------------");
	printf("\n\n");
			for(i=0;i<150;i++)
		printf("*");
		printf("\n\n");
	
		printf("Sr.no");
		printf("\t\t");
		printf("Route");
		printf("\t\t\t");
		printf("Ticket");
		printf("\t\t\t");
		printf("AC/NONAC");
		printf("\t\t\t");
		printf("Stop");
		printf("\t");
		printf("                 Other Services");
		printf("\n");
		for(i=0;i<150;i++)
		printf("*");
		printf("\n\n");
			printf("1");
		printf("\t\t");
		printf("Sangmner-Pune");
		printf("\t\t");
		printf("Rs.200");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("nashik");
		printf("\t");
		printf("                 First Aid Cit,Water,Dinner");
		printf("\n\n");
			printf("2");
		printf("\t\t");
		printf("Sangmner-Mumbai");
		printf("\t\t");
		printf("Rs.400");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("pune");
		printf("\t");
		printf("                 None");
		printf("\n\n");
		printf("3");
		printf("\t\t");
		printf("Sangmner-Sinnar");
		printf("\t\t");
		printf("Rs.550");
		printf("\t\t\t");
		printf("AC");
		printf("\t\t\t\t");
		printf("nashik");
		printf("\t");
		printf("                 First Aid Cit,Water,Dinner");
		
		printf("\n\n");
		printf("4");
		printf("\t\t");
		printf("Sangmner-Sinnar");
		printf("\t\t");
		printf("Rs.450");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("nashik");
		printf("\t");
		printf("                 First Aid Cit,Water,Dinner");
		printf("\n\n");
		printf("5");
		printf("\t\t");
		printf("Sangmner-Sinnar");
		printf("\t\t");
		printf("Rs.350");
		printf("\t\t\t");
		printf("AC");
		printf("\t\t\t\t");
		printf("nashik");
		printf("\t");
		printf("                 None");
			printf("\n\n");
		printf("6");
		printf("\t\t");
		printf("Sangmner-Aurangabad");
		printf("\t");
		printf("Rs.650");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("Nagar");
		printf("\t");
		printf("                 None");
		printf("\n");
		
		for(i=0;i<150;i++)
		printf("*");
		printf("\n\n");
			for(j=0;j<n*3;j++)
	{
	printf(" ");
    }
	printf("--------LOCAL BUSES------------");
	printf("\n\n");
			for(i=0;i<150;i++)
		printf("*");
		printf("\n\n");
		printf("Sr.no");
		printf("\t\t");
		printf("Route");
		printf("\t\t\t");
		printf("Ticket");
		printf("\t\t\t");
		printf("AC/NONAC");
		printf("\t\t\t");
		printf("Stop");
		printf("\t");
		printf("                 Other Services");
		printf("\n");
		
			printf("7");
		printf("\t\t");
		printf("Sangmner-Kotul");
		printf("\t\t");
		printf("Rs.250");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("Dhandaraphal");
		printf("\t");
		printf("         First Aid Cit,Water,Dinner");
		printf("\n\n");
			printf("8");
		printf("\t\t");
		printf("Sangmner-Akole");
		printf("\t\t");
		printf("Rs.40");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("Kauthe");
		printf("\t");
		printf("                 None");
		printf("\n\n");
		printf("9");
		printf("\t\t");
		printf("Sangmner-Pemgiri");
		printf("\t");
		printf("Rs.60");
		printf("\t\t\t");
		printf("AC");
		printf("\t\t\t\t");
		printf("Nimaj");
		printf("\t");
		printf("                 First Aid Cit,Water,Dinner");
		
		printf("\n\n");
		printf("10");
		printf("\t\t");
		printf("Sangmner-Nanduri");
		printf("\t");
		printf("Rs.30");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("Khandagaon");
		printf("\t");
		printf("         First Aid Cit,Water,Dinner");
		printf("\n\n");
		printf("11");
		printf("\t\t");
		printf("Sangmner-Sakur");
		printf("\t\t");
		printf("Rs.100");
		printf("\t\t\t");
		printf("AC");
		printf("\t\t\t\t");
		printf("Jorve");
		printf("\t");
		printf("                 None");
			printf("\n\n");
		printf("12");
		printf("\t\t");
		printf("Sangmner-Rahuri");
		printf("\t\t");
		printf("Rs.150");
		printf("\t\t\t");
		printf("NONAC");
		printf("\t\t\t\t");
		printf("Loni");
		printf("\t");
		printf("                 None");
		printf("\n\n");
			for(i=0;i<150;i++)
		printf("*");
		printf("\n\n");
		printf("Select Enter the Sr.no for Confirm Booking\n");
		scanf("%d",&m);
		if(m==1 || m==2 || m==3 || m==4 || m==5 || m==6 || m==7 || m==8 || m==9 || m==10 || m==11 || m==12)
		{
			printf("Press Y for confirm And N for cancle\n");
			scanf("%s",c);
		
		}
		else 
		{
			printf("enter the correct choice\n");
			printf("Press Enter To Resubmit\n");
			getch();
			booking();
		}
			if(*c=='Y'|| *c=='y')
			{
			printf("Thanks for Confirm\n");
			printf("1) 8 am\n");
			printf("2) 9 am\n");
			printf("3) 9:30 am\n");
			printf("4) 10 am\n");
			printf("5) 12 pm\n");
			printf("6) 1:30 pm\n");
			printf("7) 3 pm\n");
			printf("8) 4:30 pm\n");
			printf("9) 5:30 pm\n");
			printf("10) 5:45 am\n");
			printf("11) 6 pm\n");
			printf("12) 6:30 pm\n");
			printf("13) 7 pm\n");
			printf("14) 8 pm\n");
			printf("15) 10 am\n");
			printf("Note:Select The Sr.No for select Time\n");
			scanf("%d",&t);
			if(t==1 || t==2 || t==3|| t==4 || t==5 || t==6 || t==7 || t==8 || t==9 || t==10 || t==11 ||t==12 || t==13 || t==14 || t==15)
			{
				printf("Thanks For Booking\n");
			}
			else
			{
				printf("Your Choice Is In correct\n\n");
			printf("Enter h for Gome Home And r For Resubmit\n");
			scanf("%s",brs1);
		
		printf("\t\t\tPress Enter To Exit.....................\n");
		getch();
			if(*brs1=='h')
			main();
			else 
			booking();	
			}
		    }
			else
			printf("Enter h for Gome Home And r For Resubmit\n");
			scanf("%s",brs);
		
		printf("\t\t\tPress Enter To Exit.....................\n");
		getch();
			if(*brs=='h')
			main();
			else 
			booking();
	}
	void route()
	{
		printf("Sr.No.");
	printf("\t\t\t");
	printf("Route Name");
	printf("\t\t\t");
	printf("Route Length");
	printf("\t\t\t");
	printf("Route Type");
	printf("\t\t      ");
	printf("Stops on routes");
	printf("\n\n");
    printf("[1]");
	printf("\t\t\t");
	printf("Nashik-Pune");
	printf("\t\t\t");
	printf("145 km");
	printf("\t\t\t\t");
	printf("Highway");
	printf("\t\t\t      ");
	printf("Alephata,manchar,narayangaon");
	printf("\n\n");
	printf("[2]");
	printf("\t\t\t");
	printf("Shrirampur-Paithan");
	printf("\t\t");
	printf("100 km");
	printf("\t\t\t\t");
	printf("Highway");
	printf("\t\t\t      ");
	printf("Khandagaon,Newasa,Kukana");
	printf("\n\n");
		printf("[3]");
	printf("\t\t\t");
	printf("Sangmner-Akola");
	printf("\t\t\t");
	printf("100 km");
	printf("\t\t\t\t");
	printf("Highway");
	printf("\t\t\t      ");
	printf("Dhandaraphal,kalas");
	
	printf("\n\n");
		printf("[4]");
	printf("\t\t\t");
	printf("Sangmner-Aurangabad");
	printf("\t\t");
	printf("146 km");
	printf("\t\t\t\t");
	printf("Highway");
	printf("\t\t\t      ");
	printf("Newasa,Gangapur");
		printf("\n\n");
		printf("[5]");
	printf("\t\t\t");
	printf("Sangmner-Sinnar");
	printf("\t\t\t");
	printf("177 km");
	printf("\t\t\t\t");
	printf("Highway");
	printf("\t\t\t      ");
	printf("Pangri,Shridi");
	printf("\n\n");
	printf("\t\t\t Press Enter To exit..........................\n");
	getch();
	
		
	}

	void complaint()
	{
		system("cls");
			printf("\n\n");
		printf("\t\t\t\t\t\t\t");
	printf("===========This Is Complaint Section==============");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t");
	printf("----------------------------------------------------");
	printf("\n");
	printf("\t\t\t\t\t\t\t");
	printf("||    1. Create a Complaint                       ||\n");
	printf("\t\t\t\t\t\t\t");
	printf("||    2. View a Complaint                         ||\n");
	printf("\t\t\t\t\t\t\t");
	printf("||    3. Update a Complaint                       ||\n");
	printf("\t\t\t\t\t\t\t");
	printf("||    4. Print a Complaint                        ||\n");
	printf("\t\t\t\t\t\t\t");
	printf("||    5. Cancle a Complaint                       ||\n");
	printf("\t\t\t\t\t\t\t");
		printf("----------------------------------------------------");
		printf("\n\n");
		printf("\t\t\t\t\t\t\t");
		printf("option=>");
		scanf("%d",&cc);
		printf("\n");
		switch (cc)
			{
			case 1:
				printf("Enter The Complaint Here\n");
				printf("\n");
				scanf("%s",nc);
				printf("We Really Take Action On This Complaint\n");
				break;
			case 2:
				printf("There Is no Complaint\n");
				printf("\n");
				printf("%s",*nc);
				break;
			case 3:
				printf("Enter The New Complaint\n");
				printf("\n");
				scanf("%s",nc);
				break;
			case 4:
				printf("Press P for Print\n");
				printf("\n");
				scanf("%s",pc);
				if(*pc=='p')
				printf("print is reddy\n");
				break;
			case 5:
				printf("Do you Want Cancle Complaint press y To Confirm\n");
				printf("\n");
				scanf("%s",ccc);
				if(*ccc=='y')
				printf("Complaint is Canceled");
				break;
	
			default:
				printf("\tEnter The Correct Choice\n");
				
				printf("\t\tPress Enter Key For Resubmit...........\n");
				getch();
				complaint();
		}
		getch();
		
	}
	void logout()
	{
		
		printf("Enter y for Logout n for exit\n");
		scanf("%s",lc);
		if(*lc=='y')
		{
			main();
		}
		else
		{
		exit(0);
		}	
		
		
	}
   void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");
	
    printf("\n  =========================  LOGIN FORM  =========================  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	                                                                                                                                                                        
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	
	i=0;
	
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}
