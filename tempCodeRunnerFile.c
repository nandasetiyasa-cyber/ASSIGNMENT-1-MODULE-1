#include <stdio.h>
#include <stdbool.h>

#define BOBOT_TUGAS 0.20
#define BOBOT_UTS   0.30
#define BOBOT_UAS   0.50

#define BATAS_LULUS    60.0
#define BATAS_CUMLAUDE 85.0

int main() {
    // Deklarasi variabel
    int nilai_tugas;
    int nilai_uts;
    int nilai_uas;
    int jumlah_kehadiran;

    double nilai_akhir;

    bool status_lulus;
    bool status_cumlaude;

    // Input data
    printf("=== INPUT NILAI MAHASISWA ===\n");

    printf("Masukkan Nilai Tugas (0-100)    : ");
    scanf("%d", &nilai_tugas);

    printf("Masukkan Nilai UTS (0-100)      : ");
    scanf("%d", &nilai_uts);

    printf("Masukkan Nilai UAS (0-100)      : ");
    scanf("%d", &nilai_uas);

    printf("Masukkan Kehadiran (0-100%%)     : ");
    scanf("%d", &jumlah_kehadiran);

    // Menghitung nilai akhir
    nilai_akhir =
        ((double)nilai_tugas * BOBOT_TUGAS) +
        ((double)nilai_uts * BOBOT_UTS) +
        ((double)nilai_uas * BOBOT_UAS);

    // Menentukan status lulus
    status_lulus =
        (nilai_akhir >= BATAS_LULUS) &&
        (jumlah_kehadiran >= 75);

    // Menentukan status cumlaude
    status_cumlaude =
        status_lulus &&
        (nilai_akhir >= BATAS_CUMLAUDE);

    // Output hasil
    printf("\n=== HASIL EVALUASI AKADEMIK ===\n");
    printf("Nilai Akhir Mahasiswa : %.2f\n", nilai_akhir);

    printf("\n=== STATUS KELULUSAN ===\n");
    printf("Status Lulus (1=Lulus, 0=Gagal) : %d\n", status_lulus);
    printf("Predikat Cumlaude (1=Ya, 0=Tidak): %d\n", status_cumlaude);

    return 0;
}