# SG_PDF2Text
www.securedglobe.net

A tool for converting PDF files into text. Based on **xpdf** (see: https://www.xpdfreader.com/download.html ).

## Unit tests

`Tests/Pdf2TextTests` includes `SG_PDF2TXT/resource.h` and checks dialog and control IDs (`IDD_SG_PDF2TXT_DIALOG`, `IDC_EDT_PDF_PATH`, `IDC_BTN_CONVERT`). Build and run:

```
msbuild Tests\Pdf2TextTests\Pdf2TextTests.vcxproj /p:Configuration=Release /p:Platform=x64
Tests\Pdf2TextTests\x64\Release\Pdf2TextTests.exe
```


