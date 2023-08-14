#ifndef ABSOLUTE
#define ABS(x) \
	do { \
		int result; \
		if ((x) < 0) {\
			result = -(x); \
		} else {\
			result = (x); \
		}\
		result; \
	} while (0)
#endif
