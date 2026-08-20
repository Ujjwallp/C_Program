#include <stdio.h>  // printf के लिए
#include <string.h> // स्ट्रिंग फ़ंक्शंस के लिए (जैसे strlen)

int main() {
    char name[] = "Hello";
    
    // strlen() फ़ंक्शन शब्द के अक्षरों की गिनती करता है
    int length = strlen(name);
    
    printf("Word: %s\n", name);
    printf("Length: %d\n", length)
    
    return 0;
}
