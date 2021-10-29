#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include "resource.h"

static void Fail(const char* msg)
{
    std::printf("FAIL %s\n", msg);
    std::exit(1);
}

int main()
{
    if (IDD_SG_PDF2TXT_DIALOG != 102)
    {
        Fail("IDD_SG_PDF2TXT_DIALOG");
    }
    if (IDC_EDT_PDF_PATH != 1000)
    {
        Fail("IDC_EDT_PDF_PATH");
    }
    if (IDC_BTN_CONVERT != 1002)
    {
        Fail("IDC_BTN_CONVERT");
    }
    std::printf("OK Pdf2TextTests\n");
    return 0;
}
