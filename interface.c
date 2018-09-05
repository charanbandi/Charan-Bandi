#include <stdio.h>
int main()
{
printf("TELECOM OPERATOR APPLICATION\n");
int count=0,j=0;
    while(j==0)
    {
        printf("\nSelect the action to perform:\n\n");
        printf("1.Add data for postpaid plan:\n");
        printf("2.View postpaid plans:\n");
        printf("3.Select Filter\n");
        printf("4.EXIT\n\n");
        int index[10],pMonthly[10],pFreeInt[10],pFreeCall[10],pFreeSMS[10],pCallCharges[10],pSMSCharges[10],pDataCharges[10],pRoam[10];
        int selection;
        scanf("%d",&selection);
        char str[10][20];
        gets(str[0]);

    switch (selection)
    {
    case 1:
        printf("Add data for a postpaid plan %d:\n\n",count+1);
        printf("Plan Name:");
        gets(str[count]);
        printf("Monthly Rental (₹/month):");
        scanf("%d",&pMonthly[count]);
        printf("Free Internet (Mb/month):");
        scanf("%d",&pFreeInt[count]);
        printf("Free Calls (in Minutes):");
        scanf("%d",&pFreeCall[count]);
        printf("Free Sms (in Total):");
        scanf("%d",&pFreeSMS[count]);
        printf("Call Charges (after quota limit in ₹/min):");
        scanf("%d",&pCallCharges[count]);
        printf("Sms Charges (after quota limit in ₹/SMS):");
        scanf("%d",&pSMSCharges[count]);
        printf("Data Charges (after quota limit in ₹/Mb):");
        scanf("%d",&pDataCharges[count]);
        printf("Roaming charges:");
        scanf("%d",&pRoam[count]);
        count++;
        break;
    case 2:
        printf("Plan List\n\n");
        for(int i=0;i<count;i++)
        {
        printf("************************************************************\n");
        printf("Postpaid plan %d:\n",count+1);
        printf("Plan Name:%s",str[i]);
        printf("\n");
        printf("Monthly Rental (₹/month): %d\n",pMonthly[i]);
        printf("Free Internet (Mb/month):%d\n",pFreeInt[i]);
        printf("Free Calls (in Minutes):%d\n",pFreeCall[i]);
        printf("Free Sms (in Total):%d\n",pFreeSMS[i]);
        printf("Call Charges (after quota limit in ₹/min):%d\n",pCallCharges[i]);
        printf("Sms Charges (after quota limit in ₹/SMS):%d\n",pSMSCharges[i]);
        printf("Data Charges (after quota limit in ₹/Mb):%d\n",pDataCharges[i]);
        printf("Roaming charges:%d\n",pRoam[i]);
        }
        break;
        case 3:
        printf("Filter By:\n");
        printf("1.Monthly Rental\n");
        printf("2.Free Internet:\n");
        printf("4.Free Calls\n");
        printf("5.GOTO Main menu\n\n");
        int sel,fav;
        scanf("%d",&sel);
        switch(sel)
        {
            case 1:
            printf("Enter selected monthly rental choice:\n");
            scanf("%d",&fav);
            for(int i=0;i<count;i++)
            {
                if(pMonthly[i]==fav)
                {
        printf("Postpaid plan %d:\n",count+1);
        printf("Plan Name:%s",str[i]);
        printf("\n");
        printf("Monthly Rental (₹/month): %d\n",pMonthly[i]);
        printf("Free Internet (Mb/month):%d\n",pFreeInt[i]);
        printf("Free Calls (in Minutes):%d\n",pFreeCall[i]);
        printf("Free Sms (in Total):%d\n",pFreeSMS[i]);
        printf("Call Charges (after quota limit in ₹/min):%d\n",pCallCharges[i]);
        printf("Sms Charges (after quota limit in ₹/SMS):%d\n",pSMSCharges[i]);
        printf("Data Charges (after quota limit in ₹/Mb):%d\n",pDataCharges[i]);
        printf("Roaming charges:%d\n",pRoam[i]);
                }
            }
            break;
            case 2:
            printf("Enter selected Free Internet\n");
            scanf("%d",&fav);
            for(int i=0;i<count;i++)
            {
                if(pFreeInt[i]==fav)
                {
        printf("Postpaid plan %d:\n",count+1);
        printf("Plan Name:%s",str[i]);
        printf("\n");
        printf("Monthly Rental (₹/month): %d\n",pMonthly[i]);
        printf("Free Internet (Mb/month):%d\n",pFreeInt[i]);
        printf("Free Calls (in Minutes):%d\n",pFreeCall[i]);
        printf("Free Sms (in Total):%d\n",pFreeSMS[i]);
        printf("Call Charges (after quota limit in ₹/min):%d\n",pCallCharges[i]);
        printf("Sms Charges (after quota limit in ₹/SMS):%d\n",pSMSCharges[i]);
        printf("Data Charges (after quota limit in ₹/Mb):%d\n",pDataCharges[i]);
        printf("Roaming charges:%d\n",pRoam[i]);
                }
            }
            break;
            case 3:
            printf("Enter selected Free Calls:\n");
            scanf("%d",&fav);
            for(int i=0;i<count;i++)
            {
                if(pFreeCall[i]==fav)
                {
        printf("Postpaid plan %d:\n",count+1);
        printf("Plan Name:%s",str[i]);
        printf("\n");
        printf("Monthly Rental (₹/month): %d\n",pMonthly[i]);
        printf("Free Internet (Mb/month):%d\n",pFreeInt[i]);
        printf("Free Calls (in Minutes):%d\n",pFreeCall[i]);
        printf("Free Sms (in Total):%d\n",pFreeSMS[i]);
        printf("Call Charges (after quota limit in ₹/min):%d\n",pCallCharges[i]);
        printf("Sms Charges (after quota limit in ₹/SMS):%d\n",pSMSCharges[i]);
        printf("Data Charges (after quota limit in ₹/Mb):%d\n",pDataCharges[i]);
        printf("Roaming charges:%d\n",pRoam[i]);
                }
            }
            break;
            case 4:
            printf("Enter selected Free SMS:\n");
            scanf("%d",&fav);
            for(int i=0;i<count;i++)
            {
                if(pFreeSMS[i]==fav)
                {
        printf("Postpaid plan %d:\n",count+1);
        printf("Plan Name:%s",str[i]);
        printf("\n");
        printf("Monthly Rental (₹/month): %d\n",pMonthly[i]);
        printf("Free Internet (Mb/month):%d\n",pFreeInt[i]);
        printf("Free Calls (in Minutes):%d\n",pFreeCall[i]);
        printf("Free Sms (in Total):%d\n",pFreeSMS[i]);
        printf("Call Charges (after quota limit in ₹/min):%d\n",pCallCharges[i]);
        printf("Sms Charges (after quota limit in ₹/SMS):%d\n",pSMSCharges[i]);
        printf("Data Charges (after quota limit in ₹/Mb):%d\n",pDataCharges[i]);
        printf("Roaming charges:%d\n",pRoam[i]);
                }
            }
            break;
            case 5:
            break;
        }
        
        case 5:
        printf("EXIT");
        j=1;
        break;
        
        default:
        printf("EXIT");
        j=1;
    }
    }

    return 0;
}
