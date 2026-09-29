#include <stdio.h>

int main() {
    // Deklarasi variabel
    char nama[50];
    int uangSaku, makan, transport, sisa;

    // Input
    printf("Masukkan nama mahasiswa        : ");
    scanf(" %49[^\n]", nama);
    printf("Masukkan uang saku bulanan     : ");
    scanf("%d", &uangSaku);
    printf("Masukkan pengeluaran makanan   : ");
    scanf("%d", &makan);
    printf("Masukkan pengeluaran transport : ");
    scanf("%d", &transport);

    // Proses
    sisa = uangSaku - makan - transport;

    // Output
    printf("\n=======================================\n");
    printf("  STUDENT FINANCIAL MANAGEMENT SYSTEM\n");
    printf("=======================================\n");
    printf("%-19s: %s\n", "Student Name", nama);
    printf("%-19s: Rp %d\n", "Monthly Allowance", uangSaku);
    printf("%-19s: Rp %d\n", "Food Expense", makan);
    printf("%-19s: Rp %d\n", "Transport Expense", transport);
    printf("%-19s: Rp %d\n", "Remaining Balance", sisa);

    return 0;
}