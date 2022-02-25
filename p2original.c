#include <stdio.h>
int input_side(){
    int n;
    printf("Enter a length of a triangle :\n ");
    scanf("%d",&n);
    return n;
}
int check_scalene(int a,int b,int c){
    if (a != b && b != c && a != c){
        return 1;
    }
    else if ((a == b && b != c && a != c) || (a != b && b == c && a != c) || (a =! b && b != c && a == c)){
        return 2;
    }
    else if (a == b && b == c && a == c){
        return 3;
    }
}
void output(int a,int c,int isscalene){
    isscalene == 1 ? printf("The triangle is scalane") : (isscalene == 2 ? printf("The triangle is isosceles") : (isscalene == 3 ? printf("The triangle is equilateral") : printf("error")));
}
int main(){
    int a,b,c,isscalene;
    a = input_side();
    b = input_side();
    c = input_side();
    isscalene = check_scalene(a,b,c);
    output(a,c,isscalene);
    return 0;
}