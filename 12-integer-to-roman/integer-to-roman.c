char* intToRoman(int num) {
    static char *s[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    static int v[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    static char r[20];
    int k = 0;

    for (int i = 0; i < 13; i++)
        while (num >= v[i]) {
            r[k++] = s[i][0];
            if (v[i] == 900 || v[i] == 400 || v[i] == 90 ||
                v[i] == 40 || v[i] == 9 || v[i] == 4)
                r[k++] = s[i][1];
            num -= v[i];
        }

    r[k] = '\0';
    return r;
}