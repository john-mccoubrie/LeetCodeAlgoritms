#include <stdio.h>
#include <stdlib.h>

int symbolic_to_octal(const char *perm_string)
{
    // Waiting to be implemented
    unordered_map<char, int> map;
  
  map['r'] = 4;
  map['w'] = 2;
  map['x'] = 1;
  map['-'] = 0;
  
  
  
    return -1;
}

#ifndef RunTests
int main()
{
  
    // Should write 752
    printf("%d", symbolic_to_octal("rwxr-x-w-"));
}
#endif

