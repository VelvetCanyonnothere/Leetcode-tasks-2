void reverseString(char* s, int sSize) {
    int  j = sSize -1;
    char temp;
    for ( int i = 0 ; i < sSize/2 ; i++){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }    
}
