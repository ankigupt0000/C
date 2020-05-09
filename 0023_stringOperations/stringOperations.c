
void
strcpy2(char* dest, char* src)
{
	/* This line copies characters one t a time from *src to *dest.
	 * The postincrements increment the pointers (++ binds tighter than *)
	 * to get the next locations on the next iteration through the loop.
	 * The loop terminates when *src == '\0' == 0.
	 * There is no loop body because there is nothing to do there.
	 */
	while(*dest++ = *src++);
}


char *
strcpy2a(char *dest, const char *src)
{
	int i;

	i = 0;

	for(i = 0; src[i] != '\0'; i++){
		dest[i] = src[i];
	}

	/* note that the final null in src is not copied by the loop */
	dest[i]='\0';

	return dest;
}

/* Copy the substring of src consisting of characters at positions start.. end-1 (inclusive) into dest
 * If end-1 is past the end of src, copies only as many characters as available.
 * If start is past the end of src, the results are unpredictable
 * Returns a pointer to dest
 */
char *
copySubstring(char* dest, const char*  src, int start, int end)
{
	/* copy the substring */
	strncpy(dest, src+start, end-start);
	/* add null since strncpy probably don't */
	dest[end-start]='\0';

	return dest;
}

void
strcat2(char *dest,const char *src)
{
	while(*dest) dest++;
	while(*dest++ = *src++);
}

int
strlen2(const char *s)
{
	int i;

	for(i = 0; *s; i++, s++);

	return i;
}

int
strcmp2(const char *s1, const char *s2)
{
	while(*s1 && *s2 && *s1 == *s2){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

/* return a freshly-malloc'd copy of s
 * or 0 if malloc fails
 * It is the caller's responsibility to free the returned string when done
 */
char *
strdup(const char *s)
{
	char *s2;
	s2 = malloc(strlen(s)+1);

	if(s2 != 0){
		strcpy(s2,s);
	}

	return s2;
}
