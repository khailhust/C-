#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TaiLieu
{
private:
    string Code;
    string Nxb;
    int publishNumber;
public:
    TaiLieu()
    {
        Code = "unknow";
        Nxb = "unknow";
        publishNumber = 0;
    }
    TaiLieu(string Code, string Nxb, int publishNumber)
    {
        this->Code = Code;
        this->Nxb = Nxb;
        this->publishNumber = publishNumber;
    }

    string getCode()
    {
        return Code;
    }

    void setCode(string Code)
    {
        this->Code = Code;
    }

    string getNxb()
    {
        return Nxb;
    }

    void setNxb(string Nxb)
    {
        this->Nxb = Nxb;
    }

    int getPublishNumber()
    {
        return publishNumber;
    }

    void setPublishNumber(int publishNumber)
    {
        this->publishNumber = publishNumber;
    }

    virtual void InputInformation()
    {
        string buff;
        int number;

        cout << "Enter Code: ";
        cin.ignore();
        getline(cin, buff);
        setCode(buff);

        cout << "Enter Nxb: ";
        cin.ignore();
        getline(cin, buff);
        setNxb(buff);

        cout << "Enter publish number: ";
        cin >> number;
        setPublishNumber(number);
    }

    virtual void ShowInformation()
    {
        cout << "Code: " << getCode() << ", Nxb: " << getNxb() << ", Publish Number: " << getPublishNumber();
    }
};

class Sach : public TaiLieu
{
private:
    string Author;
    int pageNumber;
public:
    Sach()
    {
        Author = "unknow";
        pageNumber = 0;
    }

    Sach(string Code, string Nxb, int publishNumber, string Author, int pageNumber) : TaiLieu(Code, Nxb, publishNumber)
    {
        this->Author = Author;
        this->pageNumber = pageNumber;
    }

    string getAuthor()
    {
        return Author;
    }

    void setAuthor(string Author)
    {
        this->Author = Author;
    }

    int getPageNumber()
    {
        return pageNumber;
    }

    void setPageNumber(int pageNumber)
    {
        this->pageNumber = pageNumber;
    }

    void InputInformation()
    {
        TaiLieu::InputInformation();

        string buff;
        int number;

        cout << "Enter Author: ";
        cin.ignore();
        getline(cin, buff);
        setAuthor(buff);

        cout << "Enter Page Number: ";
        cin >> number;
        setPageNumber(number);
    }

    void ShowInformation()
    {
        TaiLieu::ShowInformation();

        cout << ", Author: " << getAuthor() << ", Page Number: " << getPageNumber() << endl;
    }
};

class TapChi : public TaiLieu
{
private:
    int releaseNumber;
    int releaseMonth;
public:
    TapChi()
    {
        releaseNumber = 0;
        releaseMonth = 0;
    };
    TapChi(string Code, string Nxb, int publishNumber, int releaseNumber, int releaseMonth) : TaiLieu(Code, Nxb, publishNumber)
    {
        this->releaseNumber = releaseNumber;
        this->releaseMonth = releaseMonth;
    }

    int getReleaseNumber()
    {
        return releaseNumber;
    }

    void setReleaseNumber(int releaseNumber)
    {
        this->releaseNumber = releaseNumber;
    }

    int getReleaseMonth()
    {
        return releaseMonth;
    }

    void setReleaseMonth(int releaseMonth)
    {
        this->releaseMonth = releaseMonth;
    }

    void InputInformation()
    {
        TaiLieu::InputInformation();

        int num;

        cout << "Enter Release Number: ";
        cin >> num;
        setPublishNumber(num);

        cout << "Enter Release Month: ";
        cin >> num;
        setReleaseMonth(num);
    }

    void ShowInformation()
    {
        TaiLieu::ShowInformation();

        cout << ", Release Number: " << getReleaseNumber() << ", Release Month: " << getReleaseMonth() << endl;
    }
};

class Bao : public TaiLieu
{
private:
    int releaseDate;
public:
    Bao()
    {
        releaseDate = 0;
    };
    Bao(string Code, string Nxb, int publishNumber, int releaseDate) : TaiLieu(Code, Nxb, publishNumber)
    {
        this->releaseDate = releaseDate;
    }

    int getReleaseDate()
    {
        return releaseDate;
    }

    void setReleaseDate(int releaseDate)
    {
        this->releaseDate = releaseDate;
    }

    void InputInformation()
    {
        TaiLieu::InputInformation();

        int num;

        cout << "Enter Release Date: ";
        cin >> num;
        setPublishNumber(num);
    }

    void ShowInformation()
    {
        TaiLieu::ShowInformation();

        cout << ", Release Date: " << getReleaseDate() << endl;
    }
};

class QuanLySach
{
private:
    vector <TaiLieu*> DSTaiLieu;
public:
    void addNew()
    {
        TaiLieu* Document = nullptr;
        int choice = 0;
        cout << "1.Them moi Sach\n";
        cout << "2.Them moi Tap Chi\n";
        cout << "3.Them moi Bao\n";
        cout << "Nhap lua chon(1, 2, 3): ";
        cin >> choice;
        if (1 == choice)
        {
            Document = new Sach;
        }
        else if (2 == choice)
        {
            Document = new TapChi;
        }
        else if (3 == choice)
        {
            Document = new Bao;
        }
        else
        {
            cout << "Khong co lua chon nay!\n";
        }
        Document->InputInformation();
        DSTaiLieu.push_back(Document);
    }

    void deleteDoc()
    {
        string code;

        cout << "Nhap ma tai lieu can xoa: ";
        cin.ignore();
        getline(cin, code);
        for (size_t i = 0; i < DSTaiLieu.size(); ++i)
        {
            if (code == DSTaiLieu.at(i)->getCode())
            {
                DSTaiLieu.erase(DSTaiLieu.begin() + i);
            }
        }
    }

    void Show()
    {
        for (size_t i = 0; i < DSTaiLieu.size(); ++i)
        {
            DSTaiLieu.at(i)->ShowInformation();
        }
    }

    void Search()
    {

    }

    void Exit()
    {
        exit(0);
    }
};

int main()
{
    QuanLySach QuanLy;
    int Choose;
    while (true)
    {
        system("cls");
        cout << "1. Them moi tai lieu\n";
        cout << "2. Xoa tai lieu theo ma tai lieu\n";
        cout << "3. Hien thi thong tin ve tai lieu\n";
        cout << "4. Tim kiem tai lieu theo loai\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "-------------------------------------\n";
        cout << "Nhap lua chon: ";
        cin >> Choose;
        switch (Choose)
        {
        case 1:
            cout << "Them moi tai lieu:\n";
            QuanLy.addNew();
            system("pause");
            break;
        case 2:
            cout << "Xoa tai lieu:\n";
            QuanLy.deleteDoc();
            system("pause");
            break;
        case 3:
            cout << "Danh sach tai lieu:\n";
            QuanLy.Show();
            system("pause");
            break;
        case 4:
            QuanLy.Search();
            system("pause");
            break;
        case 0:
            QuanLy.Exit();
            system("pause");
            break;
        default:
            cout << "Khong co lua chon nay!\n";
            system("pause");
            break;
        }
    }
}