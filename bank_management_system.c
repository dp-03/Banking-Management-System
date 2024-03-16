#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  
{
    int choice,n,total_amt=0,amt,ch;
    int min_amt=0;
    int dob_day,dob_month,dob_year;
    char pass[8],name[50],address[500],username[20],dob[11],aadhar[20],phone[15];
    
    printf("\n--------------------------------------BASIC BANKING SYSTEM------------------------------------------\n\n");

    printf("Do you want to create an account?\nIf yes then press 1 and if no then press 2: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Deposit a decent amount (>=1000) to create an account: ");
        scanf("%d", &min_amt);

        if (min_amt >= 1000) 
        {
            total_amt = min_amt; 
            printf("\nFIRST NAME: ");
            getchar();
            fgets(name, sizeof(name), stdin);

            printf("\nLAST NAME: ");
            getchar();
            fgets(name, sizeof(name), stdin);

            printf("\nFATHER'S NAME: ");
            getchar();
            fgets(name, sizeof(name), stdin);

            printf("\nMOTHER'S NAME: ");
            getchar();
            fgets(name, sizeof(name), stdin);

            printf("\nADDRESS: ");
            getchar();
            fgets(address, sizeof(address), stdin);
            
            printf("\nDATE OF BIRTH (DD/MM/YYYY): ");
            scanf("%d/%d/%d", &dob_day, &dob_month, &dob_year);
            getchar();

            printf("\nAADHAR NUMBER (with spaces): ");
            getchar();
            fgets(aadhar, sizeof(aadhar), stdin);

            printf("\nPHONE NUMBER: ");
            fgets(phone, sizeof(phone), stdin);

            printf("\nUSERNAME: ");
            getchar();
            fgets(username, sizeof(username), stdin);

            printf("\nPIN NUMBER: ");
            getchar();
            fgets(pass, sizeof(pass), stdin);

            printf("\n\nACCOUNT CREATED SUCCESSFULLY\n\n");

            do 
            {
                printf("\nEnter the choice:\n");
                printf("1. Deposit\n2. Withdraw\n3. Balance Check\n4. Update Personal Information\n5. Exit\n");
                printf("Please enter a number from 1 to 5: ");
                scanf("%d", &n);

                switch (n) 
                {
                    case 1:
                        printf("Enter the amount that you want to deposit: ");
                        scanf("%d", &amt);
                        if (amt>=0) 
                        {
                            total_amt+=amt; 
                            printf("Money deposited successfully. Total amount is %d\n", total_amt);
                        } 
                        else 
                        {
                            printf("Invalid deposit amount\n");
                        }
                        break;

                    case 2:
                        printf("Enter the amount that you want to withdraw: ");
                        scanf("%d",&amt);
                        if (amt>0&&amt<=total_amt) 
                        { 
                            total_amt-=amt;
                            printf("Money withdrawn successfully. Total amount is %d\n", total_amt);
                        } 
                        else 
                        {
                            printf("Insufficient Balance or Invalid Withdrawal Amount\n");
                        }
                        break;

                    case 3:
                        printf("Total amount is %d\n",total_amt);
                        break;

                    case 4:
                        printf("\nWhat do you want to update?\n");
                        printf("1.FIRST NAME\n2.LAST NAME\n3.FATHER'S NAME\n4.MOTHER'S NAME\n5.ADDRESS\n6.DATE OF BIRTH\n7.AADHAR NUMBER\n8.PHONE NUMBER\n9.USERNAME\n10.PIN NUMBER\n11.EXIT\n");
                        printf("\nEnter your choice:");
                        scanf("%d",&ch);
                        
                        
						switch(ch)
                        {
	                        case 1:
								printf("\nFIRST NAME: ");
		            			getchar();
		            			fgets(name, sizeof(name), stdin);	
								break;
							
							case 2:
								printf("\nLAST NAME: ");
		            			getchar();
		            			fgets(name, sizeof(name), stdin);	
								break;
							
							case 3:
								printf("\nFATHER'S NAME: ");
		            			getchar();
		            			fgets(name, sizeof(name), stdin);	
								break;
								
							case 4:
								printf("\nMOTHERS'S NAME: ");
		            			getchar();
		            			fgets(name, sizeof(name), stdin);	
								break;
								
							case 5:
								printf("\nADDRESS: ");
		            			getchar();
		            			fgets(address, sizeof(address), stdin);
		            			break;
		            			
	            			case 6:
								printf("\nDATE OF BIRTH (DD/MM/YYYY): ");
					            scanf("%d/%d/%d", &dob_day, &dob_month, &dob_year);
					            getchar();
					            break;
	
				            case 7:
								printf("\nAADHAR NUMBER (with spaces): ");
					            getchar();
					            fgets(aadhar, sizeof(aadhar), stdin);
					            break;
					
				            case 8:
								printf("\nPHONE NUMBER: ");
					            fgets(phone, sizeof(phone), stdin);
					            break;
					
				            case 9:
								printf("\nUSERNAME: ");
					            getchar();
					            fgets(username, sizeof(username), stdin);
					            break;
				
				            case 10:
								printf("\nPIN NUMBER: ");
					            getchar();
					            fgets(pass, sizeof(pass), stdin);
					            break;
					            
					        case 11:
					        	printf("\nEXIT");
					        	return 0;
	
							default:
								printf("Invalid Choice\n");
								break;
							}
	                        printf("\nUPDATED SUCCESSFULLY!\n");
	                        break;

                    case 5:
                        printf("Thank you for choosing us!!!\n");
                        return 0;
                        break;

                    default:
                        printf("Invalid Choice\n");
                        break;
                }
            } 
            while (n != 5);
        } 
        else 
        {
            printf("Minimum deposit amount of 1000 is required to create an account.\n");
        }
    } 
    else if (choice == 2) 
    {
        printf("Better luck next time!\n");
    } 
    else 
    {
        printf("Invalid choice\n");
    }

    return 0;
}

