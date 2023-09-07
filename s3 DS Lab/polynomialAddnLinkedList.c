#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coeff;
    int expo;
    struct node *next;
};
struct node *createPoly(struct node *polynomial,int length);
void readPoly(struct node *polynomial);
void printPoly(struct node *polynomial);
void main()
{
    struct node *poly1,*poly2,*poly3;
    poly1=(struct node*)malloc(sizeof(struct node));
    poly2=(struct node*)malloc(sizeof(struct node));
    poly3=(struct node*)malloc(sizeof(struct node));
    int s1,s2,s3;
    printf("Enter the size of polynomial1: ");
    scanf("%d",&s1);
    poly1=createPoly(poly1,s1);
    readPoly(poly1);
    printf("\nThe first polynomial is : \n");
    printPoly(poly1);
    printf("\nEnter no of terms in polynomial2 : \n");
    scanf("%d",&s2);
    poly2=createPoly(poly2,s2);
    readPoly(poly2);
    printf("The second polynomial is : \n");
    printPoly(poly2);
    s3=s1;
    if(s2>s1)
    s3=s2;
    createPoly(poly3,s3);
    addPoly(poly1,poly2,poly3);
    printf("The resultant polynomial is : \n");
    printPoly(poly3);
}
struct node *createPoly(struct node *polynomial,int length)
{
    int i;
    struct node *temp;
    //temp=(struct node*)malloc(sizeof(struct node));
    for(i=0;i<=length;i++)
    {
        if(i==0)
        {
            if(length==1)
            {
                polynomial->next=NULL;
            }
            temp=polynomial;
        }
        else{
            struct node *newNode;
            newNode=(struct node*)malloc(sizeof(struct node));
            temp->next=newNode;
            newNode->next=NULL;
            temp=newNode;
        } 
    }
    return polynomial;
}
void readPoly(struct node *polynomial)
{
    while(polynomial->next!=NULL)
    {
        printf("Enter coefficient : ");
        scanf("%d",&polynomial->coeff);
        printf("Enter exponent : ");
        scanf("%d",&polynomial->expo);
        polynomial=polynomial->next;
    }
}
void printPoly(struct node *polynomial)
{
    while(polynomial->next!=NULL)
    {
        printf("%d(X^%d)",polynomial->coeff,polynomial->expo);
        polynomial=polynomial->next;
        if(polynomial->next!=NULL)
        printf(" + ");
    }
}
void addPoly(struct node *polynomial1,struct node*polynomial2,struct node*polynomial3)
{
    while(polynomial1->next!=NULL&&polynomial2->next!=NULL)
    {      
    }
}
