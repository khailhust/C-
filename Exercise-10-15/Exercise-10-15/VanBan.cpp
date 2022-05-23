#include "VanBan.h"

VanBan::VanBan()
{
    st = " ";
}

VanBan::VanBan(string st)
{
    this->st = st;
}

void VanBan::Input()
{
    cout << "Enter document: ";
    //cin.ignore();
    getline(cin, this->st);
}

void VanBan::OutPut()
{
    cout << this->st << endl;
}

int VanBan::wordCount()
{
    int word = (st.at(0) != ' ');

    for (size_t i = 0; i < st.length() - 1; i++)
    {
        if (st.at(i) == ' ' && st.at(i + 1) != ' ')
        {
            word++;
        }
    }

    return word;
}

int VanBan::charACount()
{
    int count = 0;

    for (size_t i = 0; i < st.length(); ++i)
    {
        if (st.at(i) == 'a' || st.at(i) == 'A')
        {
            count++;
        }
    }

    return count;
}

void VanBan::stringNormalize()
{
    while (st.at(0) == ' ')
    {
        st.erase(st.begin());
    }

    while (st.at(st.length() - 1) == ' ')
    {
        st.erase(st.begin() + st.length() - 1);
    }

    for (size_t i = 0; i < st.length()-1; ++i)
    {
        if (st.at(i) == ' ' && st.at(i + 1) == ' ')
        {
            st.erase(st.begin() + i);
            i--;
        }
    }
}
