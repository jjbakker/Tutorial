#include <cstdio>

int main() {
    
    // some int types
    short a = 10;
    int   b = 11;
    long  c = 12;
    long long d = 13;

    printf("short a: %hd\n", a );
    printf("int   b: %d\n", b );
    printf("long  c: %ld\n", c );
    printf("ll    d: %lld\n", d );

    // literals
    unsigned short e = 0b1010'1010;
    printf("us    e: %hu\n", e );

    unsigned long long f = 0xFFFF'FFFF'FFFF'FFFF;
    printf("ull   f: %llu\n", f );
    printf("ull(x)f: %llx\n", f );

    // double
    double plancks_constant = 6.62607004e-34;
    printf("double: %le\n", plancks_constant );
    printf("double: %lg\n", plancks_constant );
 
    // char
    printf("Size of wchar_t: %ld\n" ,  sizeof(wchar_t));
  

    //unicode?
    //printf(U'\U0001F37A');

    //boolean
    bool b0 = false;
    bool b1 = true;
    printf("b0 (false): %d, b1 (true): %d\n", b0, b1);


    int arr[] = {1,2,3,4};
    printf("A[3]: %d\n", arr[3]);

    // range based loop
    for (int arr_i : arr)
    printf("A[%d]: %d\n", arr_i, arr[arr_i]);

    // enum
    // enum class Colors {Red, Blue, White}; 
    // Colors myColor = Colors::Blue;

    // printf("Color %d\n", myColor);

    //methods as struct -> members are public
    struct Yr {
        void add_year() {
            year++;
        }
        bool set_year(int new_year) {
            if( new_year < 2020) return false;
            year = new_year;
            return true;
        }
        int get_year() {
            return year;
        }
        private:
           int year;
    };
 
    Yr y1;
    y1.set_year(2025);

    printf("y1.year: %d\n", y1.get_year());

    //methods as class -> members are private by default
    //                    allways initialized to 0
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

    LongClock y2;

    printf("uninitialized y2.year: %d\n", y2.get_year());
    
    y2.set_year(3000);

    printf("y2.year: %d\n", y2.get_year());


    LongClock y3(2050);

    printf("y3.year: %d\n", y3.get_year());

}