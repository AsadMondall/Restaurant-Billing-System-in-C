#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
struct food_category {
	char fc[100];
	char first_food[20];
	char second_food[20];
	char third_food[20];
	char fourth_food[25];
	char fifth_food[20];
	char sixth_food[20];
	char seventh_food[20];
	char eighth_food[20];
	int first, second, third, fourth, fifth, sixth, seventh, eighth;
};
char  a;
struct food_category m[10];
void search_by_food_catogory();
void search_by_food();
void food_order(int food);
void food_initialize();
void cart();
void exit();
void category(int category_choice);
int success = 0, x, choice;
int  total = 0, food_choice, n, c, s;
int category_choice, search_choice, confirm;
int ch, food, food_category_id;

    struct login{

    char fname[100];
    char lname [100];
    char username [100];
    char password[100];
    };
    /////////////////////muaaz part start>>>>>>>>>>>>>>>>
 void registe()
{
    printf("\n\t\t\t======================================================================\n");
    printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
    printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
    printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
    printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
    printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
    printf("\t\t\t======================================================================\n");
    FILE *log;
    log=fopen("login12.txt","w");
    struct login l;
    printf("\n\n\t\t\tEnter First Name:\t");
    scanf("%s",l.fname);
    printf("\n");
    printf("\t\t\tEnter Last Name:\t");
    scanf("%s",l.lname);
    printf("\n");
    printf("\t\t\tEnter Username:\t\t");
    scanf("%s",l.username);
    printf("\n");
    printf("\t\t\tEnter Password:\t\t");
    scanf("%s",l.password);
    printf("\n");
    fwrite(&l,sizeof(l),1, log);

    fclose(log);
    printf("\n\t\t\t-----Regestration successful......");
    printf("\n\t\t\tNow enter your username & password to login into Admin Panel\n");
    printf("\t\t\t enter any key to continue.....\n");
    getch();
    system("CLS");

}

 void login()
{
   printf("\n\t\t\t======================================================================\n");
   printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
   printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
   printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
   printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
   printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
   printf("\t\t\t======================================================================\n");
   printf("\n\n\n");
   char username[200], password[20];
   FILE *log;
   log=fopen("login12.txt","r");
   struct login l;
   printf("\n\t\t\t To log into admin panel please enter your Username & password: \n\n");
   printf("\t\t\tEnter username: ");
   scanf("%s",username);
   printf("\n");
   printf("\t\t\tEnter password: ");
   scanf("%s",password);
   printf("\n");

   while(fread(&l,sizeof(l),1,log))
   {
       if (strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
       {
        system("CLS");
        printf("\n\t\t\t====================================================================\n");
        printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                      ~Rupatoli, Barishal~                          =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
        printf("\t\t\t======================================================================\n");
        printf("\n\t\t\tSuccsfully Logged in......\n");
        printf("\n\n");
        printf("\n\t\t\t~$$~ Creating a new bill ~$$~ \n");
        printf("\n\t\t\t1)Search Meal :\n");
        printf("\n\t\t\t2)Search by Food items :\n");
		printf("\n\t\t\t3)Exit\n\n");
		printf("\n\t\t\tEnter your choice\t");
		scanf("%d", &search_choice);
		system("CLS");
		switch (search_choice) {
		    case 1:{
		       search_by_food_catogory();

		    }
		    system("CLS");
		case 2: {
			search_by_food();
			break;
		}
		system("CLS");
		case 3: {
			exit(1);
		}
		default: {
			printf("\n\t\t\tPlease Enter the valid choice\n");
			break;
		}
		}
       }
       else{
        printf("\n\t\t\tPlease Enter Correct Username and Password\n");
       }
   }
   fclose(log);

}
///////////////////muaaz part end<<<<<<<<<<<<<<<


/////////// asad part start>>>>>>>>>>>>>
int main()
{   system("COLOR 0B");


	while (1) {
        printf("\n\t\t\t======================================================================\n");
        printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
        printf("\t\t\t======================================================================\n");
		printf("\n\n");
		printf("\n\t\t\t1)Regestration\n");
		printf("\n\t\t\t)Login\n");
		printf("\n\t\t\t3)Exit\n");
		printf("\n\t\t\tEnter your choice\t");
		scanf("%d", &s);
		system("CLS");
		switch (s) {
		    case 1:{
		        registe();
		    }
		    system("CLS");
		    case 2:{
		         login();
		    }
		    case 3:{
		    return 0;
		    }
		}
	}
	getch ();
}
///////// asad part end<<<<<<<<<<<<<

/////////// asad, eva part start>>>>>>>>>>>>>>>>>
 void food_initialize()
{
	strcpy(m[1].fc, "Break_Fast");
	strcpy(m[1].first_food, "Sandwich");
	strcpy(m[1].second_food, "Pizza");
	strcpy(m[1].third_food, "Noodles");
	strcpy(m[1].fourth_food, "Parata_with_vegetables");
	strcpy(m[1].fifth_food, "Parata_with_eggs");
	strcpy(m[1].sixth_food, "Teheri");
	strcpy(m[1].seventh_food, "Khichuri_with_eggs");
    strcpy(m[1].eighth_food, "Tea");
	m[1].first = 50;
	m[1].second = 100;
	m[1].third = 95;
	m[1].fourth = 40;
	m[1].fifth= 50;
	m[1].sixth = 50;
	m[1].seventh = 50;
	m[1].eighth = 10;


	strcpy(m[2].fc, "Lunch");
	strcpy(m[2].first_food, "Rice_with_fish");
	strcpy(m[2].second_food, "Rice_with_chicken");
	strcpy(m[2].third_food, "Rice_with_eggs");
	strcpy(m[2].fourth_food, "Rice_with_beef");
	strcpy(m[2].fifth_food, "Rice_with_mutton");
	strcpy(m[2].sixth_food, "chicken_Biriyani");
	strcpy(m[2].seventh_food, "kacchi_Biriyani");
	strcpy(m[2].eighth_food, "chicken_khichuri");
	m[2].first = 80;
	m[2].second = 120;
	m[2].third = 60;
    m[2].fourth = 150;
	m[2].fifth = 180;
	m[2].sixth = 140;
    m[2].seventh = 220;
	m[2].eighth = 100;



	strcpy(m[3].fc, "Dinner");
	strcpy(m[3].first_food, "Rice_with_fish");
	strcpy(m[3].second_food, "Rice_with_chicken");
	strcpy(m[3].third_food, "Rice_with_eggs");
	strcpy(m[3].fourth_food, "Rice_with_beef");
	strcpy(m[3].fifth_food, "Rice_with_mutton");
	strcpy(m[3].sixth_food, "chicken_Biriyani");
	strcpy(m[3].seventh_food, "kacchi_Biriyani");
	strcpy(m[3].eighth_food, "Nunrooti_with_grill");
	m[3].first = 80;
	m[3].second = 120;
	m[3].third = 60;
    m[3].fourth = 150;
	m[3].fifth = 180;
	m[3].sixth = 140;
    m[3].seventh = 220;
	m[3].eighth = 200;
}
void search_by_food_catogory()
{
	food_initialize();
    printf("\n\t\t\t======================================================================\n");
    printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
    printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
    printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
    printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
    printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
    printf("\t\t\t======================================================================\n");
	printf(""
		"\n\n\t\t\tPlease Choose the");
	printf(" Meal \n\t\t\t1) %s\n\n\t\t\t2) %s\n\n\t\t\t3) %s",
		m[1].fc,
		m[2].fc, m[3].fc);
	printf("\n\n\t\t\t4) Exit\n");
	printf("\t\t\tselect the category\t");
	scanf("%d", &category_choice);
	switch (category_choice)
	{
  case 1:
    {
     system("CLS");
		 category( category_choice);
    }
    case 2:
    {
     system("CLS");
		 category( category_choice);
    }
    case 3:
    {
     system("CLS");
		 category( category_choice);
    }
    case 4:
        {
         system("CLS");
          exit(1);
          break;
        }

	}
}
void category(int category_choice)
{
	total = 0;
        printf("\n\t\t\t======================================================================\n");
        printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
        printf("\t\t\t======================================================================\n");
	while (1) {

		printf("\n\n\t\t\tList of foods available");

		printf(" in %s\n\n\t\t\t1) %s\tTaka: %d\n",
			m[category_choice].fc,
			m[category_choice].first_food,
			m[category_choice].first);

		printf("\t\t\t2) %s\tTaka: %d\n\t\t\t3) %s\tTaka: %d\n",
			m[category_choice].second_food,
			m[category_choice].second,
			m[category_choice].third_food,
			m[category_choice].third);
        printf("\t\t\t4) %s\tTaka: %d\n\t\t\t5) %s\tTaka: %d\n",
            m[category_choice].fourth_food,
			m[category_choice].fourth,
			m[category_choice].fifth_food,
			m[category_choice].fifth);
            printf("\t\t\t6) %s\tTaka: %d\n\t\t\t7) %s\tTaka: %d\n",
            m[category_choice].sixth_food,
			m[category_choice].sixth,
			m[category_choice].seventh_food,
			m[category_choice].seventh);
			printf("\t\t\t8) %s\tTaka: %d\n",
			m[category_choice].eighth_food,
			m[category_choice].eighth
			);
		printf("\n\t\t\t9) Cart\n\t\t\t10) Go Back\n\n\t\t\tPlease Enter your choice\t");
		scanf("%d", &food_choice);
		/////////
		//system("CLS");
		if (food_choice == 1) {
			printf("\t\t\tPlease Enter the ");
			printf("Count of %s\t",
				m[category_choice].first_food);
			scanf("%d", &n);
			//system("CLS");
			total = total
					+ (n * m[category_choice].first);
		}

		else if (food_choice == 2) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].second_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].second);
		}
		else if (food_choice == 3) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].third_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].third);
		}
		else if (food_choice == 4) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].fourth_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].fourth);
		}
		else if (food_choice == 5) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].fifth_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].fifth);
		}
		else if (food_choice == 6) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].sixth_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].sixth);
		}
		else if (food_choice == 7) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].seventh_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].seventh);
		}
           else if (food_choice == 8) {
			printf("\t\t\tPlease Enter the Count");
			printf("of %s\t",
				m[category_choice].eighth_food);
			scanf("%d", &n);
			total = total
					+ (n * m[category_choice].eighth);
		}


		else if (food_choice == 9) {
			cart();
		}
		else if (food_choice == 10) {
                system("CLS");
			search_by_food_catogory();
		}
		else {
			printf("\t\t\tPlease Enter the valid choice:\n\n");
		}
	}
}

