char* reverseString(char* s) {
    int low=0;
    int high=strlen(s)-1;
    char t;
    while(low<high) {
        t=s[low];s[low]=s[high];s[high]=t;
        ++low;
        --high;
    }
    return s;
}
