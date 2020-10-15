#include "element.h"
#include "segment.h"
#include "trajectoire.h"

int main()
{
    bool res,res2;
    Segment unSegment(9,0,0,3);
    Segment unAutreSegment(5,0.927295,0,1);
    Trajectoire uneTrajectoire(3);

    res = uneTrajectoire.Ajouter(&unSegment);
    res2= uneTrajectoire.Ajouter(&unAutreSegment);
    uneTrajectoire.Afficher();

    return 0;
}
