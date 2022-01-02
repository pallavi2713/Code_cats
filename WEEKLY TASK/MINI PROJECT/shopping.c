#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int hash[8];
int flag=0;
int sum=0;
int total=0; 
int f=0; //set to 1 on successfull Login
void cart();
//structure used in signup function to get user details in string format 
 struct login{
     char name[20];
     char add[20];
     char num[10];
     char email[20];
     char uname[10];
     char pswd[10];
    };
//structure for item details 
 struct item{
  int id;
  char name[20];
  int mrp;
  int buy_p;
};

struct item p[8];

void signout()
{
   printf("\n\t\tSignout successfully!!\n");
   exit(EXIT_FAILURE);
}

void menu()
{
 
 strcpy(p[0].name,"JBL");p[0].mrp=250;p[0].id=0;
 strcpy(p[1].name,"boAt");p[1].mrp=3000;p[1].id=1;
 strcpy(p[2].name,"Sony");p[2].mrp=4500;p[2].id=2;
 strcpy(p[3].name,"oppo");p[3].mrp=2500;p[3].id=3;
 strcpy(p[4].name,"vivo");p[4].mrp=499;p[4].id=4;
 strcpy(p[5].name,"MI ");p[5].mrp=4900;p[5].id=5;
 strcpy(p[6].name,"HP");p[6].mrp=4000;p[6].id=6;
 strcpy(p[7].name,"Lenovo");p[7].mrp=3500;p[7].id=7;
 

 void buy(int i)
 {
    char ch='y';
    int gst=18;
    //15% Discount applied on all the items 
    int discount=p[i].mrp-((p[i].mrp*15)/100);

    //18% GST on the items whose MRP is greater than 500 
    

     p[i].buy_p=discount;
    
    printf("\n\n %d\t\t%s\t%d\t15%c\t\t%d",p[i].id,p[i].name,p[i].mrp,37,p[i].buy_p);
   if(p[i].mrp>500)
    {
        discount+=((p[i].mrp*gst)/100);
        printf("\t\t%d%c ",gst,37);
    }
   
  }

 int choice; 
 printf("_____ITEMS_____\n\n1.HEADPHONES\n2.MOBILES\n3.LAPTOPS\n\n");
 printf("\nENTER YOUR CHOICE : \n");
 scanf("%d",&choice);
 printf("\nItem id:\tName:\tMRP:\tDiscount\tBuying Price\tGST");
 printf("\n______________________________________________________________________");

 switch(choice)
 {
    case 1: 
        for(int i=0;i<3;i++)
        {buy(i) ; }
        cart();
        break;
    case 2:
        for(int j=3;j<6;j++)
        {buy(j);}
        cart();
        break;
    case 3: 
        for(int k=6;k<8;k++)
        {buy(k);}
        cart();
        break;
    default: printf("\nWRONG CHOICE");
  }

 if(total==1)
 {
    if(flag==0)
    {   int size=sizeof(p)/sizeof(p[0]);
        printf("\n\nITEMS IN CART :\n");  
        printf("\n\nITEM\t\tQUANTITY\t\tPRICE\n");  
        printf("_______________________________________________");
        
        for(int i=0;i<size;i++)
        {
          if(hash[i]>=1)
          {
             printf("\n%s\t\t %d\t\t\t %d\n",p[i].name,hash[i],p[i].buy_p);
             sum+=p[i].buy_p*hash[i];
          }
        }
     
          printf("\n\t\t\t  Total amount : %d",sum);
          flag=1;
     }
   }
}

