#include <stdio.h>
#include <string.h>

int main() {
    float jarak; //
    float kecepatan;
    char cuaca[20];
    char hasil[10];

    do {
        printf("Masukkan jarak dengan objek di depan (meter): ");
        scanf("%f", &jarak);

        printf("Masukkan kecepatan kendaraan (km/jam): ");
        scanf("%f", &kecepatan);

        printf("Masukkan status cuaca (cerah/hujan): ");
        scanf("%s", cuaca);

        if (jarak < 2.0) {
            printf("Berhenti\n");
        } else if (jarak >= 2.0 && jarak <= 5.0) {
            printf("Kurangi kecepatan\n");
        } else {
            printf("Jarak aman\n");
        }

        if (strcmp(cuaca, "hujan") == 0 && kecepatan > 60.0) {
            printf("Hujan, kurangi kecepatan kendaraan\n");
            kecepatan = 60.0;
        }

        printf("Masukkan 'berhenti' untuk menghentikan program: ");
        scanf("%s", hasil);

    } while (strcmp(hasil, "berhenti") != 0);

    return 0;
}
