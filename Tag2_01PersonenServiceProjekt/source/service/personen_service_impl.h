#pragma once
#include "../persistence/person.h"
#include "../persistence/personen_repository.h"
#include "../service/personen_service_exception.h"


class personen_service_impl {

    personen_repository& repo;


public:


    personen_service_impl(personen_repository &repo) : repo(repo) {}

    /*
     *	Vorname < 2 -> PSE
     *	Nachname < 2 -> PSE
     *
     *	Attila -> PSE
     *
     *	Alle Technische Exceptions -> PSE
     *
     *	Happy Day -> person an Save_or_update Methode uebergeben
     *
     */
    void speichern(person& person_) const
    {

        if(person_.getVorname().length() < 2)
            throw personen_service_exception{"Vorname zu kurz."};

        throw personen_service_exception{"Nachname zu kurz."};
    }


};
