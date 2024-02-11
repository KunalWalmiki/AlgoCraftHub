#include<iostream>
using namespace std;
void pattern1(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            cout << "* ";

        }
        cout << endl;
    }
}
void pattern2(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i + 1; j++) {

            cout << "* " ;
        } cout <<endl;
    }
}
void pattern3(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i+1; j++) {

            cout << j + 1 ;
        } cout << endl;
    }
}
void pattern4(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i + 1; j++) {

            cout << i + 1;

        } cout << endl;
    }
}
void pattern5(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n - i; j++) {

            cout << "* " ;

        }cout << endl;
    }
}
void pattern6(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n - i; j++) {

            cout << j + 1 << " "; 

        }cout << endl;
    }
}
void pattern7(int n) {

    for(int i = 0; i < n ; i++) {

        // spaces 
        for(int j = 0; j < n - i ; j++) {

            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * i + 1; j++) {

            cout << "*";

        }

        // space 
         for(int j = 0; j < n - i ; j++) {

            cout << " ";
        }

        cout << endl;
    }
}
void pattern8(int n) {

    for(int i = 0; i < n ; i++) {

        // spaces 
        for(int j = 0; j < i ; j++) {

            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * n - (2 * i + 1); j++) {

            cout << "*";

        }

        // space 
         for(int j = 0; j < i ; j++) {

            cout << " ";
        }

        cout << endl;
    }
}
void pattern9(int n) {

    for(int i = 0; i < n ; i++) {

        // spaces 
        for(int j = 0; j < n - i ; j++) {

            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * i + 1; j++) {

            cout << "*";

        }

        // space 
         for(int j = 0; j < n - i ; j++) {

            cout << " ";
        }

        cout << endl;
    }
    
    for(int i = 0; i < n ; i++) {

        // spaces 
        for(int j = 0; j < i ; j++) {

            cout << " ";
        }

        // stars
        for(int j = 0; j < 2 * n - (2 * i + 1); j++) {

            cout << "*";

        }

        // space 
         for(int j = 0; j < i ; j++) {

            cout << " ";
        }

        cout << endl;
    }

}
void pattern10(int n) {

    for(int i = 1; i < 2*n; i++) {

        int stars = i;

        if(i > n) stars = 2 * n - i;

        for(int j = 1; j <=stars; j++) {

            cout << "*";
        }

        cout << endl;
    }
}
void pattern11(int n) {

    for(int i = 1; i <= n; i++) {

        int star = 1;

        if(i % 2 == 0) star = 0;

        for(int j = 1; j <= i; j++) {

            cout <<star << " ";
            star = 1 - star;
        }
        cout << endl;
    }
}
void pattern12(int n) {

    int spaces = 6;
    // rows
    for(int i = 1; i <= n; i++) {

        // numbers
        for(int j = 1; j <= i; j++) {

            cout << j;

        } 

        // spaces
        for(int j = 1; j <= spaces; j++) {

            cout << " ";
        }

        // reverse numbers
        for(int j = i; j >= 1; j--) {

            cout << j;
        }
        spaces = spaces - 2;
        cout<<endl;

    }
}
void pattern13(int n) {

    int count = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=i; j++) {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}
void pattern14(int n) {

    for(int i = 0; i <n; i++) {

        for(char ch = 'A'; ch < 'A' + i; ch++) {
            cout <<ch;
        }
        cout << endl;
    }
}
void pattern15(int n) {

    for(int i = 0; i < n; i++) {

        for(char ch = 'A'; ch < 'A' + (n - i); ch++) {

            cout << ch;

        } 
        cout << endl;
    }
}
void pattern16(int n) {

    for(int i = 0; i < n; i++) {

        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {

            cout << ch;
        }
        cout << endl;
    }
}
void pattern17(int n) {

    for(int i = 0; i < n; i++) {

        // spaces
        for(int j = 0; j <= n - i; j++) {
            cout << " ";
        }

        // alphabets
        char ch = 'A'; 
        int breakPoint = (2 * i + 1) / 2; 
        for(int j = 0; j < 2 * i + 1; j ++) {

            cout << ch;
            if(j < breakPoint) ch++;
            else ch--;

        }

        // spaces
        for(int j = 0; j <= n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    
}
void pattern18(int n) {

    for(int i = 0; i < n; i++) {

        for(char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}
void pattern19(int n) {

   int space = 0;

    for(int i = 0; i <=n; i++) {

       
        // stars
        for(int j = 0; j < n - i; j++) {

            cout <<"*";
        }

        // spaces
        for(int j = 1; j <= space; j++) {

            cout << " ";

        }

        // stars
        for(int j = 0; j < n - i; j++) {

            cout <<"*";
        }
        space += 2;
        cout << endl;

    }

     space = 8;

     for(int i = 0; i <n; i++) {

       
        // stars
        for(int j = 0; j < i + 1; j++) {

            cout <<"*";
        }

        // spaces
        for(int j = 1; j <= space; j++) {

            cout << " ";

        }

        // stars
        for(int j = 0; j < i + 1; j++) {

            cout <<"*";
        }
        space -= 2;
        cout << endl;

    }
    

}
int main() {

    int n;
    cout << "Enter the value of n" << endl;
    cin>> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern18(n);
    pattern19(n);



    return 0;
}