void search_by_food()
{

	total = 0;

	food_initialize();

		printf("\n\n");
        printf("\n\t\t\t======================================================================\n");
        printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
        printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
        printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
        printf("\t\t\t======================================================================\n");
		printf("\n\n\t\t\tAvailable food & their price are listed below :\n");
		printf("\n\n\t\t\t1) %s\t%d\n\t\t\t2) %s\t%d\n\t\t\t3) %s\t%d\n\t\t\t4) %s\t%d\n\t\t\t5)%s\t%d\n\t\t\t6) %s\t%d\n\t\t\t7) %s\t%d\n\t\t\t8) %s\t%d\n",
			m[1].first_food, m[1].first,
			m[1].second_food, m[1].second,
			m[1].third_food, m[1].third,
			m[1].fourth_food, m[1].fourth,
			m[1].fifth_food, m[1].fifth,
			m[1].sixth_food, m[1].sixth,
			m[1].seventh_food, m[1].seventh,
			m[1].eighth_food, m[1].eighth);
        printf("\t\t\t9) %s\t%d\n\t\t\t10) %s\t%d\n\t\t\t11) %s\t%d\n\t\t\t12) %s\t%d\n\t\t\t13)%s\t%d\n\t\t\t14) %s\t%d\n\t\t\t15) %s\t%d\n\t\t\t16) %s\t%d\n",
			m[2].first_food, m[1].first,
			m[2].second_food, m[1].second,
			m[2].third_food, m[1].third,
			m[2].fourth_food, m[1].fourth,
			m[2].fifth_food, m[1].fifth,
			m[2].sixth_food, m[1].sixth,
			m[2].seventh_food, m[1].seventh,
			m[2].eighth_food, m[1].eighth);
			printf("\t\t\t17) %s\t%d\n\t\t\t18) %s\t%d\n\t\t\t19) %s\t%d\n\t\t\t20) %s\t%d\n\t\t\t21)%s\t%d\n\t\t\t22) %s\t%d\n\t\t\t23) %s\t%d\n\t\t\t24) %s\t%d",
			m[3].first_food, m[1].first,
			m[3].second_food, m[1].second,
			m[3].third_food, m[1].third,
			m[3].fourth_food, m[1].fourth,
			m[3].fifth_food, m[1].fifth,
			m[3].sixth_food, m[1].sixth,
			m[3].seventh_food, m[1].seventh,
			m[3].eighth_food, m[1].eighth);

		printf("\n\n\t\t\tIf You want to exit, then press>>'1' ");
		printf(" or To Go back & order food, press>> '0' ");
		scanf("%d", &confirm);
		if (confirm == 1) {
			printf("\t\t\tcancelled!!!!!! Exiting.....");
			printf("\t\t\tThank You visit again!\n");
			return;
		}
		else {
		     system("CLS");

		  search_by_food_catogory();
		}
	}
