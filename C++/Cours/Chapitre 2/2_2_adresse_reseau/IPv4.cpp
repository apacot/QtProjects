#include <iostream>
#include "IPv4.h"
using namespace std;

//TOUTES LES FONCTIONS EN COMMENTAIRE FONT PARTI DU COURS 2.2

void IPv4::CalculerMasque(unsigned char _cidr)
{
    int i;
    // le masque est remis à 0 -> 0.0.0.0
    for (i=0;i<4;i++)
    {
        masque[i] = 0;
    }
    i=0;
    //tant que le cidr est un multiple de 8
    while (_cidr >=8)
    {
        masque[i++] = 255;
        _cidr -= 8; //correspond à _cidr = _cidr - 8;
    }
    //complément pour la fin du cidr (<8)
    unsigned char puissance = 128;
    while (_cidr-->0 ) //après le test, la variable _cidr est décrémentée
    { // les puissances de 2 sot ajoutées à l'octet par valeur décroissante
        masque[i] += puissance; //correspond à masque[i] = masque[i] + puissance;
        puissance /=2; // correspond à puissance = puissance / 2;
    }
}

IPv4::IPv4(const unsigned char *_adresse, const unsigned char _cidr)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int i = 0; i <4; i++)
    {
        adresse[i] = _adresse[i];
    }
    if(_cidr <=32)
    {
        CalculerMasque(_cidr);
    }
}

IPv4::IPv4(const unsigned char *_adresse, const unsigned char *_masque)
{
    adresse = new unsigned char [4];
    masque = new unsigned char[4];
    for(int i=0; i<4; i++)
    {
        adresse[i] = _adresse[i];
        masque[i] = _masque[i];
    }
}

IPv4::~IPv4()
{
    delete [] adresse;
    delete [] masque;
}

IPv4::IPv4()
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
}

IPv4::IPv4(const IPv4 &_ipv4)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int i=0 ; i<4;i++)
    {
        adresse[i] =_ipv4.adresse[i];
        masque[i] = _ipv4.masque[i];
    }
}

IPv4 &IPv4::operator=(const IPv4 &_ipv4)
{
    if(adresse != _ipv4.adresse || masque != _ipv4.masque)
    {
        if(adresse != nullptr && masque != nullptr)
        {
            delete [] adresse;
            delete [] masque;
        }
        adresse = new unsigned char [4];
        masque = new unsigned char [4];
        for (int i =0; i<4; i++)
        {
            masque[i] = _ipv4.masque[i];
            adresse[i] = _ipv4.adresse[i];
        }
    }
    return *this;
}

void IPv4::obtenirMasque(unsigned char *_masque)
{
    for(int i=0; i<4;i++)
    {
        _masque[i] = masque[i];
    }
}

void IPv4::obtenirAdresseReseau(unsigned char *_reseau)
{
    for(int i=0;i<4;i++)
    {
        _reseau[i] = adresse[i] & masque[i];
    }
}

void IPv4::obtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    obtenirAdresseReseau(adresseDuReseau);
    for(int i=0;i<4;i++)
    {
        _diffusion[i] = adresseDuReseau[i] | ~masque[i];
    }
}

void IPv4::AfficherTableau(unsigned char *tab)
{
    for(int i=0;i<4;i++)
    {
        cout << static_cast<int>(tab[i]);
        if(i < 3)
        {
            cout << ".3";
        }
    }
    cout << endl;
}

void IPv4::obtenirPremiereAdresse(unsigned char * adresse)
{
    unsigned char adresseReseau[4];
    obtenirAdresseReseau(adresseReseau);
    adresseReseau[3]++;
    for (int i =0; i<4;i++)
    {
        adresse[i] = adresseReseau[i];
    }
}

void IPv4::obtenirDerniereAdresse(unsigned char * adresse)
{
    unsigned char adresseDiffusion[4];
    obtenirAdresseDiffusion(adresseDiffusion);
    adresseDiffusion[3]--;
    for (int i =0; i<4;i++)
    {
        adresse[i] = adresseDiffusion[i];
    }
}
