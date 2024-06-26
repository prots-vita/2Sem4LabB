#include <stdio.h>
#include "bec.h"
#include "dialog.h"
#include <stdlib.h>

int main()
{
        Tree *tree = NULL;
        int rc;
        const char *msgs[] = { "0. Quit", "1. Add", "2. Find", "3. Delete", "4. Show", "5. File", "6. Bypass", "7. Time", "8. Special Find" };
        const int NMsgs = sizeof(msgs) / sizeof(msgs[0]);
        const int(*fptr[])(Tree **) = { NULL, Dadd, Dfind, Ddelete, Dshow, Dfile, Dbypass, Dtime, DMyFunc };
        while (rc = dialog(msgs, NMsgs))
                if (fptr[rc](&tree))
                        break;
        printf("That's all. Bye!\n");
//      import(tree);
        clearn(&tree);
//      system("dot g.dot -Tpng -og.png");
        return 0;
}
