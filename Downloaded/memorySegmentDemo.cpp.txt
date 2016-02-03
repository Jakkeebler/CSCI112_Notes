// Program that demonstrates various memory semgments
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int globalNum = 100; //Data segment
static double globalStaticNum1=100.1; //data segment
int globalNum2; //bss segment

void function() //code segment
{
    short a1 = 5; //stack segment
    int a2 = 10; //stack segment
    char name[10] = "John"; //stack segment
    int *p = new int; // heap segment
    char *p1 = new char; // heap segment
    printf("In function heap: value of pointer p=%u\n", p);
    printf("In function heap: value of pointer p1=%u\n", p1);
    printf("In function stack: address of a1=%u\n", &a1);
    printf("In function stack: address of a2=%u\n", &a2);
    printf("In function stack: address of name=%u\n", name);
    printf("In function stack: address of pointer p=%u\n", &p);
    printf("In function stack: address of pointer p1=%u\n", &p1);
}

int main() //code segment
{
  string name = "hello"; //stack segment
  int a =100; //stack segment
  char *p = new char; // Heap segment
  int *p1 = new int; // Heap segment
  printf("Code segment: address of main=%u\n", &main);
  printf("Code segment: address of function=%u\n", &function);
  printf("Data seg: address of globalNum=%u\n", &globalNum);
  printf("Data seg: address of globalStaticNum1=%u\n", &globalStaticNum1);
  printf("bss segment: address of globalNum2=%d\n", &globalNum2);
  cout << "\nLocal variabiles in main" << endl;
  printf("In main heap: value of pointer p=%u\n", p);
  printf("In main heap: value of pointer p1=%u\n", p1);
  printf("In main stack: address of name=%u\n", &name);
  printf("In main stack: address of a=%u\n", &a);
  printf("In main stack: address of pointer p=%u\n", &p);
  printf("In main stack: address of pointer p1=%u\n", &p1);
  cout << "\nLocal Variables in function" << endl;
  function();
  return 0;
}