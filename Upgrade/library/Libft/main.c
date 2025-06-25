/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:01:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/29 12:49:26 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# include <stdio.h>
# include <ctype.h>
# include <string.h>

//****ft_atoi****ok
// int main(void)
// {
//     char *str[] = {"--123", "-153", "+456", "-+4869", "9012", "+1-2687", "-8a9756"};
//     for (int i = 0; i < 7; i++)
//     {
//         printf("Std: the value of %s to integer is: %i \n", str[i], atoi(str[i]));
//         printf("Cus: the value of %s to integer is: %i \n", str[i], ft_atoi(str[i]));
//     }
//     return (0);
// }
// extra test for a_toi

// int main()
// {
//     // Test cases to demonstrate the ft_atoi function
//      printf("Test 1: ft_atoi(\" 42\") = %d, std_atoi(\" 42\") = %d\n", ft_atoi(" 42"), atoi(" 42"));
//     printf("Test 2: ft_atoi(\"   -42\") = %d, std_atoi(\"   -42\") = %d\n", ft_atoi("   -42"), atoi("   -42"));
//     printf("Test 3: ft_atoi(\"42abc\") = %d, std_atoi(\"42abc\") = %d\n", ft_atoi("42abc"), atoi("42abc"));
//     printf("Test 4: ft_atoi(\"a42\") = %d, std_atoi(\"a42\") = %d\n", ft_atoi("a42"), atoi("a42"));
//     printf("Test 5: ft_atoi(\"\") = %d, std_atoi(\"\") = %d\n", ft_atoi(""), atoi(""));
//     printf("Test 6: ft_atoi(\"+-42\") = %d, std_atoi(\"+-42\") = %d\n", ft_atoi("+-42"), atoi("+-42"));
//     printf("Test 7: ft_atoi(\"-2147483648\") = %d, std_atoi(\"-2147483648\") = %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
//     printf("Test 8: ft_atoi(\"2147483647\") = %d, std_atoi(\"2147483647\") = %d\n", ft_atoi("2147483647"), atoi("2147483647"));
//     printf("Test 9: ft_atoi(\"9999999999\") = %d, std_atoi(\"9999999999\") = %d\n", ft_atoi("9999999999"), atoi("9999999999"));
//     printf("Test 10: ft_atoi(\"-9999999999\") = %d, std_atoi(\"-9999999999\") = %d\n", ft_atoi("-9999999999"), atoi("-9999999999"));


//     return 0;
// }
//****ft_bzero test **** it means test ok with all possible cases
// int main(void)
// {
//     char s2[50] = "Nobody better than you my lovely babies";
//     char s3[50] = "Nobody better than you my lovely ba";
//     int n = 10;
//     int flag = 0;

//     bzero(s2,n);
//     ft_bzero(s3,n);
//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s2[i]);
//     printf("\n");
//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s3[i]);
//     printf("\n");
//     for (int i = 0; i < 50; i++)
//         if (s2[i] != s3[i])
//         {
//             printf("There is differences at position: %i \n", i);
//             flag++;
//         }
//     if (flag == 0)
//         printf("Std function and my function are same \n");
//     return 0;
// }

//****ft_calloc ****/ ok
// int main(void)
// {
//     size_t count = 10;
//     size_t size = sizeof(char);

//     char *std_ptr = (char *)calloc(count, size);
//     char *custom_ptr = (char *)ft_calloc(count, size);

//     if (std_ptr)
//     {
//         printf("Std calloc result (first 10 bytes): ");
//         for (size_t i = 0; i < count; i++)
//             printf("%d ", std_ptr[i]);
//         printf("\n");
//     }
//     if (custom_ptr)
//     {
//         printf("Custom calloc result (first 10 bytes): ");
//         for (size_t i = 0; i < count; i++)
//             printf("%d ", custom_ptr[i]);
//         printf("\n");
//     }
//     free(std_ptr);
//     free(custom_ptr);
//     return 0;
// }

//****ft_isascii ****ok
// int main(void)
// {
//     char c[] = {'a', '1', '!', 'A', 'Z', '0', '9', 0, -1, 100};
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Std: Check the character %i with std function: %d \n", c[i], isascii(c[i]));
//         printf("Cus: Check the character %i with my function: %d \n", c[i], ft_isascii(c[i]));
//     }
//     return 0;
// }

