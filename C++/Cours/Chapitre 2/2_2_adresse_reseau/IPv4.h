#ifndef IPV4_H
#define IPV4_H

//TOUTES LES FONCTIONS EN COMMENTAIRE FONT PARTI DU COURS 2.2

class IPv4
{
private:
    unsigned char * adresse;
    unsigned char * masque;
    // void CalculerMasque(unsigned char _cidr);

public:
    IPv4(const unsigned char * _adresse, const unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~IPv4(); //desctructeur
    // Ajout pour la forme canonique en plus du destructeur
    IPv4();
    IPv4(const IPv4& _ipv4); //constructeur de copie
    IPv4 &operator= (const IPv4& _ipv4); //operateur d'affectation
private:
    void CalculerMasque(const unsigned char _cidr);
public:
    void obtenirMasque(unsigned char * _masque);
    void obtenirAdresseReseau(unsigned char * _reseau);
    void obtenirAdresseDiffusion(unsigned char * _diffusion);
    void AfficherTableau(unsigned char * tab);
    void obtenirPremiereAdresse(unsigned char * adresse);
    void obtenirDerniereAdresse(unsigned char * adresse);
};

#endif // IPV4_H
