#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* dayName;
    int date;
    char* activity;
} day;

void createDay(day* calendar){
    calendar->dayName = (char *)malloc(sizeof(char)*12);
    calendar->activity = (char *)malloc(sizeof(char)*100);
    printf("\nEnter the name of the Day: ");
    scanf("%s", calendar->dayName);
    printf("\nEnter the date: ");
    scanf("%d", &calendar->date);
    printf("\nEnter the activity");
    scanf("%s", calendar->activity);
}

void read(day* calendar, int size){
    printf("\nEnter the days' activity details: ");
    for(int i=0; i<size; i++){
        createDay(&calendar[i]);
    }
}

void display(day* calendar, int size){
    for(int i=0;i<size; i++){
        printf("Day: %s\tDate: %d\tActivity:%s\t", calendar[i].dayName, calendar[i].date, calendar[i].activity);
        printf("\n");
    }
}

void freeDays(day* calendar, int size){
    for(int i=0;i<size; i++){
        free(calendar[i].dayName);
        free(calendar[i].activity);
    }
    free(calendar);
}

int main(){
    printf("\n Enter the number of days:\n");
    int n = 0;
    scanf("%d", &n);
    day* calendar = (day*) malloc(sizeof(day)*n);
    if(calendar == NULL){
        printf("\nInsufficient Memory\n");
        return 1;
    }
    read(calendar, n);
    display(calendar, n);
    freeDays(calendar, n);
    return 0;
}