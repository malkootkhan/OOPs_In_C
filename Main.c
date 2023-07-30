#include <stdlib.h>
#include <stdio.h>

#define CLASS struct

typedef CLASS Mobile Mobile;
typedef CLASS string string;

CLASS string {
    char str[100];
};

CLASS Mobile {

    string mobileBrand;
    string mobileModelName;
    double mobilePrice;
};
string getMBrand(Mobile* self) { return self->mobileBrand; }
string getMModelName(Mobile* self) { return self->mobileModelName; }
double getMPrice(Mobile* self) { return self->mobilePrice; }
void setMBrand(Mobile* self, string brand){ self->mobileBrand = brand; }
void setMModelName(Mobile* self, string mName) { self->mobileModelName = mName; }
void setMPrice(Mobile* self,double price){ self->mobilePrice = price; }

int main()
{

    string brand;
    string model;
    double price;
    printf("Enter the mobile brand:\n");
    scanf(" %s", brand.str);
    printf("Enter the mobile model name:\n"); fflush(stdin);
    scanf(" %s", model.str); 
    printf("Enter the mobile price:\n"); fflush(stdin);
    scanf_s("%lf",&price);

    Mobile mobile;
    setMBrand(&mobile,brand);
    setMModelName(&mobile, model);
    setMPrice(&mobile, price);
    printf("Mobile Details\n");
    printf("Mobile Brand: %s\n", getMBrand(&mobile));
    printf("Mobile Model Name: %s\n", getMModelName(&mobile));
    printf("Mobile Price : %f\n", getMPrice(&mobile));
    return 0;
}