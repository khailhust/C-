#include "VanBan.h"

int main()
{
    VanBan Vanban;
    Vanban.Input();
    Vanban.OutPut();
    cout << "Word Counter: " << Vanban.wordCount() << endl;
    cout << "Character A/a : " << Vanban.charACount() << endl;
    Vanban.stringNormalize();
    cout << "After Normalize: ";
    Vanban.OutPut();
}