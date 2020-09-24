#include "menu.h"

Menu::~Menu()
{
    if(options != nullptr)
    {
        delete [] options;
    }
}

int Menu::Afficher()
{
    int choix;

    if (nbOptions == 0)
    {
        choix = -1;
    }
    else
    {
        cout << setfill ('-');
        //dessine la 1ere ligne du menu
        cout << "+-" << setw(4) << "-+-" << setw(longueurMax+2) << "+-" << endl;
        cout << setfill(' ');
        for(int i=0;i< nbOptions;i++)
        {
            cout << "| " << i+1 << " | " << setw(longueurMax) << options[i] << " |" << endl;
        }
        //dessine la derniere ligne
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" << setw(longueurMax+2) << "-+" << endl;
        cout << setfill(' ');

        do
        {
            cout << "Entrer un nombre entre 1 et " << nbOptions << " :" << endl;
            if(!(cin>>choix))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                choix=-1;
            }
        }while(choix < 1 | choix > 5);

}

    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer ...";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
}

Menu::Menu(const string &_nom):nom(_nom),longueurMax(0) //liste d'initialisation qui correspond à this->nom = _nom; et this-> longueurMax = 0;
{
    ifstream fichier("Menu.txt", fstream::in | fstream::out);
    if(!fichier.is_open())
    {
        cerr <<"erreur lors de l'ouverture du fichier" << endl; //affiche un message d'erreur si l'ouverture du fichier à echoué
        nbOptions = 0;
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichier),istreambuf_iterator<char>(),'\n')); //lis le fichier et compte le nb de ligne
        //allocation dynamique du tableau et création du tableau
        options = new string[nbOptions];
        fichier.seekg(0,ios::beg); //revenir au début du fichier

        for(int i=0;i<nbOptions;i++)
        {
            getline(fichier,options[i]);
            int longueur = static_cast<int>(options[i].length());
            if(longueur > longueurMax)
            {
                longueurMax = longueur;
            }
        }
    }
}
