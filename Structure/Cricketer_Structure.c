#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[50];
        int age;
        int  no_of_matches;
        float batting_average;
    } cricketer;

    cricketer arr[20];
    strcpy(arr[0].name, "Sachin Tendulkar");
    arr[0].age = 35;
    arr[0].no_of_matches = 190;
    arr[0].batting_average = 51.2;
    
    strcpy(arr[1].name, "Rohit Sharma");
    arr[1].age = 32;
    arr[1].no_of_matches = 180;
    arr[1].batting_average = 52.4;

    strcpy(arr[2].name, "M.S Dhoni");
    arr[2].age = 32;
    arr[2].no_of_matches = 180;
    arr[2].batting_average = 52.4;

    strcpy(arr[3].name, "Kapil Dev");
    arr[3].age = 32;
    arr[3].no_of_matches = 180;
    arr[3].batting_average = 52.4;

    strcpy(arr[4].name, "Yuvraj Singh");
    arr[4].age = 32;
    arr[4].no_of_matches = 180;
    arr[4].batting_average = 52.4;

    strcpy(arr[5].name, "Anil Kumble");
    arr[5].age = 32;
    arr[5].no_of_matches = 180;
    arr[5].batting_average = 52.4;

    strcpy(arr[6].name, "rahul Dravid");
    arr[6].age = 32;
    arr[6].no_of_matches = 180;
    arr[6].batting_average = 52.4;

    strcpy(arr[7].name, "Jasprit Bumrah");
    arr[7].age = 32;
    arr[7].no_of_matches = 180;
    arr[7].batting_average = 52.4;

    strcpy(arr[8].name, "Goutam Gambhir");
    arr[8].age = 32;
    arr[8].no_of_matches = 180;
    arr[8].batting_average = 52.4;

    strcpy(arr[9].name, "Virat Kohli");
    arr[9].age = 32;
    arr[9].no_of_matches = 180;
    arr[9].batting_average = 52.4;

    strcpy(arr[10].name, "Arshdip Singh");
    arr[10].age = 32;
    arr[10].no_of_matches = 180;
    arr[10].batting_average = 52.4;

    strcpy(arr[11].name, "Sreyas Iyer");
    arr[11].age = 32;
    arr[11].no_of_matches = 180;
    arr[11].batting_average = 52.4;

    strcpy(arr[12].name, "Rinku Singh");
    arr[12].age = 32;
    arr[12].no_of_matches = 180;
    arr[12].batting_average = 52.4;

    strcpy(arr[13].name, "Ishant Sharma");
    arr[13].age = 32;
    arr[13].no_of_matches = 180;
    arr[13].batting_average = 52.4;

    strcpy(arr[14].name, "Sunil Gavaskar");
    arr[14].age = 32;
    arr[14].no_of_matches = 180;
    arr[14].batting_average = 52.4;

    strcpy(arr[15].name, "Rishav Pant");
    arr[15].age = 32;
    arr[15].no_of_matches = 180;
    arr[15].batting_average = 52.4;

    strcpy(arr[16].name, "Rabindra Jadeja");
    arr[16].age = 32;
    arr[16].no_of_matches = 180;
    arr[16].batting_average = 52.4;

    strcpy(arr[17].name, "Ajay Jadeja");
    arr[17].age = 32;
    arr[17].no_of_matches = 180;
    arr[17].batting_average = 52.4;

    strcpy(arr[18].name, "Hardik Pandya");
    arr[18].age = 32;
    arr[18].no_of_matches = 180;
    arr[18].batting_average = 52.4;

    strcpy(arr[19].name, "Suresh Raina");
    arr[19].age = 32;
    arr[19].no_of_matches = 180;
    arr[19].batting_average = 52.4;

    for(int i=0;i<=20;i++){
        printf("\nName: %s\nAge: %d\nNumber of matches: %d\nBatting Average: %.2f\n",arr[i].name,arr[i].age,arr[i].no_of_matches,arr[i].batting_average);
    }

    return 0;
}