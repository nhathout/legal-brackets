# legal-brackets

This is a function that receives as input a string comprising of the characters "(, ), {, }, [, ]" as well as any other characters. There is no white space between characters. It returns true if the string is legal in the way it uses brackets.

These are some examples of expected inputs and corresponding outputs:
Input: (s)d          Output: legal
Input: a(a{b}s)d     Output: legal
Input: {a[b]c        Output: illegal
Input: ([a)d]        Output: illegal
