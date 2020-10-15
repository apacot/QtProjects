#include "comptebancaire.h"
#include "compteepargne.h"

int main()
{

    enum CHOIX_MENU
    {
        OPTION_1 = 1,
        OPTION_2,
        OPTION_3,
        OPTION_4,
        QUITTER
    };

    int choix;
    float soldeCompte;
    float montant;
    float gainInteret;

    CompteEpargne unCompte;

    Menu leMenu("compteEpargne.txt");

    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case(OPTION_1):
            cout << "Vous avez choisi de consulter votre solde" << endl;
            soldeCompte = unCompte.ConsulterSolde();
            cout << "Solde de votre compte : " << soldeCompte << " €" << endl;
            leMenu.AttendreAppuiTouche();
            break;
        case(OPTION_2):
            cout << "Vous avez choisi de d'effectuer un dépot" << endl;
            cout << "Quel est le montant de votre dépot ? ";
            cin >> montant;
            unCompte.Deposer(montant);
            leMenu.AttendreAppuiTouche();
            break;
        case(OPTION_3):
            cout << "Vous avez choisi d'effectuer un retrait" << endl;
            bool retour;
            cout << "Quel est le montant de votre retrait ? ";
            cin >> montant;
            retour = unCompte.Retirer(montant);
            if(retour == false)
            {
                string ErrorMessage = "Solde Insuffisant !";
                Exception excep(404, ErrorMessage);
                throw (excep);
            }
            else
                cout << "Vous avez retirer avec succès " << montant << " €" << endl;
            leMenu.AttendreAppuiTouche();
            break;
        case(OPTION_4):
            cout << "Vous avez choisi de calculer les interets" << endl;
            gainInteret = unCompte.CalculerInterets();
            cout << "Vos interets s'elevent à : " << gainInteret << " €" << endl;
            break;
        case(QUITTER):
            cout << "Vous avez choisi de quitter" << endl;
            leMenu.AttendreAppuiTouche();
            break;

        }
    }while(choix != 5);




/*  TestCompteBancaire
 *
 * enum CHOIX_MENU
    {
        OPTION_1 = 1,
        OPTION_2,
        OPTION_3,
        OPTION_4,
        QUITTER
    };

    int choix;
    float soldeCompte;
    float montant;
    CompteBancaire unCompte(3600.52);

    Menu leMenu("compteBancaire.txt");

    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case(OPTION_1):
            cout << "Vous avez choisi de consulter votre solde" << endl;
            soldeCompte = unCompte.ConsulterSolde();
            cout << "Solde de votre compte : " << soldeCompte << " €" << endl;
            leMenu.AttendreAppuiTouche();
            break;
        case(OPTION_2):
            cout << "Vous avez choisi de d'effectuer un dépot" << endl;
            cout << "Quel est le montant de votre dépot ? ";
            cin >> montant;
            unCompte.Deposer(montant);
            leMenu.AttendreAppuiTouche();
            break;
        case(OPTION_3):
            cout << "Vous avez choisi d'effectuer un retrait" << endl;
            bool retour;
            cout << "Quel est le montant de votre retrait ? ";
            cin >> montant;
            retour = unCompte.Retirer(montant);
            if(retour == false)
            {
                string ErrorMessage = "Solde Insuffisant !";
                Exception excep(404, ErrorMessage);
                throw (excep);
            }
            else
                cout << "Vous avez retirer avec succès " << montant << " €" << endl;
            leMenu.AttendreAppuiTouche();
            break;
        case(QUITTER):
            cout << "Vous avez choisi de quitter" << endl;
            leMenu.AttendreAppuiTouche();
            break;

        }
    }while(choix != 3);
*/

    return 0;
}