//****ft_isalnum ****ok
// int main(void)
// {
//   char c[] = {'a', '1', '!', 'A', 'Z', '0', '9', 0, -1, 300};
//   for (int i = 0; i < 10; i++)
//   {
//     printf("Std: Check the character %i with std function: %d \n", c[i], isalnum(c[i]));
//     printf("Cus: Check the character %i with my function: %d \n", c[i], ft_isalnum(c[i]));
//   }
//   return 0;
// }

//****ft_isalpha */
// int main(void)
// {
//     char c[] = {'a', '1', '!', 'A', 'Z', '0', '9', 0, -1, 300, ' '};
//     for (int i = 0; i < 11; i++)
//     {
//         printf("Std: Check the character %i with std function: %d \n", c[i], isalpha(c[i]));
//         printf("Cus: Check the character %i with my function: %d \n", c[i], ft_isalpha(c[i]));
//     }
//     return 0;
// }

//****ft_isdigit ****ok
// int main (void)
// {
//     char c[] = {'a', '1', '!', 'A', 'Z', '0', '9', 0, -1, 300};
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Std: Check the character %i with std function: %d \n", c[i], isdigit(c[i]));
//         printf("Cus: Check the character %i with my function: %d \n", c[i], ft_isdigit(c[i]));
//     }
//     return 0;
// }

//***ft_isdigit */
// int main(void)
// {
//     char c[] = {'a', '1', '!', 'A', 'Z', '0', '9', 0, -1, 300};
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Std: Check the character %i with std function: %d \n", c[i], isdigit(c[i]));
//         printf("Cus: Check the character %i with my function: %d \n", c[i], ft_isdigit(c[i]));
//     }
//     return 0;
// }

//****ft_itoa ****/
// int main(void)
// {
//     int numbers[] = {2147483647, -2147483648, 0, -42, 1337};
//     for (int i = 0; i < 5; i++)
//     {
//         char *c = ft_itoa(numbers[i]);
//         printf("The value of %i in array: %s \n", numbers[i], c);
//     }
//   return 0;
// }

//****ft_memchr ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char c[] = {'1', 'y', 'e'};
//     size_t n = 40;
//     for (int i = 0; i < 3; i++)
//     {
//         void *std_ptr = memchr(s, c[i], n);
//         void *ft_ptr = ft_memchr(s, c[i], n);

//         if (std_ptr)
//             printf("Std: The 1st position of '%c' in string \"%.*s\" is: '%c'\n", c[i], (int)n, s, *(char *)std_ptr);
//         else
//             printf("Std: Character '%c' not found in first %zu bytes.\n", c[i], n);

//         if (ft_ptr)
//             printf("Custom: The 1st position of '%c' in string \"%.*s\" is: '%c'\n", c[i], (int)n, s, *(char *)ft_ptr);
//         else
//             printf("Custom: Character '%c' not found in first %zu bytes.\n", c[i], n);
//     }

//     return 0;
// }

// int main(void)
// {

//     char s[] = {0, 1, 2, 3, 4, 5};

//         // Test case 1: Checking when length is 0
//     void *result1 = ft_memchr(s, 0, 0);
//     printf("Result 1: %p\n", result1);
//     printf("Test 1: %s\n", result1 == NULL ? "Passed" : "Failed");

//     // Test case 2: Checking for match at the start
//     void *result2 = ft_memchr(s, 0, 1);
//     printf("Result 2: %p\n", result2);
//     printf("Test 2: %s\n", result2 == s ? "Passed" : "Failed");

//     // Test case 3: Checking for match in the middle
//     void *result3 = ft_memchr(s, 2, 3);
//     printf("Result 3: %p\n", result3);
//     printf("Test 3: %s\n", result3 == s + 2 ? "Passed" : "Failed");

//     // Test case 4: Checking for no match (value larger than any byte in the array)
//     void *result4 = ft_memchr(s, 6, 6);
//     printf("Result 4: %p\n", result4);
//     printf("Test 4: %s\n", result4 == NULL ? "Passed" : "Failed");

