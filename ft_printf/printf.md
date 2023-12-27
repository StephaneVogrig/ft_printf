# ft_printf

## infos 
English : [man7.org](https://www.man7.org/linux/man-pages/man3/printf.3.html),
[studysmarter.co.uk](https://www.studysmarter.co.uk/explanations/computer-science/computer-programming/c-printf/),
[tutorialpoint.com](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm),
[cplusplus.com](https://cplusplus.com/reference/cstdio/printf/)



French : [manpages.ubuntu.com](https://manpages.ubuntu.com/manpages/xenial/fr/man3/printf.3.html)

## infos variadic function
[zestedesavoir.com](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/notions-avancees/les-fonctions-a-nombre-variable-darguments/#4-les-macrofonctions-a-nombre-variable-darguments)


printf fonction send a srting whith formated variables to stdout.
The string 'format' contain a character '%' for each variable.
The following characters after '%' specifies the conversion of the variable.

Conversions specifiers :
'c' print a single character;
's' print a string;
'p'	print a pointer in hexadecimal format;
'd' print a decimal number.
'i' print an int in base 10.
'u' print an unsigned decimal number
'x' print a number in hexadecimal lowercase format
'X' print a number in hexadecimal uppercase format
'%' prints '%'

	%[flags][field width][.precision][length]specifier
	
flags : # 0 - ' ' +
	There may be an "unlimited" number of these lags.
		If the specifier is missing, are printed in the order :
			- one # if present in the format,
			- one + if present in the format,
			- one ' ' if present in the format and not '+'
			- one - if present in the format.
			- one 0 if present in the format and not '-'

		#	for x conversion begin a nonzero conversion with '0x'
			for X conversion begin a nonzero conversion with '0X'

		0	For d, i, o, u, x and X conversions, the converted value
            is padded on the left with zeros rather than blanks.
			It is ignored if flag '-' is present'.
			it is ignored if precision is present.

		-	left align on the field boundary. The converted value is padded
			on the right with blanks.
			Flag '0' is ignored.

		' '	for d and i, a blank should be left before positive value
			is ignored if flag + is present.

		+	for d and i, add '+' behind a positive value.
			If precision is passed '+' is added before precision.
			If field width is passed and flag 0,
				'+' replace the first '0' in the field

field width : decimal digit string with nonzero first digit.
	Specify a minimum field width.
	- If overflow during the decimal digit string conversion,
		- stop format conversion,
		- print the string already set
		- return -1.
	- If converted value has more characters the field is expanded
	  to contain all charachters.
	- If converted value has fewer characters it will be padded whith space
	  or '0' if flag '0' and no flag '-'.
	- If flag '-', converted value is left align and ' ' complet the field

precision : '.' followed by an optional positive decimal string
	- There may be an "unlimited" number of zero to begin the decimal string
	- If no decimal sring is present, 0 is use by default
	- The precision value is limited to an int.
	- If overflow during the decimal digit string conversion,
		- stop format conversion,
		- print the string already set
		- return -1.
	- If the specifier is missing :
		- if '.' is not present in format,
				nothing is printed .
		- if '.' without decimal string is present,
				'.0' is printed.
		- if '.' followed by decimal string is present,
					'.' followed by precision value convert in string is printed
		* For d, i, o, u, x, and X conversions, precision give the minimum
		  digits to appear. '0' is placed if necessary.
		* For s conversion, give the maximum number of characters to be printed

	length : l ll modify the type of variable.
		Other lenght in standard printf : hh h q L j z Z t.

	specifier : d i o u x X c s %
		If the specifier is missing
			- if it is the first missing AND is at the end of format
				- nnothing of the conversion is printing
				- return -1
			- in all other case a string of the data conversion is printing
			  as describes in their own part.
		Other specifier in standard printf : e E f F g G a A p n m 

