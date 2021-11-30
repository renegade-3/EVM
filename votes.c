#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char heading()//HEADING
{

    system("cls");
              printf("\n\t\t    PES UNIVERSITY\n");
              printf("------------------------------------------------------------------------------------\n\n");
              printf("\t\t  WELCOME TO THE PESU STUDENT PRESIDENT ELECTION\n\n");
              printf("\t\t\t   **************************\n");
              printf("\n\n\n");
}
int main()
{
              //VARIABLE DECLARATION
              FILE *fp1,*fp2,*fp3;
              int num=0,year,ch,n=0,no,res,a[50],i,go,m=1,len,j,sum=0;

              char name1[80],branch[20],cand[20],name2[80],voter[80],che[20],c,v;
     float perc;

    goto go;

                           go :

                                         system("cls");

                                         fflush(stdin);

                                         heading();

                                         printf("\n\nWELCOME :  %s\n\n",name1);

                                         printf("1.For voting\n2.List of voters\n3.List of Candidates\n4.Exit\n");

                                         printf("\n\n\nEnter Response: ");

                                         scanf("%d",&ch);

                                         system("cls");

                                         fp1=fopen("candidates.txt","r");

                                         for(c=getc(fp1);c!=EOF;c=getc(fp1))//for finding no of candidates

                                                       if(c == '\n')

                                                                    n = n + 1;

            fclose(fp1);



                           if(ch==1)

                           {

                                         system("cls");

                                         heading();
goto starting;
 starting:          system("cls");
              heading();
              fflush(stdin);
              //USER ENTRY
              printf("\n\n\t\t\t  ENTER NAME:");
    gets(name1);

    printf("\t\t\t  ENTER YEAR:");
              scanf("%d",&year);
              printf("\t\t\t  ENTER BRANCH:");
              scanf("%s",branch);
              fp2 = fopen("voters.txt","r");
              while(fscanf(fp2,"%s",name2)!= EOF)
    {
      if(stricmp(name1,name2)==0)
        {
            printf("\nYou have already voted.\n");

   goto starting;
        }
    }
                           fclose(fp2);
                           fp2 = fopen("voters.txt","a");

                           fprintf(fp2,"%s\n",name1);


                           fclose(fp2);
                           printf("**************\n");
                           system("cls");
                           heading();
                           printf("Rule Book:\n\n");
                           printf("1.You can vote only once.\n2.Enter names as per registered in college.\n");
                           printf("3.Student from any branch can participate.\n4.Please be fair and impartial in voting.\n");
                           printf("\n\n\n\n\n\n\n\npress 1 to continue:");
                           scanf("%d",&no);
                           if(no==1)
                                         {
                                                      system("cls");
                                                      heading();
                                         }
                                         printf("\n LIST OF CONTESTING CANDIDATES:\n\n");

                                         fp1 = fopen("candidates.txt","r");
                                         m=1;
                                         for(i=0;i<n;i++)
                                         {
                                            if(fgets(cand,20,fp1)>0)
                                                printf("%d.%s",m,cand);
                                            m=m+1;
                                         }
                                         fclose(fp1);
                                         fp3 = fopen("number.txt","r");
                                          for(i=0;i<n;i++)
                                         {

                                                       fscanf(fp3,"%d",&a[i]);

                                         }

                                         printf("\n\nEnter Your Response:");

                                         scanf("%d",&res);

                                         i = res-1;

                                         a[i] = a[i] + 1;

                                         fclose(fp3);



                                         fp3 = fopen("number.txt","w");

                                         for(i=0;i<n;i++)

                                                       {

                                                       fprintf(fp3,"%d\n",a[i]);

                                                       }

                                         fclose(fp3);

                                         printf("\nYour response has been submitted successfully\n");

            heading();
   printf("Thank you for voting and have a nice day!\n");

   printf("\n\n\n\n\n\n\n\npress 1 to continue:");
            scanf("%d",&no);
            if(no==1)
                                         {
                                                      system("cls");
                                                       goto starting;
                                         }


            }



              else if(ch==2)

              {

                           system("cls");

                           heading();



                           fp2=fopen("voters.txt","r");

                           m=1;

                           for(i=0;i<1000;i++)

                           {
                                         if(fgets(voter,20,fp2)>0)
                                         {
                                                       printf("%d.%s",m,voter);
                                                       m=m+1;
                                         }
                           }

                           m=1;

                           fclose(fp2);

                           printf("\n\nEnter 1 to return back to menu:");

                           scanf("%d",&no);

                           if(no==1)

                                         goto go;

              }

              else if(ch==3)

              {

                           system("cls");

                                         heading();



                                         printf("\n LIST OF CONTESTING CANDIDATES:\n\n");

                                         fp1 = fopen("candidates.txt","r");

                                         for(i=0;i<n;i++)

                                         {

                                              if(fgets(cand,20,fp1)>0)
                                                 printf("%d.%s",m,cand);
                                              m=m+1;
                                         }

                           m=1;

                           printf("\n\nEnter 1 to return back to menu:");

                           scanf("%d",&no);

                           if(no==1)

                                         goto go;

              }

              else
     {
                heading();

                           system("cls");

                           fflush(stdin);

                           heading();

                           fp3 = fopen("number.txt","r");

                           fp1 = fopen("candidates.txt","r");

                           m=1;

                           printf("\n\nS.no\t\tNo of votes\t\tCandidate\n");

                           printf("_________________________________________________\n");

                           for(i=0;i<n;i++)

                           {

                                         if(fgets(cand,20,fp1)>0)

                                         {

                                                       if(fscanf(fp3,"%d",&num)>0)

                                                       {

                                                                    printf("%d.\t\t %d \t\t\t%s\n",m,num,cand);

                                                                    m=m+1;

                                                       }

                                                       else break;

                                         }

                                         else break;

                           }



                           m=1;
                           printf("%d",a[0]);
                           printf("%d",a[1]);
                           printf("%d",a[2]);
                           printf("%d",a[3]);
if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3])
  {
   printf("James won with votes of %d\n",a[0]);
  }
