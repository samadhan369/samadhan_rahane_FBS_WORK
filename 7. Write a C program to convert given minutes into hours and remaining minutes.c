#include <stdio.h>

int main() {
  int totalMinutes, hours, minutes;
  float  seconds;

    // Input from user
    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    // Conversion
    hours = totalMinutes / 60;            // Get the number of full hours
    minutes = totalMinutes % 60;          // Get the remaining minutes
    seconds = (totalMinutes * 60) % 60;   // Convert total minutes to seconds, get remaining seconds

    // Output result
    printf("%d minutes = %d hour(s), %d minute(s), and %d second(s)\n", totalMinutes, hours, minutes, seconds);

    return 0;
}
