#include<stdio.h>
#include<string.h>

//define enum
typedef enum { ROLLNUMB, AGEYEAR, AGEMONTH } eInfoTypes;

//struct contains union
//this reduces size of InfoData from 24bytes to 8bytes
typedef struct
{
    eInfoTypes e_Infotype;

    union //Anonymous union
    {
        int RollNumber;
        int AgeYear;
        int AgeMonth;
    };
} InfoData;


//function to read stored data
void readInformation (const InfoData *MyInfoData, InfoData *ReadData)
{
    switch(MyInfoData->e_Infotype)
    {
        case ROLLNUMB:
            ReadData->RollNumber = MyInfoData->RollNumber;  // read MyInfoData->RollN
            break;

        case AGEYEAR:
            ReadData->AgeYear = MyInfoData->AgeYear;    // read MyInfoData->AgeYear
            break;

        case AGEMONTH:
            ReadData->AgeMonth = MyInfoData->AgeMonth;
            break;
    }
}

void writeInformation(InfoData *MyInfoData)
{
    switch(MyInfoData->e_Infotype)
    {
        case ROLLNUMB:
            MyInfoData->RollNumber = 100; // write MyInfoData->RollNumber
            break;

        case AGEYEAR:
            MyInfoData->AgeYear = 20; // write MyInfoData->AgeYear
            break;

        case AGEMONTH:
            MyInfoData->AgeMonth = 240; // write MyInfoData->AgeMonth
            break;
    }
}


int main()
{
    //structure variable to store data
    InfoData sInfoData = {0};

    //struct var to read data
    InfoData sReadInfoData = {0};

    //enum variable initialize with ROLLNUMB
    sInfoData.e_Infotype = ROLLNUMB;

    //write roll num to the struct var
    writeInformation(&sInfoData);

    //read roll num from the struct var
    readInformation(&sInfoData, &sReadInfoData);

    //print read roll num
    printf("Roll Number %d\n", sReadInfoData.RollNumber);


    sInfoData.e_Infotype = AGEYEAR;
    writeInformation(&sInfoData);
    readInformation(&sInfoData, &sReadInfoData);

    sInfoData.e_Infotype = AGEMONTH;
    writeInformation(&sInfoData);
    readInformation(&sInfoData, &sReadInfoData);

    printf("Age in month %d\n", sReadInfoData.AgeMonth);

    return 0;


}
