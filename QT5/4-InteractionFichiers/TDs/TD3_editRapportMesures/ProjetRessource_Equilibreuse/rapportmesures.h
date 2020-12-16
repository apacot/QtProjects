#ifndef RAPPORTMESURES_H
#define RAPPORTMESURES_H

#include <QPdfWriter>
#include <QFont>
#include <QtCharts>
#include <QString>
#include <QDebug>
#include <QFileDialog>
#include <QPainter>
#include "experience.h"

class RapportMesures : public QPdfWriter
{
public:
    RapportMesures(Experience &_experience, QChartView &_graphique, const QString &_nomDuFichier);
    void ConstruireRapport();
private:
    int largeurPdf;
    int hauteurPdf;
    int margeGauche;
    int margeHaut;
    int largeurUtile;
    int padding;
    QFont fontTitre;
    QFont fontTexte;
    QPainter painter;
    void FabriquerEntete();
    void FabriquerResultats(int position);
    void FabriquerGraphique(int position);
    void FabriquerCommentaire(int position);

};

#endif // RAPPORTMESURES_H
