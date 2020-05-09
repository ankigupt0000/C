/* Create a new counter, initialized to 0. Call counterDestory to get rif of it. */
struct counter * counterCreate(void);

/* Free space used by counter. */
void counterDestroy(struct counter *);

/* Increment the counter and return a new value */
int counterIncrement(struct counter*);
