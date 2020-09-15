#include<stdio.h>
struct preferences
{
    const char *food;
    float exercise_hours;    
};

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};
void catalog(struct fish f)
{
    printf("%s is a %s with %i teeth. He is %i \n.",f.name,f.species,f.teeth,f.age);
}
void label(struct fish f1)
{
    printf("Name : %s\nSpecies : %s\n %i years old, %i teeth",f1.name,f1.species,f1.age,f1.teeth);
}
void main()
{
    struct fish snappy={"snappy","pirranha",65,3,{"Meat",7.5}};
    catalog(snappy);
    label(snappy);
    printf("Snappy likes to eat %s\n",snappy.care.food);
    printf("Snappy likes to exercise for %f hours.\n",snappy.care.exercise_hours);
    
}