#include "digicode.h"
#include "ui_digicode.h"

digicode::digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::digicode)
{
    ui->setupUi(this);

    int ligne = 0, colonne = 0;
    grille = new QGridLayout(this);
    afficheur = new QLineEdit(this);
     //allocation dynamique d'un tableau de pointeur
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight); //alignement des caractères à droites
    afficheur->setEchoMode(QLineEdit::Password); //caractères type password : masqué
    afficheur->setMinimumHeight(80);
    grille->addWidget(afficheur,ligne,colonne,1,3); //(objet,x,y,rowspan,colspan)
    //création du clavier
    QString TableDesSymboles[4][3] = {{"7","8","9"},{"4","5","6"},{"1","2","3"},{"On","0","Ok"}};

    //création des 12 touches
    ligne = 4;
    colonne = 3;
    for(int li = 0;li<ligne;li++) //li pour lignes
    {
        for(int col = 0; col<colonne;col++) //col pour colonne
        {
            touches[li][col] = new QPushButton;
            touches[li][col]->setText(TableDesSymboles[li][col]);
            touches[li][col]->setMaximumWidth(80);
            touches[li][col]->setMinimumHeight(80);
            touches[li][col]->setStyleSheet("background-color: gray;");
            grille->addWidget(touches[li][col],li+1,col);
            connect(touches[li][col],&QPushButton::clicked,this,&digicode::onQPushButtonClicked);
            connect(&tempoGache,&QTimer::timeout,this,&digicode::onTimerTempoGache_timeout);
            connect(&tempoVerrouillage,&QTimer::timeout,this,&digicode::onTimerTempoVerrouillage_timeout);
        }
    }
    this->setLayout(grille);
    tempoGache.setSingleShot(true);

}

digicode::~digicode()
{
    delete ui;
    delete grille;
    delete afficheur;
    delete [] touches[4][3];
}

void digicode::onQPushButtonClicked()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender()); //récupère l'émetteur du signal
    QString texteBouton = pbouton->text(); //met le texte du bouton cliqué dans texteBouton

    //Si le texte du bouton est différent de Ok et différent de On --> Dans le cas présent, si c'est un chiffre
    if (texteBouton != "Ok" && texteBouton != "On")
    {
        code = code + texteBouton;
    }
    else //Sinon, donc si c'est Ok ou On
    {
        if(texteBouton == "Ok") //si le bouton cliqué est Ok
        {
            if(code == codeSecret) //Si le code est valide
            {
                /* Affichage du message pour l'étape 1
                QMessageBox message;
                message.setText("La porte est déverrouillée");
                message.exec();
                */
                code = ""; //Supprime le code rentré
                laPorte.show();
                laPorte.deverrouiller();
                tempoGache.start(3000);
                nbErreur = 0;
            }
            else  //sinon, le code est invalide
            {
                /* Affichage du message pour l'étape 1
                    QMessageBox message;
                    message.setText("Code Faux");
                    message.exec();
                    */
                code = ""; //Supprime le code rentré
                laPorte.verrouiller();
                nbErreur++;
                if(nbErreur == 3)
                {
                    for(int ligne=0;ligne<4;ligne++)
                    {
                        for(int colonne = 0;colonne<3;colonne++)
                        {
                            touches[ligne][colonne]->setEnabled(false);
                        }
                    }
                    tempoVerrouillage.start(60000);
                    QMessageBox message;
                    message.setText("3 Erreurs !");
                    message.exec();
                }
            }
        }
        if(texteBouton == "On") //si le bouton cliqué est On
        {
            code = ""; //Supprime le code rentré
        }
    }
    afficheur->setText(code); //afficher le code dans l'afficheur
}

void digicode::onTimerTempoGache_timeout()
{
    laPorte.verrouiller();
    tempoGache.stop();
}

void digicode::onTimerTempoVerrouillage_timeout()
{
    for(int ligne=0;ligne<4;ligne++)
    {
        for(int colonne = 0;colonne<3;colonne++)
        {
            touches[ligne][colonne]->setEnabled(true);
        }
    }
    tempoVerrouillage.stop();
}