//     // Test case 5: Checking for wraparound (e.g., 258 would be equivalent to 2)
//     void *result5 = ft_memchr(s, 2 + 256, 3);  // 2 + 256 == 258, which wraps around to 2
//     printf("Result 5: %p\n", result5);
//     printf("Test 5: %s\n", result5 == s + 2 ? "Passed" : "Failed");

//     return (0);
// }

//****ft_memcmp****ok
// int main(void)
// {
//     char *s[] = {"Hello World", "Hello", "A", "123", "a1b2c3"};
//     char *c[] = {"Hello World", "He", "AB", "12345", "a1b2 "};
//     size_t n = 8;
//         for (int i = 0; i < 5; i++)
//         {
//             printf("Std: The comparison with %zu char of %s and %s is: %i \n", n, s[i], c[i], memcmp(s[i], c[i], n));
//             printf("Custom: The comparison of %zu char of %s and %s is: %i \n", n, s[i], c[i], ft_memcmp(s[i], c[i], n));
//         }
//         return 0;  
// }
// int main(void)
// {
//     char s[] = {-128, 0, 127, 0};
//     char sCpy[] = {-128, 0, 127, 0};
//     char s2[] = {0, 0, 127, 0};
//     char s3[] = {0, 0, 42, 0};

//     // Test 1: Check if s and sCpy are identical
//     int result1 = ft_memcmp(s, sCpy, 4);
//     printf("Result 1: %d\n", result1);  // Expected: 0 (They should be equal)

//     // Test 2: Check if comparing the first 0 bytes returns 0 (identical)
//     int result2 = ft_memcmp(s, s2, 0);
//     printf("Result 2: %d\n", result2);  // Expected: 0 (Nothing to compare)

//     // Test 3: Compare the first byte of s and s2, expect a positive value since s[0] = -128 and s2[0] = 0
//     int result3 = ft_memcmp(s, s2, 1);
//     printf("Result 3: %d\n", result3);  // Expected: Positive (s[0] < s2[0])

//     // Test 4: Compare the first byte of s2 and s, expect a negative value since s2[0] = 0 and s[0] = -128
//     int result4 = ft_memcmp(s2, s, 1);
//     printf("Result 4: %d\n", result4);  // Expected: Negative (s2[0] > s[0])

//     // Test 5: Compare s2 and s3, expect non-zero result since they differ at s2[2] and s3[2]
//     int result5 = ft_memcmp(s2, s3, 4);
//     printf("Result 5: %d\n", result5);  // Expected: Non-zero (different values at s2[2] and s3[2])

//     return 0;
// }

//****ft_memcpy ****ok
// int main(void)
// {
//     char s1[50] = "Nobody better than you my lovely babies";
//     char std_copy[50];
//     char my_copy[50];
//     int n = 10;
//     int flag = 0;

//     memcpy(std_copy, s1, n);
//     ft_memcpy(my_copy, s1, n);

//     for (int i = 0; i < n; i++)
//         printf("%d ", (unsigned char)std_copy[i]);
//     printf("\n");

//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)my_copy[i]);
//     printf("\n");

//     for (int i = 0; i < 50; i++) {
//         if (std_copy[i] != my_copy[i]) {
//             printf("There is a difference at position: %i\n", i);
//             flag++;
//         }
//     }

//     if (flag == 0)
//         printf("Std function and my function are the same\n");

//     return 0;
// }

//****ft_memmove */
// int main(void)
// {
//     char s1[50] = "Nobody better than you my lovely babies";
//     char s2[50];
//     char s3[50];
//     int n = 20;
//     int flag = 0;

//     memmove(s2, s1, n);
//     ft_memmove(s3, s1, n);

//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s2[i]);
//     printf("\n");

//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s3[i]);
//     printf("\n");

//     for (int i = 0; i <= n; i++) {
//         if (s2[i] != s3[i]) {
//             printf("There is a difference at position: %i\n", i);
//             flag++;
//         }
//     }

//     if (flag == 0)
//         printf("Std function and my function are the same\n");

//     return 0;
// }

