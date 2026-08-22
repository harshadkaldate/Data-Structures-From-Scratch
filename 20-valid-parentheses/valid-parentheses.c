bool isValid(char* s) {
    char st[10005];
    int top = 0;

    for(int i = 0; s[i]; i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            st[top++] = s[i];
        else {
            if(top == 0)
                return false;
            char c = st[--top];
            if((s[i] == ')' && c != '(') ||
               (s[i] == ']' && c != '[') ||
               (s[i] == '}' && c != '{'))
                return false;
        }
    }
    return top == 0;
}