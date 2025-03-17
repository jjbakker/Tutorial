#include <cstdio>

int main() {

    class LongClock {
        int year;
        public:
            // constructor(s)
            LongClock() {
                year=2019;
            } 
            LongClock(int year_in) {
                year=year_in;
            } 
    
    
            int get_year() {
                return year;
            }
            bool set_year(int new_year) {
                if( new_year < 2020) return false;
                year = new_year;
                return true;
            }
        };
    




    // pointer name and type
    int x{};
    printf("x: %d\n", x);
    int *px = &x;
    printf("px: %p\n", px);
    printf("&x: %p\n", &x);

    *px = 2345;
    printf("*px: %d\n", *px);
    printf("x: %d\n", x);
    printf("px: %p\n", px);

    // member of pointer operator
    LongClock clock;
    LongClock* clock_ptr = &clock;
    clock_ptr->set_year(4000);

    printf("MOP: clock_ptr->get_year(): %d\n", clock_ptr->get_year());

    printf("Dereff: (*clock_ptr).get_year(): %d\n", (*clock_ptr).get_year());

    // decayed pointer (points to first element in array)
    // passing array with both pointer and length

    char lower[] = ("abcde");
    lower[10] = 'g';
    printf("out of bound: lower[10]: %c\n", lower[10]);
    printf("out of bound: lower[9]: %c\n", lower[9]);

    printf("out of bound: lower: %s\n", lower);

}