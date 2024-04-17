

#include "Company.h"



int main()
{
    int help = 1;
	char help2[40];
    Company cmp;

    while (help)
    {   
        printf("        MENU:      \n");
        printf("1.Press 1 to add worker. \n");
        printf("2.Press 2 to fire worker. \n");
        printf("3.Press 3 to print information for worker. \n");
        printf("4.Press 4 to raise worker. \n");
        printf("5.Press 5 to view list of all workers from certain position.\n");
        printf("6.Press 0 to exit from the menu.\n");
		
		for (int i = 0; i < 40; i++)
			help2[i]=getc(stdin);
		printf("\n\n%s\n\n", help2);

		/*
        switch (help)
        {
        case 1:
            printf("1.For employee press 1.\n2.For Production Worker press 2.\n");
            scanf_s("%d", &help);
            char name[20];
            char familyName[20];
            char personalID[20];
            int workingYears;
            if (help == 1)
            {
               
                double fullTimeSalary;
                printf("Enter the employee first name: ");
                scanf_s("%s", name);
                printf("Enter the employee last name: ");
                scanf_s("%s", familyName);
                printf("Enter the employee personal ID: ");
                scanf_s("%s", personalID);
                printf("Enter the employee working years: ");
                scanf_s("%d", &workingYears);
                printf("Enter the employee full time salary: ");
                scanf_s("%f", &fullTimeSalary);
                cmp.Add(new Employee(name, familyName, personalID, workingYears, fullTimeSalary));

            }

            else if (help == 2)
            {
                int workingDays;
                double paymentPerDay;
                printf("Enter the production worker first name: ");
                scanf_s("%s", name);
                printf("Enter the production worker last name: ");
                scanf_s("%s", familyName);
                printf("Enter the production worker personal ID: ");
                scanf_s("%s", personalID);
                printf("Enter the production worker years: ");
                scanf_s("%d", &workingYears);
                printf("Enter the production worker working days: ");
                scanf_s("%d", &workingDays);
                printf("Enter the production worker payment per day: ");
                scanf_s("%f", &paymentPerDay);

                cmp.Add(new ProductionWorker(name, familyName ,personalID, workingYears, workingDays, paymentPerDay));
                
            }
            break;
        
        case 2:
            char personalID_2[20];
            printf("Enter worker personal ID: ");
            scanf_s("%s", personalID_2);
            cmp.Remove(personalID_2);
            break;
          
        case 3:
            char personalID_3[20];
            printf("Enter worker personal ID: ");
            scanf_s("%s", personalID_3);
            cmp.PrintWorker(personalID_3);
            break;

        case 4:
            char pID[20];
            double salary; 
            printf("Enter personal ID of the person, who want to promote: ");
            scanf_s("%s", pID);
            printf("Enter the new salary for the employee: ");
            scanf_s("%f", &salary);
            cmp.Promote(pID, salary);
            break;
        case 5:
            int position;
            printf("Enter the position of workers that you want to view:\nEnter 1 for Employee or 2 for Production worker.");
            scanf_s("%d", &position);
            cmp.PrintPosition(position);
            break;

        }

        


    }
    */
}

