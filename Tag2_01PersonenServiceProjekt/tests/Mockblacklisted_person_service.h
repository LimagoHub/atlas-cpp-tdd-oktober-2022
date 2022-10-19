//
// Created by JoachimWagner on 11.10.2022.
//
#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../source/service/blacklisted_person_service.h"
#include "../source/persistence/person.h"

class Mockblacklisted_person_service : public blacklisted_person_service {
public:
    MOCK_METHOD(bool, is_blacklisted, (const person& person), (const, override));

};





