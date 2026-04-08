#include <iostream>
#include <cstring>    // C string functions: strlen, strcpy, strncpy, strcat, strncat, strcmp, strstr, strchr, strrchr
#include <algorithm>  // std::reverse, std::transform
#include <cctype>     // std::tolower, std::toupper

using namespace std;

int main() {
    // Prepare buffers (make them large enough to avoid overflow)
    char s1[50] = "Hello";
    char s2[50] = "World";
    char buf[100];

    cout << "Initial strings:\n";
    cout << "s1 = \"" << s1 << "\"\n";
    cout << "s2 = \"" << s2 << "\"\n\n";

    // strlen
    cout << "strlen(s1) = " << strlen(s1) << "\n\n";

    // strcpy
    strcpy(buf, s1); // buf <- s1
    cout << "After strcpy(buf, s1): buf = \"" << buf << "\"\n";

    // strncpy (copy at most n chars -- must ensure null termination)
    strncpy(buf, s2, 3); // copy first 3 chars of s2
    buf[3] = '\0';       // strncpy doesn't always null-terminate
    cout << "After strncpy(buf, s2, 3): buf = \"" << buf << "\"\n\n";

    // strcat (append s2 to s1 in buffer)
    strcpy(buf, s1);       // start from s1
    strcat(buf, " ");      // add a space
    strcat(buf, s2);       // append s2
    cout << "After strcat(buf, \" \") and strcat(buf, s2): buf = \"" << buf << "\"\n";

    // strncat (append at most n characters)
    strcpy(buf, s1);
    strncat(buf, " ", 1);
    strncat(buf, s2, 3); // append first 3 chars of s2
    cout << "After strncat(buf, s2, 3): buf = \"" << buf << "\"\n\n";

    // strcmp (compare strings)
    cout << "strcmp(\"abc\", \"abc\") = " << strcmp("abc", "abc") << "  (0 means equal)\n";
    cout << "strcmp(\"abc\", \"abd\") = " << strcmp("abc", "abd") << "  (negative means first < second)\n\n";

    // strstr (find substring)
    const char *found = strstr("Hello World", "World");
    if (found) cout << "strstr(\"Hello World\", \"World\") found at: \"" << found << "\"\n";
    else cout << "strstr not found\n";

    // strchr (find first occurrence of a char)
    const char *cpos = strchr("Hello", 'l'); // first 'l'
    if (cpos) cout << "strchr(\"Hello\", 'l') -> \"" << cpos << "\" (first occurrence)\n";

    // strrchr (find last occurrence of a char)
    const char *crpos = strrchr("Hello", 'l'); // last 'l'
    if (crpos) cout << "strrchr(\"Hello\", 'l') -> \"" << crpos << "\" (last occurrence)\n\n";

    // Non-standard older functions (strlwr / strupr / strrev) do not exist in standard C++.
    // Show standard C++ ways to do lowercase, uppercase and reverse using std::string.

    string st = "AbCde";
    cout << "Original string (std::string): " << st << "\n";

    // tolower (equivalent to strlwr)
    string lower = st;
    transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char ch){ return tolower(ch); });
    cout << "toLower (std::transform + tolower): " << lower << "\n";

    // toupper (equivalent to strupr)
    string upper = st;
    transform(upper.begin(), upper.end(), upper.begin(), [](unsigned char ch){ return toupper(ch); });
    cout << "toUpper (std::transform + toupper): " << upper << "\n";

    // reverse (equivalent to strrev)
    string rev = st;
    reverse(rev.begin(), rev.end());
    cout << "reverse (std::reverse): " << rev << "\n";

    return 0;
}
