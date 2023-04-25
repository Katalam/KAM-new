class ACE_Medical_Treatment_Actions {
    class Blink {
        displayName = CSTRING(blink_display);
        displayNameProgress = CSTRING(blink_action);
        category = "bandage";
        treatmentLocations = 0;
        allowedSelections[] = {"Head"};
        allowSelfTreatment = 1;
        medicRequired = 0;
        treatmentTime = 2;
        items[] = {};
        condition = QGETGVAR(enable,true);
        callbackSuccess = QFUNC(treatmentAdvanced_blink);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 0;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class Eyewash {
        displayName = CSTRING(eyewash_display);
        displayNameProgress = CSTRING(eyewash_action);
        category = "bandage";
        treatmentLocations = 0;
        allowedSelections[] = {"Head"};
        allowSelfTreatment = 1;
        medicRequired = 0;
        treatmentTime = 2;
        items[] = {
            "ACE_salineIV",
        };
        condition = QGETGVAR(enable,true);
        callbackSuccess = QFUNC(treatmentAdvanced_eyewash);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };

    class Eyewash500: Eyewash {
        displayName = CSTRING(eyewash_display_500);
        items[] = {
            "ACE_salineIV_500",
        };
    };

    class Eyewash250: Eyewash {
        displayName = CSTRING(eyewash_display_250);
        items[] = {
            "ACE_salineIV_250",
        };
    };

    class EyewashWater: Eyewash {
        displayName = CSTRING(eyewash_display_water);
        items[] = {
            "ACE_Canteen",
            "ACE_Canteen_Half",
            "ACE_WaterBottle",
            "ACE_WaterBottle_Half",
        };
    };

    class EyewashItem: Eyewash {
        displayName = CSTRING(eyewasher_display_item);
        callbackSuccess = QFUNC(treatmentAdvanced_eyewasher);
        items[] = {};
        condition = QUOTE([ARR_2(_medic, 'KAT_Eyewasher')] call ACEFUNC(common,hasMagazine) || [ARR_2(_medic, 'KAT_Eyewasher')] call ACEFUNC(common,hasMagazine));
    };
};
