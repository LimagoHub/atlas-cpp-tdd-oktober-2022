//
// Created by JoachimWagner on 18.10.2022.
//

#pragma once


class blacklisted_person_service {
public:
    virtual bool is_blacklisted(const person &person_) const = 0;

};




