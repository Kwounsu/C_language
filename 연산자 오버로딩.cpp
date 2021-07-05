#include <cstdio>
using namespace std;
 
struct Student {
    char name[20];
    int age;
    double height;
    bool operator<(Student right) {
        return age<right.age;
    }
};

int main() {
    Student s1 = {"멋쟁이" , 17 , 178.5};
    Student s2 = {"이쁜이" , 18 , 165.9};
 
    if (s1<s2) printf("%s wins!\n", s2.name);
    else      printf("%s wins!\n", s1.name);
 
    return 0;
}