if(a[1]>a[0]&&a[1]>a[2]&&a[1]>a[3])
  {
   printf("Suresh won with votes of %d\n",a[1]);
  }
if(a[2]>a[0]&&a[2]>a[1]&&a[2]>a[3])
  {
   printf("Karim won with votes of %d\n",a[2]);
  }
if(a[3]>a[0]&&a[3]>a[1]&&a[3]>a[2])
  {
   printf("Savitri won with votes of %d\n",a[3]);
  }
if(a[0]==a[1]&&a[0]>a[2]&&a[0]>a[3])
  {
   printf("James and Suresh tied with votes of %d",a[0]);
  }
if(a[0]>a[1]&&a[0]==a[2]&&a[0]>a[3])
  {
   printf("James and Karim tied with votes of %d",a[0]);
  }
if(a[0]>a[1]&&a[0]>a[2]&&a[0]==a[3])
  {
   printf("James and Savitri tied with votes of %d",a[0]);
  }
if(a[1]>a[0]&&a[1]>a[3]&&a[1]==a[2])
  {
   printf("Suresh and Karim tied with votes of %d",a[1]);
  }
if(a[1]>a[0]&&a[1]>a[2]&&a[1]==a[3])
  {
   printf("Suresh and Savitri tied with votes of %d",a[1]);
  }
if(a[2]>a[0]&&a[2]>a[1]&&a[2]==a[3])
  {
   printf("Karim and Savitri tied with votes of %d",a[1]);
  }
if(a[0]==a[1]&&a[0]==a[2]&&a[0]>a[3])
  {
   printf("James, Suresh and Karim tied with votes of %d",a[0]);
  }
if(a[0]==a[1]&&a[0]==a[3]&&a[0]>a[2])
  {
   printf("James, Suresh and Savitri tied with votes of %d",a[0]);
  }
if(a[1]==a[2]&&a[1]==a[3]&&a[1]>a[0])
  {
   printf("Suresh, Karim and Savitri tied with votes of %d",a[0]);
  }
if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
{
    printf("James, Suresh,Karim and Savitri all tied with votes of %d",a[0]);
}


                           fclose(fp1);

                           fclose(fp3);

                           printf("\n\n\t\t\t   *******THANK YOU*******\n \t\t\t   *******STAY SAFE*******");

                           exit(0);
}

}