void food_order(int food)
{
	if (food >= 1 && food <= 8)
		food_category_id = 1;
	else if (food >= 9 && food <= 16)
		food_category_id = 2;
	else
		food_category_id = 3;
	if ((food % 8) == 1) {
		printf("\t\t\tPlease Enter the");
		printf("\t\t\t Count of %s\t",
			m[food_category_id].first_food);
		scanf("%d", &n);
		total = total + (n * m[food_category_id].first);
	}
	else if ((food % 8) == 2) {
		printf("\t\t\tPlease Enter the ");
		printf("\t\t\tCount of %s\t",
			m[food_category_id].second_food);
		scanf("%d", &n);
		total = total + (n * m[food_category_id].second);
	}
	else if ((food % 8) == 3) {
		printf("\t\t\tPlease Enter the ");
		printf("\t\t\tCount of %s\t",
			m[food_category_id].third_food);
		scanf("%d", &n);
		total = total + (n * m[food_category_id].third);
	}
}
////////////asad, eva part end<<<<<<<<<<<<<<<<<<

/////////////////sayema part start>>>>>>>>>>>>
void cart()
{   system("CLS");
    printf("\n\t\t\t======================================================================\n");
    printf("\t\t\t=                =THE BARCODE RESTAURANT BILLING SYSTEM=             =\n");
    printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
    printf("\t\t\t=                        ~Rupatoli, Barishal~                        =\n");
    printf("\t\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=\n");
    printf("\t\t\t=                     Developed by TEAM BARCODE                      =\n");
    printf("\t\t\t======================================================================\n");
	printf("\n\n\n\n\t\t\t---------Car--------");
	printf("\n\t\t\tYour Total Order");
	printf(" Amount is %d\n", total);
	printf("\n\n\t\t\tDo You wish to conform customer ");
	printf(" order ? (y=1/n=0):");
	scanf("%d",&c);
	if (c == 1)
    {
     printf("\t\t\tselect customer payment method :\n");

	printf("\n\t\t\t 1)Mastercad\n");
    printf("\n\t\t\t 2)Cash\n");
    printf("\n\t\t\t 3)Bkash\n");
    printf("\n\t\t\t 4)Nagad\n");
	scanf("%d", &ch);
	switch (ch) {
	    case 1:{
       printf("\t\t\tenter customer card no(16 digit) :");
       scanf("%d",&a);
       printf("\t\t\t---------payment successfull");
        exit(1);
		break;
	}
	case 2: {
       printf("\t\t\tpayment by cash");
		 exit(2);
		break;
	}
	case 3:{
       printf("\t\t\tenter customer bkash no: ");
       scanf("%d",&a);
    printf("\t\t\t---------payment successfull");
		 exit(3);
		break;
	}
	case 4: {
       printf("\t\t\tenter customer Nagad no :");
       scanf("%s",&a);
        printf("\t\t\t---------payment successfull");
      exit(4);
		break;
	}
	}


    }


	else if (c == 0) {
		printf("\t\t\tIf You want to exit, then press '1' ");
		printf("\t\t\tor To Go back, press '0' ");
		scanf("%d", &confirm);
		if (confirm == 1) {
			printf("\n\n\t\t\tOops! Your order is");
			printf("\t\t\tcancelled!! Exiting..");
			printf("\t\t\tThank You visit again!\n");
			// exit(1);
			return;
		}
		else {
			printf("\n\n\t\t\tThank You\n\n");
		}
	}
	else {
		printf("\n\n\t\t\tPlease Enter the correct choice\n");
		cart();
	}
}
////////////sayema part end<<<<<<<<<<<<<


