// Get integer from user
int brouckuInteger(const char *msg) {
    int value; 
    printf("%s\n",msg);
    scanf("%d",&value);
    return value;
}
// Get char from user
char brouckuZnak(const char *msg) {
    char value;
    printf("%s\n");
    scanf("%c", value);
    return value;
}
// Get bool from user
bool brouckuBool(const char *msg) {
    char value;
    do {
        printf("%s A/n\n", msg);
        scanf(" %c", &value);
    } while (value != 'A' && value != 'n');
    return value == 'A';
}
// Load array of ints from user
void brouckuPoleIntegeru(const char *msg, int *nums, int length) {
    for (int i = 0; i < length; i++) {
        printf("%s\n", msg);
        scanf("%d", &nums[i]);
    }
}
// Print out array of ints
void brouckuPisPoleIntegeru(int *nums, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}
// Basicaly isEven
bool brouckuSude(int num) {
    return num % 2;
}
// Gen random number
int brouckuNahoda(int min, int max) {
    return rand() % max + min;
}
// Return lowest number
int brouckuNejnizsi(int *nums, int length) {
    int low = nums[0];
    for (int i = 1; i < length; i++) {
        if (nums[i] < low) low = nums[i];
    }
    return low;
}
// Return highest number
int brouckuNejvyssi(int *nums, int length) {
    int high = nums[0];
    for (int i = 1; i < length; i++) {
        if (nums[i] > high) high = nums[i];
    }
    return high;
}
// Get complex average dependant on weight of number
float brouckuSlozityPrumer(int *nums, int *weight, int length) {
    int sum = 0, count = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < weight[i]; j++) { // Add a number more times in dependence on the weight
            sum += nums[i];
            count++;
        }
    }
    return (float)sum / count;
}
// Get simple average
float brouckuPrumer(int *nums, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) sum += nums[i];
    return (float)sum / length;
}
// Get factorial
int brouckuFaktorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) fact *= i;
    return fact;
}
// Print number in hexadecimal format
void brouckuSestnactkova(int dec) {
    int digitCount = 1, comparator = 16, hexDigit;
    while (comparator <= dec) { // Get the numbers of digits
        digitCount++;
        comparator *= 16;
    }
    char digits[digitCount]; // Create digits array
    
    for (int i = 0; i < digitCount; i++) { // Fill digits[] with hexadec numbers
        hexDigit = dec % 16;
        switch(dec % 16) {
            case 0 : digits[i] = '0'; break;
            case 1 : digits[i] = '1'; break;
            case 2 : digits[i] = '2'; break;
            case 3 : digits[i] = '3'; break;
            case 4 : digits[i] = '4'; break;
            case 5 : digits[i] = '5'; break;
            case 6 : digits[i] = '6'; break;
            case 7 : digits[i] = '7'; break;
            case 8 : digits[i] = '8'; break;
            case 9 : digits[i] = '9'; break;
            case 10 : digits[i] = 'A'; break;
            case 11 : digits[i] = 'B'; break;
            case 12 : digits[i] = 'C'; break;
            case 13 : digits[i] = 'D'; break;
            case 14 : digits[i] = 'E'; break;
            case 15 : digits[i] = 'F'; break;
        }
        dec /= 16;
    }
    
    for (int i = digitCount - 1; i >= 0; i--) { // Print digits[] in reverse order
        printf("%c", digits[i]);
    }
    printf("\n");
}
// Print number in binary format
void brouckuDvojkova(int dec) {
    int digitCount = 1, comparator = 2;
    while (comparator <= dec) { // Get number of digits
        digitCount++;
        comparator *= 2;
    }
    int digits[digitCount];
    for (int i = 0; i < digitCount; i++) { // Fill digits[] with binary numbers
        digits[i] = dec % 2;
        dec /= 2;
    }
    
    for (int i = digitCount - 1; i >= 0; i--) { // Print digits[] in reverse order
        printf("%d", digits[i]);
    }
    printf("\n");
    
}
// Bubblesort array of ints to highest
void brouckuPoNejvyssi(int *nums, int length) {
    int buffer;
    for (int i = 0; i < length; i++) {
        for (int k = i + 1; k < length; k++) {
            if (nums[i] > nums[k]) {
                buffer = nums[i];
                nums[i] = nums[k];
                nums[k] = buffer;
            }
        }
    }
}
// Bubblesort array of ints to lowest
void brouckuPoNejnizsi(int *nums, int length) {
    int buffer;
    for (int i = 0; i < length; i++) {
        for (int k = i + 1; k < length; k++) {
            if (nums[i] < nums[k]) {
                buffer = nums[i];
                nums[i] = nums[k];
                nums[k] = buffer;
            }
        }
    }
}

void broucku() {
    printf("takhle ti to fungovat nebude\n");
}