// int main(void)
// {
//     char s[] = {65, 66, 67, 68, 69, 0, 45};       // 'ABCDE-'
//     char s0[] = { 0,  0,  0,  0,  0,  0, 0};     // all zeroes
//     char sCpy[] = {65, 66, 67, 68, 69, 0, 45};    // copy of 'ABCDE-'
//     char sResult[] = {67, 68, 67, 68, 69, 0, 45}; // expected result after forward move
//     char sResult2[] = {67, 67, 68, 68, 69, 0, 45}; // expected result after reverse move

//     // Test 1: Compare ft_memmove with standard memmove for moving data
//     ft_memmove(s0, s, 7);  // Use your ft_memmove function here
//     if (memcmp(s0, s, 7) == 0) {
//         printf("Test 1 passed: ft_memmove works like memmove\n");
//     } else {
//         printf("Test 1 failed: ft_memmove doesn't match memmove\n");
//     }

//     // Test 2: Test with 0 length (no change expected)
//     ft_memmove(s, s + 2, 0);
//     if (memcmp(s, sCpy, 7) == 0) {
//         printf("Test 2 passed: ft_memmove with 0 length works\n");
//     } else {
//         printf("Test 2 failed: ft_memmove with 0 length doesn't work\n");
//     }

//     // Test 3: Move forward
//     ft_memmove(s, s + 2, 2);
//     if (memcmp(s, sResult, 7) == 0) {
//         printf("Test 3 passed: ft_memmove forwards correctly\n");
//     } else {
//         printf("Test 3 failed: ft_memmove forwards incorrectly\n");
//     }

//     // Test 4: Move in reverse
//     ft_memmove(sResult + 1, sResult, 2);
//     if (memcmp(sResult, sResult2, 7) == 0) {
//         printf("Test 4 passed: ft_memmove in reverse works correctly\n");
//     } else {
//         printf("Test 4 failed: ft_memmove in reverse doesn't work\n");
//     }

//     return 0;
// }

//****ft_memset ****/
// int main(void)
// {
//     char s1[50] = "Nobody better than you my lovely babies";
//     char s2[50] = "Nobody better than you my lovely babies";
//     int n = 10;

//     memset(s1, 'A', n);
//     ft_memset(s2, 'A', n);

//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s1[i]);
//     printf("\n");

//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s2[i]);
//     printf("\n");

//     return 0;
// }

//****ft_putchar_fd ****/
// int main(void)
// {
//     ft_putchar_fd('A', 1);
//     ft_putchar_fd('B', 2);
//     ft_putchar_fd('C', 0);
//     return 0;
// }

//****ft_putendl_fd ****/
// int main(void)
// {
//     char s[] = "Hello";
//     ft_putendl_fd(s,1);
//     return 0;
// }

//****ft_putnbr_fd */
// int main(void)
// {
//     int i = -2147483649;
//     int fd = 1;
//     ft_putnbr_fd(i, fd);
//     printf("\n");
//     return 0;
// }

// //****ft_putstr_fd ****/
// int main(void)
// {
//     char s[] = "Hello";
//     ft_putstr_fd (s, 1);
//     ft_putstr_fd ("\n", 1);
//     ft_putstr_fd (s, 2);
//     ft_putstr_fd ("\n", 1);
//     ft_putstr_fd (s, 0);
//     ft_putstr_fd ("\n", 1);
//     return 0;
// }

// ****ft_split */
int main()
{
  char first[] = "HHHHH you H baby1231";
  char c = 'H';
  //unsigned int count = ft_count(first, c);
  unsigned int count = 2;
  printf("The string %s has been cut by %c to %i strings \n", first, c, count);
  char **out = ft_split(first, c);
  for (unsigned int i = 0; i <= count; i++)
  {
    if (out[i] != NULL)
      printf("New string is %s \n", out[i]);
    else
      printf("NULL pointer reached at index %d\n", i);
  }
  //if (out[count + 1] == NULL)
  //  printf("NULL pointer reached at index %d\n", count + 1);
    //printf("New string is %s \n", out);
  return(0);
}

//****ft_strmapi**** */
// char alt_case(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return (c - 32); // lowercase to uppercase
//     return (c);
// }

