#include "utils.h"
#include "includeAll.h"

/**
 * Gets the suffix of the string.
 * @param from - the source string. This is where we get
 *               the suffix from.
 * @param to   - the destination string. We need an
 *               existing string to
 * @param idx  - the index (inclusive) of the "from" string
 *               to start    suffixing
 *               (e.g. suffix "blitzkreig" at index 5:
 *                "zkreig")
 */
void stringSuffix(String from, String to, int idx)
{
    int i;
    String temp;
    for (i = 0;      // initialize
         i != idx;   // stop at idx
         i++)        // increment
    {

    }
    // at this point,  i  holds the index at which
    // the \0 of "from" string is.
}
