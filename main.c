#include <stdio.h>
#include <stdlib.h>

int main() {
    double w;
    
    printf("Enter w: ");
    scanf("%lf", &w);

    double l = 180e-9;
    double ad = 490e-15 * w;
    double as = ad;
    double pd = w + 0.98;
    double ps = pd;
    int m = 1;

    FILE *tmpFile = fopen("temp_output.txt", "w");
    
    fprintf(tmpFile, "w=%.0fe-6 ", w);
    fprintf(tmpFile, "l=%.0fe-9 ", l * 1e9);
    fprintf(tmpFile, "ad=%.2fe-12 as=%.2fe-12 ", ad * 1e12, as * 1e12);
    fprintf(tmpFile, "pd=%.2fe-6 ps=%.2fe-6 ", pd, ps);
    fprintf(tmpFile, "m=%d", m);

    // Close the temporary file
    fclose(tmpFile);

    // Use system() to copy the contents of the temporary file to the clipboard
    system("clip < temp_output.txt");

    // Optionally, remove the temporary file after copying
    remove("temp_output.txt");

    return 0;
}