// int main(void)
// {
//     char *c[] = {"Hello World", "He", "AB", "12345", "a1b2 "};
//     for (int i = 0; i < 5; i++)
//     {
//         char *result = ft_strampi(c[i], alt_case);
//         if (result)
//         {
//             printf("Result: %s\n", result);
//             free(result);
//         }
//     }
//     return 0;
// }

//****ft_strchr ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char c[] = {'1', 'y', 'e'};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The 1st position of %c in string %s is: %s \n", c[i], s, strchr(s, c[i]));
//         printf("The 1st position of %c in string %s is: %s \n", c[i], s, ft_strchr(s, c[i]));
//     }
//     return 0;
// }

//****ft_strdup ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char *c = strdup(s);
//     char *c1 = ft_strdup(s);
//     printf("The new std duplicate string of %s is: %s \n", s, c);
//     printf("The new std duplicate string of %s is: %s \n", s, c1);
//     return 0;
// }

//****ft_striteri ****/
// void to_uppercase(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main(void)
// {
//     char str[] = "hello world";

//     printf("Before: %s\n", str);
//     ft_striteri(str, to_uppercase);
//     printf("After:  %s\n", str);

//     return 0;
// }

//****ft_strjoin****
// int main(void)
// {
//     char s1[] = "Hello World 2";
//     char s2[] = "1 Good Morning";
//     char *s3 = ft_strjoin(s1,s2);
//     printf("The joined string from s1: %s and s2: %s is: %s \n", s1, s2, s3);
//     return (0);
// }

// ****ft_strlcat test****ok- 
// Length of source: 25, length of destination: 8. Must change size in some cases:
// - lesser than length of dest to see only return. Example: 5
// - lesser or equal than sum of length dest and length source to see the concatrate. Example: 30
// - bigger than sum of length dest and length source to see the full copy . Example 35
// void print_bytes(const char *str, size_t len)
// {
//     for (size_t i = 0; i < len; i++)
//     {
//         if (str[i] == '\0')
//             printf("Byte %zu: NULL terminator\n", i);
//         else
//             printf("Byte %zu: %c (%d)\n", i, str[i], str[i]);
//     }
//     printf("\n");
// }
// ****ft_strlcat test****ok- 
// Length of source: 25, length of destination: 8. Must change size in some cases:
// - lesser than length of dest to see only return. Example: 5
// - lesser or equal than sum of length dest and length source to see the concatrate. Example: 30
// - bigger than sum of length dest and length source to see the full copy . Example 35
// void print_bytes(const char *str, size_t len)
// {
//     for (size_t i = 0; i < len; i++)
//     {
//         if (str[i] == '\0')
//             printf("Byte %zu: NULL terminator\n", i);
//         else
//             printf("Byte %zu: %c (%d)\n", i, str[i], str[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int r_test;
//     int size = 40;
//     char buffer[size];
//     char buffer_test[size];

//     printf("Length of source: %d \n", ft_strlen(last));
//     printf("Length of destination: %d \n", ft_strlen(first));

//     strcpy(buffer,first);
//     strcpy(buffer_test,first);
//     r = strlcat(buffer,last,size);
//     r_test = ft_strlcat(buffer_test,last,size);

//     puts("Standard buffer:");
//     puts(buffer);
//     printf("\n");
    
//     puts("My custom buffer.");
//     puts(buffer_test);
//     printf("\n");
    
//     printf("Value returned with std function: %d\n",r);
//     printf("Value returned with my function: %d\n",r_test);
//     if( r >= size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     print_bytes(buffer, size);
//     print_bytes(buffer_test, size);
//     return(0);
// }
// extra test1 for strlcat
// int main(void)
// {
//     char dest[30];
//     char *src = "AAAAAAAAA";

//     // Test 1
//     memset(dest, 0, 30);
//     dest[0] = 'B';
//     printf("Test 1: ");
//     printf("Result: %zu, Expected: %zu, String: %s\n", ft_strlcat(dest, src, 0), strlen(src), dest);
//     printf("Result: %zu, Expected: %zu, String: %s\n", strlcat(dest, src, 0), strlen(src), dest);

