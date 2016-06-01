char * removeEndOfLine(char *s)
{
    char *p;

    p=s;
    while (*p!= '\0'){
        if ( (*p == '\n') || (*p == '\r')) break;
        p++;


    }
}