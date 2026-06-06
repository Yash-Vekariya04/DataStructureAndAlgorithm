class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;
        for (int i = num1; i <= num2; i++) {
            total += calculateWaviness(i);
        }
        return total;
    }

    int calculateWaviness(int n) {
        // Numbers with less than 3 digits cannot have any peaks or valleys
        if (n < 100) {
            return 0;
        }

        int waviness = 0;

        int rightDigit = n % 10;
        n /= 10;
        int middleDigit = n % 10;
        n /= 10;

        // Continue shifting leftwards through the number
        while (n > 0) {
            int leftDigit = n % 10;

            // Check for a Peak
            if (middleDigit > rightDigit && middleDigit > leftDigit) {
                waviness++;
            }
            // Check for a Valley
            else if (middleDigit < rightDigit && middleDigit < leftDigit) {
                waviness++;
            }

            // Shift our sliding window of 3 digits to the left
            rightDigit = middleDigit;
            middleDigit = leftDigit;
            n /= 10;
        }

        return waviness;
    }
};