//     // Test 2
//     memset(dest, 0, 30);
//     dest[0] = 'B';
//     printf("Test 2: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, src, 1), 10, dest);

//     // Test 3
//     memset(dest, 'B', 4);
//     printf("Test 3: ");
//     printf("Result: %zu, Expected: %zu, String: %s\n", ft_strlcat(dest, src, 3), 3 + strlen(src), dest);
//     printf("Result: %zu, Expected: %zu, String: %s\n", strlcat(dest, src, 3), 3 + strlen(src), dest);

//     // Test 4
//     memset(dest, 'B', 4);
//     printf("Test 4: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, src, 6), 13, dest);

//     // Test 5
//     memset(dest, 'C', 5);
//     printf("Test 5: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, src, -1), 14, dest);

//     // Test 6
//     memset(dest, 'C', 15);
//     printf("Test 6: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, src, 17), 24, dest);

//     // Test 7
//     memset(dest, 0, 30);
//     printf("Test 7: ");
//     printf("Result: %zu, Expected: %zu, String: %s\n", ft_strlcat(dest, src, 1), strlen(src), dest);

//     // Test 8
//     memset(dest, 0, 30);
//     memset(dest, '1', 10);
//     printf("Test 8: ");
//     printf("Result: %zu, Expected: %zu, String: %s\n", ft_strlcat(dest, src, 5), strlen(src) + 5, dest);

//     // Test 9
//     memset(dest, 0, 30);
//     memset(dest, '1', 10);
//     printf("Test 9: ");
//     printf("Result: %zu, Expected: %zu, String: %s\n", ft_strlcat(dest, src, 5), strlen(src) + 5, dest);

//     // Test 10
//     memset(dest, 0, 30);
//     memset(dest, '1', 10);
//     printf("Test 10: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "", 15), 10, dest);

//     // Test 11
//     memset(dest, 0, 30);
//     printf("Test 11: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "", 42), 0, dest);

//     // Test 12
//     memset(dest, 0, 30);
//     printf("Test 12: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "", 0), 0, dest);

//     // Test 13
//     memset(dest, 0, 30);
//     printf("Test 13: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "123", 1), 3, dest);

//     // Test 14
//     memset(dest, 0, 30);
//     printf("Test 14: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "123", 2), 3, dest);

//     // Test 15
//     memset(dest, 0, 30);
//     printf("Test 15: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "123", 3), 3, dest);

//     // Test 16
//     memset(dest, 0, 30);
//     printf("Test 16: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "123", 4), 3, dest);

//     // Test 17
//     memset(dest, 0, 30);
//     printf("Test 17: ");
//     printf("Result: %zu, Expected: %i, String: %s\n", ft_strlcat(dest, "123", 0), 3, dest);

//     return 0;
// }

// extra test2 for strlcat
// int main(void)
// {
//     char b[0xF] = "nyan !";
    
//     ft_strlcat(((void*)0), b, 0);
//     //printf("Return value of std function: %zu \n", strlcat(((void*)0), b, 0));
//     printf("Return value of custom function: %zu \n", ft_strlcat(((void*)0), b, 0));
//     return 0;
// }


// ****ft_strlcpy test****ok- 
// Length of source: 25, length of destination: 8. Must change size in some cases:
// - lesser than length of dest to see only return. Example: 5
// - lesser or equal than sum of length dest and length source to see the concatrate. Example: 30
// - bigger than sum of length dest and length source to see the full copy . Example 35
// void print_bytes(const char *str, size_t len)
// {
//     for (size_t i = 0; i < len; i++)
//     {
//         if (str[i] == '\0')
//             printf("Byte %zu: NULL terminator\n", i);
//         else
//             printf("Byte %zu: %c (%d)\n", i, str[i], str[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int r_test;
//     int size = 40;
//     char buffer[size];
//     char buffer_test[size];

//     printf("Length of source: %ld \n", ft_strlen(last));
//     printf("Length of destination: %ld \n", ft_strlen(first));

//     strcpy(buffer,first);
//     strcpy(buffer_test,first);
//     r = strlcpy(buffer,last,size);
//     r_test = ft_strlcpy(buffer_test,last,size);

