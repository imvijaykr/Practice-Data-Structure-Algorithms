#include<iostream>
using namespace std;
char getGrade(int marks){
    // if(marks>=90){
    //     return 'A';
    // }
    // else if(marks>=80){
    //     return 'B';
    // }
    // else {
    //     return 'F';
    // }

    switch(marks/10){
        case 9 : return 'A';
        break;
        case 8 : return 'B';
        break;
        case 7 : return 'C';
        break;
        case 6 : return 'D';
        break;
        default : return 'E';
    }
}
int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    char FinalGrade = getGrade(marks);
    cout<<FinalGrade;
    return 0;

}