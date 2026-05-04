#pragma once
typedef struct {
    int Highest_Degree;
    int coefficient[10];
} polynomial;

void addpoly(polynomial a, polynomial b, polynomial* c);
void print(polynomial var);