//     puts("Standard buffer:");
//     puts(buffer);
//     printf("\n");
    
//     puts("My custom buffer.");
//     puts(buffer_test);
//     printf("\n");
    
//     printf("Value returned with std function: %d\n",r);
//     printf("Value returned with my function: %d\n",r_test);
//     if( r >= size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     print_bytes(buffer, size);
//     print_bytes(buffer_test, size);
//     return(0);
// }

// ****ft_strlen test****ok
// int main(void)
// {
//     char s[30] = "Hello World Babies";
//     char t[20] = "Hive Helsinki";
//     printf("The string %s has lengths-std function: %i \n", s, strlen(s));
//     printf("The string %s has lengths-custom function: %i \n", s, ft_strlen(s));
//     printf("The string %s has lengths-std function: %i \n", t, strlen(t));
//     printf("The string %s has lengths-custom function: %i \n", t, ft_strlen(t));
//     return 0;
// }

//****ft_strncmp test****ok
// int main(void)
// {
//     char *s[] = {"Hello World", "Hello", "A", "123", "a1b2c3"};
//     char *c[] = {"Hello World", "He", "AB", "12345", "a1b2 "};
//     size_t n = 8;
//         for (int i = 0; i < 5; i++)
//         {
//             printf("Std: The comparison of %s and %s is: %i \n", s[i], c[i], strncmp(s[i], c[i], n));
//             printf("Custom: The comparison of %s and %s is: %i \n", s[i], c[i], ft_strncmp(s[i], c[i], n));
//         }
//         return 0;  
// }
// extra test for strncmp
// int main(void)
// {
//     // Test cases for ft_strncmp
//     printf("Test 1: ft_strncmp(\"t\", \"\", 0) == 0 -> ");
//     printf("%d\n", ft_strncmp("t", "", 0));

//     printf("Test 2: ft_strncmp(\"1234\", \"1235\", 3) == 0 -> ");
//     printf("%d\n", ft_strncmp("1234", "1235", 3));

//     printf("Test 3: ft_strncmp(\"1234\", \"1235\", 4) < 0 -> ");
//     printf("%d\n", ft_strncmp("1234", "1235", 4));

//     printf("Test 4: ft_strncmp(\"1234\", \"1235\", -1) < 0 -> ");
//     printf("%d\n", ft_strncmp("1234", "1235", -1));

//     printf("Test 5: ft_strncmp(\"\", \"\", 42) == 0 -> ");
//     printf("%d\n", ft_strncmp("", "", 42));

//     return 0;
// }
// extra test for strncmp
// int main(void)
// {
//     char *s1 = "\200";
//     char *s2 = "\0";
//     //int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
//     //int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));

//     printf("Std result: %d \n", (strncmp(s1, s2, 1)));
//     printf("Custom result: %d \n", (ft_strncmp(s1, s2, 1)));
//     return 0;
// }

//****ft_strnstr****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char *c[] = {"is", "com", "day", "12345", "your"};
//     size_t n = 30;
//         for (int i = 0; i < 5; i++)
//         {
//             printf("Std: The position of %s in string %s is: %s \n", c[i], s, strnstr(s, c[i], n));
//             printf("Custom: The position of %s in string %s is: %s \n", c[i], s, ft_strnstr(s, c[i], n));
//         }
//     return 0;
// }
//extra test for strnstr
// #include <stdio.h>
// #include <string.h>

// #include <stdio.h>

// int main(void)
// {
//     char *empty = (char*)"";
    
//     // Testing your custom ft_strnstr with various inputs
//     printf("Return Value of Cus: %s \n", ft_strnstr(((void*)0), "fake", 0)); // Test with NULL haystack and size 0
//     printf("Return Value of Cus: %s \n", ft_strnstr(empty, "", 0)); // Test with empty haystack and empty needle, with size 0
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char haystack[30] = "aaabcabcd";
//     char needle[10] = "aabc";
//     char *empty = (char*)"";
    
