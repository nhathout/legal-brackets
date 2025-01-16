# legal-brackets

This is a function that receives as input a string comprising of the characters "(, ), {, }, [, ]" as well as any other characters. There is no white space between characters. It returns true if the string is legal in the way it uses brackets.

These are some examples of expected inputs and corresponding outputs: <br>
Input: (s)d&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Output: legal <br>
Input: a(a{b}s)d&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Output: legal <br>
Input: {a[b]c&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Output: illegal <br>
Input: ([a)d]&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Output: illegal <br>
