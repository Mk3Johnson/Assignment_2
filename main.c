
#include <stdio.h>
#include "business_logic.h"
#include "common.h"
#include "utils.h"
#define webstore_list_len (int)(sizeof(list)/sizeof(list[0])) -1







// Initialize the webstore
// When choosing to leave, the webstore and all content is removed
int main() {
    webstore_t *webstore = webstore_init();;
    webstore = webstore_init();
    webstore_menu(webstore);
    webstore_remove(webstore);
    return 0;
}
