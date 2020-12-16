#include "rapportmesures.h"

RapportMesures::RapportMesures(Experience &_experience, QChartView &_graphique, const QString &_nomDuFichier):QPdfWriter(_nomDuFichier)
{
    setPageSize(QPageSize(QPageSize::A4));
    setPageOrientation(QPageLayout::Portrait);
    //setResolution(150);
    setResolution(300);
    largeurPdf = width();
    hauteurPdf = height();
    largeurUtile = largeurPdf * 0.9; //90% de la largeur
    margeGauche = largeurPdf * 0.05; //5% de la largeur
    margeHaut = hauteurPdf *0.025; //2.5% de la hauteur
    padding = 300 * 0.1; //10% de la résolution
    qDebug() << largeurPdf;
    qDebug() << hauteurPdf;
}

void RapportMesures::ConstruireRapport()
{
    painter.begin(this);
    FabriquerEntete();
    FabriquerResultats(hauteurPdf*0.15);
    FabriquerGraphique(hauteurPdf*0.35);
    FabriquerCommentaire(hauteurPdf*0.8);
    painter.end();
}

void RapportMesures::FabriquerEntete()
{

}

void RapportMesures::FabriquerResultats(int position)
{

}

void RapportMesures::FabriquerGraphique(int position)
{

}

void RapportMesures::FabriquerCommentaire(int position)
{

}
