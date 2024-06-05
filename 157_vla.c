#if __STDC_NO_VLA__ == 1
   #error Sorry, need VLAs for this program!
#endif

int main()
{
    /* we can use size determined at runtime */
    int n = 10;
    int v[n];
}