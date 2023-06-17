
/*made by akash*/
#include <stdio.h>
#include <conio.h>

int dec();
float con1(void);
float con2(void);
float con3(void);
float con4(void);
float con5(void);
int sw();

int main()
{
    dec();
    sw();

    return 0;
}

int sw() {
    int b;
    float c;
    printf("Enter the no that you want to covert\n");
    scanf("%d",&b);
    switch (b)
    {
    case 1:
        c=con1();
        printf("The value of the mile is:%f ", c);
        break;
    case 2:
        c=con2();
        printf("The value of the foot is:%f ", c);
        break;
    case 3:
        c=con3();
        printf("The value of the inches is:%f ", c);
        break;
    case 4:
        c=con4();
        printf("The value of the kg is:%f ", c);
        break;
    case 5:
        c=con5();
        printf("The value of the meter is:%f ", c);
        break;
    default:
        printf("please enter the correct no !!!");
        break;
    }

}



int dec() {
    printf("------------------------------------------------\n");
    printf("Please insert a sutable no you want to search\n");
    printf(" PRESS 1.For 'convert KMS to MILE' \n");
    printf(" PRESS 2.For 'convert INCHES to FOOT' \n");
    printf(" PRESS 3.For 'convert CM to INCHES ' \n");
    printf(" PRESS 4.For 'convert POUND to KGS ' \n");
    printf(" PRESS 5.For 'convert INCHES to METER'\n");
    printf("--------------------------------------------------\n");
}

float con1() {

    //kms to mile
    int km;
    float i;
    printf("Enter the amount of km is:\n");
    scanf("%d",&km);
    i= km * 0.621;

    return i;

}
float con5() {
    //inches to meter
    int inch;
    float i;
    printf("Enter the amount of inches is:\n");
    scanf("%d",&inch);
    i= inch * 0.025;

    return i;

}
float con2() {
    //inches to foot
    int inch;
    float i;
    printf("Enter the amount of inches:\n");
    scanf("%d",&inch);
    i= inch * 0.083;

    return i;

}
float con3() {
    //cm to inches
    int cm;
    float i;
    printf("Enter the amount of cetimeter:\n");
    scanf("%d",&cm);
    i= cm * 0.39;

    return i;

}
float con4() {
    //pound to kgs
    int pound;
    float i;
    printf("Enter the amount of pound:\n");
    scanf("%d",&pound);
    i= pound * 0.45;

    return i;

}