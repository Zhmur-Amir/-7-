#include "func.h"
int main(void)
{
    char slovo[256];
    func("test.txt", slovo);
    printf("%s\n", slovo);
    autotest();
}
