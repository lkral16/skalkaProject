int brouckuInteger(const char *msg) {
    int value; 
    printf("%s\n",msg);
    scanf("%d",&value);
    return value;
}

char brouckuZnak(const char *msg) {
    char value;
    printf("%s\n");
    scanf("%c", value);
    return value;
}

bool brouckuBool(const char *msg) {
    char value;
    do {
        printf("%s A/n\n", msg);
        scanf(" %c", &value);
    } while (value != 'A' && value != 'n');
    if (value == 'A') return true;
    else return false;
}

void brouckuPoleIntegeru(const char *msg, int *nums, int length) {
    for (int i = 0; i < length; i++) {
        printf("%s\n", msg);
        scanf("%d", &nums[i]);
    }
}

void brouckuPisPoleIntegeru(int *nums, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d\n", nums[i]);
    }
}

bool brouckuSude(int num) {
    if (num % 2 == 1) return false;
    else return true;
}

int brouckuNahoda(int num) {
    return rand() % num;
}

int brouckuNejnizsi(int nums[], int length) {
    int low = nums[0];
    for (int i = 1; i < length; i++) {
        if (nums[i] < low) low = nums[i];
    }
    return low;
}

int brouckuNejvyssi(int nums[], int length) {
    int high = nums[0];
    for (int i = 1; i < length; i++) {
        if (nums[i] > high) high = nums[i];
    }
    return high;
}

float brouckuSlozityPrumer(int nums[], int weight[], int length) {
    int sum = 0, count = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < weight[i]; j++) {
            sum += nums[i];
            count++;
        }
    }
    return (float)sum / count;
}

float brouckuPrumer(int nums[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) sum += nums[i];
    return (float)sum / length;
}

int brouckuFaktorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) fact *= i;
    return fact;
}

void brouckuSestnactkova(int dec) {
    int digitCount = 1, comparator = 16;
    while (comparator <= dec) { //get the numbers of digits
        digitCount++;
        comparator *= 16;
    }
    int digits[digitCount]; //create digits array
    
    for (int i = 0; i < digitCount; i++) {
        digits[i] = dec % 16;
        dec /= 16;
    }
    
    for (int i = digitCount - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");
}

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