void login()
 {  
   struct login st;
   char username[10];
   char pswd[10];
   FILE *pt1;
   pt1 =fopen("logins.txt","rb");
    
    if(pt1==NULL)
    {
      printf("Error in opening file");
    }

    printf("\nENTER USERNAME: ");
    scanf("%s",&username);
    printf("\nENTER PASSWORD: ");
    scanf("%s",&pswd);
    
    while(fread(&st,sizeof(st),1,pt1))
    {
      printf("%s:%s",st.uname,st.pswd);
     if(strcmp(username,st.uname)==0 && strcmp(pswd,st.pswd)==0)
      {
       printf("\n*******Login successful********\n\n\t*****WELCOME!!*****\n\n");
       f=1;

       printf("\nNAME: %s",st.name);
       printf("\nADDRESS: %s",st.add);
       printf("\nPHONE NO: %s",st.num);
       printf("\nUSERNAME: %s",st.uname);
       printf("\nEMAIL: %s\n",st.email);
       fclose(pt1);
      }
    }
    if(f==1)
    {
     int n;
     printf("\n\n\tENTER YOUR CHOICE: \n\n\t1.DISPLAY ITEMS \n\t2.SIGNOUT\t\t\n");
     scanf("%d",&n);
      switch(n)
      {
        case 1: menu(); break;
        case 2: signout(); break; 
        default: printf("Wrong choice!!");
      }
    }
    if(f==0)
    {
      printf("---Wrong username and password---");}
      fclose(pt1);
    }
  
    void cart()
    { 
      if(f==1)
      { 
        int sum=0;
        char ch='y'; int h;
        printf("\n\n\nTo add any item in cart press(Y) else (N)  :");
        scanf("%s",&ch);
        while(ch=='y' || ch=='Y')
        {
           printf("\nEnter your item id :");
           scanf("%d",&h); 
           hash[h]++; 
           printf("\n\npress 'Y' to add more items else 'N' :\n");
           scanf("%s",&ch);
        }
      
      if(ch=='N' || ch=='n')
      {
        int n;
        printf("\nEnter your choice \n\n1.DISPLAY ITEMS \n\n2.TOTAL AMOUNT \n\n3.SIGNOUT \n");
        scanf("%d",&n);
        switch(n)
            {
              case 1: menu(); break;
              case 2: total=1;break;
              case 3: signout(); break; 
              default: printf("wrong choice");
            }
        }
     }
      
      else if(f==0)
      {
        int n;
        printf("\n\n\n---DO LOGIN TO ADD ITEMS IN CART !---");
        printf("\n\nENTER YOUR CHOICE: \n\n1.DISPLAY ITEMS \n2.LOGIN \n3.EXIT\n");
        scanf("%d",&n);
        switch(n)
        {
          case 1: menu(); break;
          case 2: login(); break; 
          case 3:  break;
          default: printf("wrong choice");
        }
     }
 }


void signup()
{
  int userexist;
  char ch='y';
  
  
  while (ch=='y')
  { 
      
      FILE *p ;
      p=fopen("logins.txt","ab");
      
      struct login st;
      fflush(stdin);
      userexist=0;
      
      char usrname[10];
      char email[20];
      char phnum[10];
      printf("%d",userexist);
      printf("\n\nEnter Name : "); gets(st.name);
      printf("Enter Address :"); gets(st.add);
      printf("Enter Phone number :"); gets(st.num);
      printf("Enter email :"); gets(st.email);
      printf("Enter username: "); gets(st.uname);
      printf("Enter password :"); gets(st.pswd);
      
     //printf("%s",uname);
     strcpy(usrname,st.uname);
     strcpy(email,st.email);
     strcpy(phnum,st.num);
     fwrite(&st,sizeof(st),1,p);
     FILE *pt;
     pt=fopen("logins.txt","rb");
    
        while(fread(&st,sizeof(st),1,pt))
        {
            // printf("%s:%s%d",st.uname,usrname,strcmp(usrname,st.uname));
             if((strcmp(usrname,st.uname)==0) || (strcmp(email,st.email)==0) || (strcmp(phnum,st.num)==0))
             { 
                             userexist=1;
                             fclose(pt);
             }
            
        }
        //printf("%d",userexist);
    
      if(userexist==0)
        { 
        ch='n';}
    if(userexist==1)
    {
      printf("\n\n\tUSER ALREADY EXIST!!");
      printf("\n\n\nTO SIGNUP PRESS 'Y' else 'N': ");
      scanf("%c",&ch);
    }    
  fclose(p);
  }
  //NEW USER
  if(userexist==0)
  {
  printf("\n\n\t----LOGIN WITH USERNAME AND PASSWORD----\n");
  login();
  }

}



void contact()
{
  FILE *pt;
  char ch;
  pt=fopen("contact.txt","r");
  if(pt == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
    do 
    {
      
        ch = fgetc(pt);
        putchar(ch);

    } 
    while(ch != EOF); /* Repeat this if last read character is not EOF */   
    fclose(pt);

}

int main()
{
  int n;
  printf("\tMENU:\n1.LOGIN \n2.SIGNUP\n3.DISPLAY ITEMS\n4.CONTACT US\n");
  scanf("%d",&n);
  switch(n)
  {
    case 1: login(); break;
    case 2: signup(); break;
    case 3: menu(); break;
    case 4: contact();break;  
    default: printf("WRONG CHOICE!!");
  }
}

 



