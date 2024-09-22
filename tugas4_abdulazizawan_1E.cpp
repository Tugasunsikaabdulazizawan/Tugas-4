#include <stdio.h>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printFactors(int n) {
    printf("Faktor dari %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int batas;
    printf("Masukkan batas tertentu: ");
    scanf("%d", &batas);

    int totalGanjil = 0, totalGenap = 0, totalPrima = 0;

    // Menampilkan bilangan genap
    printf("Bilangan Genap: ");
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            totalGenap += i;
            printFactors(i);
        }
    }
    printf("\nJumlah Bilangan Genap: %d\n", totalGenap);

    // Menampilkan bilangan ganjil
    printf("\nBilangan Ganjil: ");
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            totalGanjil += i;
            printFactors(i);
        }
    }
    printf("\nJumlah Bilangan Ganjil: %d\n", totalGanjil);

    // Menampilkan bilangan prima
    printf("\nBilangan Prima: ");
    for (int i = 1; i <= batas; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            totalPrima += i;
            printFactors(i);
        }
    }
    printf("\nJumlah Bilangan Prima: %d\n", totalPrima);

    return 0;
}
//no 2

#include <stdio.h>

using namespace std;

void printFibonacci(int batas) {
    int a = 0, b = 1, next;

    printf("Deret Fibonacci hingga %d: ", batas);
    while (a <= batas) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int batas;
    printf("Masukkan batas tertentu: ");
    scanf("%d", &batas);

    printFibonacci(batas);

    return 0;
}

//no 3

#include <stdio.h>

using namespace std;

int main() {
    int tinggi;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++) {
        // Mencetak spasi
        for (int j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }
        // Mencetak bintang
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

