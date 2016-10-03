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
int brouckuNejnizsi(int nums[]) {
    int low = nums[0];
    for (int i = 1; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (nums[i] < low) low = nums[i];
    }
    return low;
}
// Return highest number
int brouckuNejvyssi(int nums[]) {
    int high = nums[0];
    for (int i = 1; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (nums[i] > high) high = nums[i];
    }
    return high;
}
// Get complex average dependant on weight of number
float brouckuSlozityPrumer(int nums[], int weight[]) {
    int sum = 0, count = 0;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        for (int j = 0; j < weight[i]; j++) {
            sum += nums[i];
            count++;
        }
    }
    return (float)sum / count;
}
// Get simple average
float brouckuPrumer(int nums[]) {
    int sum = 0;
    short length = sizeof(nums) / sizeof(nums[0]);
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
    while (comparator <= dec) { //get the numbers of digits
        digitCount++;
        comparator *= 16;
    }
    char digits[digitCount]; //create digits array
    
    for (int i = 0; i < digitCount; i++) {
        hexDigit = dec % 16;
        (   hexDigit == 0 ? digits[i] = '0':
            hexDigit == 1 ? digits[i] = '1':
            hexDigit == 2 ? digits[i] = '2':
            hexDigit == 3 ? digits[i] = '3':
            hexDigit == 4 ? digits[i] = '4':
            hexDigit == 5 ? digits[i] = '5':
            hexDigit == 6 ? digits[i] = '6':
            hexDigit == 7 ? digits[i] = '7':
            hexDigit == 8 ? digits[i] = '8':
            hexDigit == 9 ? digits[i] = '9':
            hexDigit == 10 ? digits[i] = 'A':
            hexDigit == 11 ? digits[i] = 'B':
            hexDigit == 12 ? digits[i] = 'C':
            hexDigit == 13 ? digits[i] = 'D':
            hexDigit == 14 ? digits[i] = 'E':
            digits[i] = 'F');
        dec /= 16;
    }
    
    for (int i = digitCount - 1; i >= 0; i--) {
        printf("%c", digits[i]);
    }
    printf("\n");
}
// Print number in binary format
void brouckuDvojkova(int dec) {
    int digitCount = 1, comparator = 2;
    while (comparator <= dec) {
        digitCount++;
        comparator *= 2;
    }
    int digits[digitCount];
    for (int i = 0; i < digitCount; i++) {
        digits[i] = dec % 2;
        dec /= 2;
    }
    
    for (int i = digitCount - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");
    
}
// Bubblesort array of ints to highest
void brouckuPoNejvyssi(int *nums) {
    int buffer;
    int length = sizeof(nums) / sizeof(nums[0]);
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
void brouckuPoNejnizsi(int *nums) {
    int buffer;
    int length = sizeof(nums) / sizeof(nums[0]);
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