//     /* 1 */
//     printf("Test 1: ");
//     if (ft_strnstr(haystack, needle, 0) == 0)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 2 */
//     printf("Test 2: ");
//     if (ft_strnstr(haystack, needle, -1) == haystack + 1)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 3 */
//     printf("Test 3: ");
//     if (ft_strnstr(haystack, "a", -1) == haystack)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 4 */
//     printf("Test 4: ");
//     if (ft_strnstr(haystack, "c", -1) == haystack + 4)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 5 */
//     printf("Test 5: ");
//     if (ft_strnstr(empty, "", -1) == empty)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 6 */
//     printf("Test 6: ");
//     if (ft_strnstr(empty, "", 0) == empty)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 7 */
//     printf("Test 7: ");
//     if (ft_strnstr(empty, "coucou", -1) == 0)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 8 */
//     printf("Test 8: ");
//     if (ft_strnstr(haystack, "aaabc", 5) == haystack)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
   
//     /* 9 */
//     printf("Test 9: ");
//     if (ft_strnstr(empty, "12345", 5) == 0)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 10 */
//     printf("Test 10: ");
//     if (ft_strnstr(haystack, "abcd", 9) == haystack + 5)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
    
//     /* 11 */
//     printf("Test 11: ");
//     if (ft_strnstr(haystack, "cd", 8) == NULL)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
   
//     /* 12 mbueno-g */
//     printf("Test 12: ");
//     if (ft_strnstr(haystack, "a", 1) == haystack)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
  
//     /* 13 opsec-infosec */
//     printf("Test 13: ");
//     if (ft_strnstr("1", "a", 1) == NULL)
//         printf("Pass\n");
//     else
//         printf("Fail\n");
   
//     /* 14 opsec-infosec */
//     printf("Test 14: ");
//     if (ft_strnstr("22", "b", 2) == NULL)
//         printf("Pass\n");
//     else
//         printf("Fail\n");

//     return 0;
// }


//****ft_strrchr ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char c[] = {'1', 'w', 'e', 'a', 'n'};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Std: The last position of %c in string %s is: %s \n", c[i], s, strrchr(s, c[i]));
//         printf("Custom: The last position of %c in string %s is: %s \n", c[i], s, ft_strrchr(s, c[i]));
//     }
//     return 0;
// }

//****ft_strtrim ****/
// int main(void)
// {
//     char s1[] = "2Hellor1 World12 ";
//     char *s2[] = {"2H", "2He", "d", "", "ll", "1", "2", " ", "  "};
//     for (int i = 0; i < 10; i++)
//     {
//         char *s3 = ft_strtrim(s1,s2[i]);
//         printf("The trim string from s1: %s and s2: %s is: %s \n", s1, s2[i], s3);
//         free (s3);
//     }
//     return (0);
// }

// //****ft_substr****
// int main(void)
// {
//     char s[] = "Hello World New Year European";
//     unsigned int start = 20;
//     size_t len  = 20;
//     printf("The result of substr start from %i position to %i character is: %s \n", start, len, ft_substr(s,start,len));
//     return 0;
// }

// ****tolower test**** test with char string and int string
// int main(void)
//     char c[] = {'1', '0', 'a', 'z', 'A', '$',' '};
//     int d[] = {-1, 0, 255, 300};
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The resut of std function convert %c to: %i \n", c[i], tolower(c[i]));
//         printf("The resut of my function convert %c to: %i \n", c[i], ft_tolower(c[i]));
//     }
//     printf("Test with negative value \n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The resut of std function convert %i to: %i \n", d[i], tolower(d[i]));
//         printf("The resut of my function convert %i to: %i \n", d[i], ft_tolower(d[i]));
//     }
//     return 0;
// }

// ****toupper test****ok
// int main(void)
// {
//     char c[] = {'1', '0', 'a', 'z', 'A', '$',' '};
//     int d[] = {-1, 0, 255, 300};
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The resut of std function convert %c to: %i \n", c[i], toupper(c[i]));
//         printf("The resut of my function convert %c to: %i \n", c[i], ft_toupper(c[i]));
//     }
//     printf("Test with negative value \n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The resut of std function convert %i to: %i \n", d[i], tolower(d[i]));
//         printf("The resut of my function convert %i to: %i \n", d[i], ft_tolower(d[i]));
//     }
//     return 0;
// }


