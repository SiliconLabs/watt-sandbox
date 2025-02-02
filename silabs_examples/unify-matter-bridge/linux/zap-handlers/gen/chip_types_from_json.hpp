/*******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/


// Default translation
template <typename T>
std::optional<T> from_json(const nlohmann::json & value)
{
    return std::nullopt;
}

/***************************** Simple types Convertes **************/

template<> inline
std::optional<bool> from_json(const nlohmann::json  & value)
{
    return value;
}

template<> inline
std::optional<int> from_json(const nlohmann::json  & value)
{
    return value;
}

template<> inline
std::optional<std::string> from_json(const nlohmann::json & value)
{
    return value;
}


/***************************** Bitmap Convertes **************/
//
//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<Identify::IdentifyEffectIdentifier> from_json(const nlohmann::json& value) {
    const std::map< std::string, Identify::IdentifyEffectIdentifier> 
        table = {
            { "Blink" , Identify::IdentifyEffectIdentifier::kBlink },
            { "Breathe" , Identify::IdentifyEffectIdentifier::kBreathe },
            { "Okay" , Identify::IdentifyEffectIdentifier::kOkay },
            { "ChannelChange" , Identify::IdentifyEffectIdentifier::kChannelChange },
            { "FinishEffect" , Identify::IdentifyEffectIdentifier::kFinishEffect },
            { "StopEffect" , Identify::IdentifyEffectIdentifier::kStopEffect },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Identify::IdentifyEffectVariant> from_json(const nlohmann::json& value) {
    const std::map< std::string, Identify::IdentifyEffectVariant> 
        table = {
            { "Default" , Identify::IdentifyEffectVariant::kDefault },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Identify::IdentifyIdentifyType> from_json(const nlohmann::json& value) {
    const std::map< std::string, Identify::IdentifyIdentifyType> 
        table = {
            { "None" , Identify::IdentifyIdentifyType::kNone },
            { "VisibleLight" , Identify::IdentifyIdentifyType::kVisibleLight },
            { "VisibleLED" , Identify::IdentifyIdentifyType::kVisibleLED },
            { "AudibleBeep" , Identify::IdentifyIdentifyType::kAudibleBeep },
            { "Display" , Identify::IdentifyIdentifyType::kDisplay },
            { "Actuator" , Identify::IdentifyIdentifyType::kActuator },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<Groups::GroupClusterFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<Scenes::ScenesCopyMode, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Scenes::Structs::AttributeValuePair::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const Scenes::Structs::ExtensionFieldSet::Type& value) {
//    return "no struct support";
//}
//
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<OnOff::OnOffControl, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<OnOff::OnOffFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<OnOff::SceneFeatures, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<OnOff::OnOffDelayedAllOffEffectVariant> from_json(const nlohmann::json& value) {
    const std::map< std::string, OnOff::OnOffDelayedAllOffEffectVariant> 
        table = {
            { "FadeToOffIn0p8Seconds" , OnOff::OnOffDelayedAllOffEffectVariant::kFadeToOffIn0p8Seconds },
            { "NoFade" , OnOff::OnOffDelayedAllOffEffectVariant::kNoFade },
            { "50PercentDimDownIn0p8SecondsThenFadeToOffIn12Seconds" , OnOff::OnOffDelayedAllOffEffectVariant::k50PercentDimDownIn0p8SecondsThenFadeToOffIn12Seconds },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OnOff::OnOffDyingLightEffectVariant> from_json(const nlohmann::json& value) {
    const std::map< std::string, OnOff::OnOffDyingLightEffectVariant> 
        table = {
            { "20PercenterDimUpIn0p5SecondsThenFadeToOffIn1Second" , OnOff::OnOffDyingLightEffectVariant::k20PercenterDimUpIn0p5SecondsThenFadeToOffIn1Second },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OnOff::OnOffEffectIdentifier> from_json(const nlohmann::json& value) {
    const std::map< std::string, OnOff::OnOffEffectIdentifier> 
        table = {
            { "DelayedAllOff" , OnOff::OnOffEffectIdentifier::kDelayedAllOff },
            { "DyingLight" , OnOff::OnOffEffectIdentifier::kDyingLight },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OnOff::OnOffStartUpOnOff> from_json(const nlohmann::json& value) {
    const std::map< std::string, OnOff::OnOffStartUpOnOff> 
        table = {
            { "Off" , OnOff::OnOffStartUpOnOff::kOff },
            { "On" , OnOff::OnOffStartUpOnOff::kOn },
            { "TogglePreviousOnOff" , OnOff::OnOffStartUpOnOff::kTogglePreviousOnOff },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<LevelControl::LevelControlFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<LevelControl::MoveMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, LevelControl::MoveMode> 
        table = {
            { "Up" , LevelControl::MoveMode::kUp },
            { "Down" , LevelControl::MoveMode::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<LevelControl::StepMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, LevelControl::StepMode> 
        table = {
            { "Up" , LevelControl::StepMode::kUp },
            { "Down" , LevelControl::StepMode::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Descriptor::Structs::DeviceTypeStruct::Type& value) {
//    return "no struct support";
//}
//
//



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Binding::Structs::TargetStruct::Type& value) {
//    return "no struct support";
//}
//
//



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const AccessControl::Structs::Target::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const AccessControl::Structs::AccessControlEntry::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const AccessControl::Structs::ExtensionEntry::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<AccessControl::AuthMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, AccessControl::AuthMode> 
        table = {
            { "Pase" , AccessControl::AuthMode::kPase },
            { "Case" , AccessControl::AuthMode::kCase },
            { "Group" , AccessControl::AuthMode::kGroup },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<AccessControl::ChangeTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, AccessControl::ChangeTypeEnum> 
        table = {
            { "Changed" , AccessControl::ChangeTypeEnum::kChanged },
            { "Added" , AccessControl::ChangeTypeEnum::kAdded },
            { "Removed" , AccessControl::ChangeTypeEnum::kRemoved },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<AccessControl::Privilege> from_json(const nlohmann::json& value) {
    const std::map< std::string, AccessControl::Privilege> 
        table = {
            { "View" , AccessControl::Privilege::kView },
            { "ProxyView" , AccessControl::Privilege::kProxyView },
            { "Operate" , AccessControl::Privilege::kOperate },
            { "Manage" , AccessControl::Privilege::kManage },
            { "Administer" , AccessControl::Privilege::kAdminister },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<Actions::CommandBits, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Actions::Structs::ActionStruct::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const Actions::Structs::EndpointListStruct::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<Actions::ActionErrorEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, Actions::ActionErrorEnum> 
        table = {
            { "Unknown" , Actions::ActionErrorEnum::kUnknown },
            { "Interrupted" , Actions::ActionErrorEnum::kInterrupted },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Actions::ActionStateEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, Actions::ActionStateEnum> 
        table = {
            { "Inactive" , Actions::ActionStateEnum::kInactive },
            { "Active" , Actions::ActionStateEnum::kActive },
            { "Paused" , Actions::ActionStateEnum::kPaused },
            { "Disabled" , Actions::ActionStateEnum::kDisabled },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Actions::ActionTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, Actions::ActionTypeEnum> 
        table = {
            { "Other" , Actions::ActionTypeEnum::kOther },
            { "Scene" , Actions::ActionTypeEnum::kScene },
            { "Sequence" , Actions::ActionTypeEnum::kSequence },
            { "Automation" , Actions::ActionTypeEnum::kAutomation },
            { "Exception" , Actions::ActionTypeEnum::kException },
            { "Notification" , Actions::ActionTypeEnum::kNotification },
            { "Alarm" , Actions::ActionTypeEnum::kAlarm },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Actions::EndpointListTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, Actions::EndpointListTypeEnum> 
        table = {
            { "Other" , Actions::EndpointListTypeEnum::kOther },
            { "Room" , Actions::EndpointListTypeEnum::kRoom },
            { "Zone" , Actions::EndpointListTypeEnum::kZone },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Basic::Structs::CapabilityMinimaStruct::Type& value) {
//    return "no struct support";
//}
//
//



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<OtaSoftwareUpdateProvider::OTAApplyUpdateAction> from_json(const nlohmann::json& value) {
    const std::map< std::string, OtaSoftwareUpdateProvider::OTAApplyUpdateAction> 
        table = {
            { "Proceed" , OtaSoftwareUpdateProvider::OTAApplyUpdateAction::kProceed },
            { "AwaitNextAction" , OtaSoftwareUpdateProvider::OTAApplyUpdateAction::kAwaitNextAction },
            { "Discontinue" , OtaSoftwareUpdateProvider::OTAApplyUpdateAction::kDiscontinue },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OtaSoftwareUpdateProvider::OTADownloadProtocol> from_json(const nlohmann::json& value) {
    const std::map< std::string, OtaSoftwareUpdateProvider::OTADownloadProtocol> 
        table = {
            { "BDXSynchronous" , OtaSoftwareUpdateProvider::OTADownloadProtocol::kBDXSynchronous },
            { "BDXAsynchronous" , OtaSoftwareUpdateProvider::OTADownloadProtocol::kBDXAsynchronous },
            { "Https" , OtaSoftwareUpdateProvider::OTADownloadProtocol::kHttps },
            { "VendorSpecific" , OtaSoftwareUpdateProvider::OTADownloadProtocol::kVendorSpecific },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OtaSoftwareUpdateProvider::OTAQueryStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, OtaSoftwareUpdateProvider::OTAQueryStatus> 
        table = {
            { "UpdateAvailable" , OtaSoftwareUpdateProvider::OTAQueryStatus::kUpdateAvailable },
            { "Busy" , OtaSoftwareUpdateProvider::OTAQueryStatus::kBusy },
            { "NotAvailable" , OtaSoftwareUpdateProvider::OTAQueryStatus::kNotAvailable },
            { "DownloadProtocolNotSupported" , OtaSoftwareUpdateProvider::OTAQueryStatus::kDownloadProtocolNotSupported },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const OtaSoftwareUpdateRequestor::Structs::ProviderLocation::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<OtaSoftwareUpdateRequestor::OTAAnnouncementReason> from_json(const nlohmann::json& value) {
    const std::map< std::string, OtaSoftwareUpdateRequestor::OTAAnnouncementReason> 
        table = {
            { "SimpleAnnouncement" , OtaSoftwareUpdateRequestor::OTAAnnouncementReason::kSimpleAnnouncement },
            { "UpdateAvailable" , OtaSoftwareUpdateRequestor::OTAAnnouncementReason::kUpdateAvailable },
            { "UrgentUpdateAvailable" , OtaSoftwareUpdateRequestor::OTAAnnouncementReason::kUrgentUpdateAvailable },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OtaSoftwareUpdateRequestor::OTAChangeReasonEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, OtaSoftwareUpdateRequestor::OTAChangeReasonEnum> 
        table = {
            { "Unknown" , OtaSoftwareUpdateRequestor::OTAChangeReasonEnum::kUnknown },
            { "Success" , OtaSoftwareUpdateRequestor::OTAChangeReasonEnum::kSuccess },
            { "Failure" , OtaSoftwareUpdateRequestor::OTAChangeReasonEnum::kFailure },
            { "TimeOut" , OtaSoftwareUpdateRequestor::OTAChangeReasonEnum::kTimeOut },
            { "DelayByProvider" , OtaSoftwareUpdateRequestor::OTAChangeReasonEnum::kDelayByProvider },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<OtaSoftwareUpdateRequestor::OTAUpdateStateEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, OtaSoftwareUpdateRequestor::OTAUpdateStateEnum> 
        table = {
            { "Unknown" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kUnknown },
            { "Idle" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kIdle },
            { "Querying" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kQuerying },
            { "DelayedOnQuery" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kDelayedOnQuery },
            { "Downloading" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kDownloading },
            { "Applying" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kApplying },
            { "DelayedOnApply" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kDelayedOnApply },
            { "RollingBack" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kRollingBack },
            { "DelayedOnUserConsent" , OtaSoftwareUpdateRequestor::OTAUpdateStateEnum::kDelayedOnUserConsent },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<TimeFormatLocalization::CalendarType> from_json(const nlohmann::json& value) {
    const std::map< std::string, TimeFormatLocalization::CalendarType> 
        table = {
            { "Buddhist" , TimeFormatLocalization::CalendarType::kBuddhist },
            { "Chinese" , TimeFormatLocalization::CalendarType::kChinese },
            { "Coptic" , TimeFormatLocalization::CalendarType::kCoptic },
            { "Ethiopian" , TimeFormatLocalization::CalendarType::kEthiopian },
            { "Gregorian" , TimeFormatLocalization::CalendarType::kGregorian },
            { "Hebrew" , TimeFormatLocalization::CalendarType::kHebrew },
            { "Indian" , TimeFormatLocalization::CalendarType::kIndian },
            { "Islamic" , TimeFormatLocalization::CalendarType::kIslamic },
            { "Japanese" , TimeFormatLocalization::CalendarType::kJapanese },
            { "Korean" , TimeFormatLocalization::CalendarType::kKorean },
            { "Persian" , TimeFormatLocalization::CalendarType::kPersian },
            { "Taiwanese" , TimeFormatLocalization::CalendarType::kTaiwanese },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<TimeFormatLocalization::HourFormat> from_json(const nlohmann::json& value) {
    const std::map< std::string, TimeFormatLocalization::HourFormat> 
        table = {
            { "12hr" , TimeFormatLocalization::HourFormat::k12hr },
            { "24hr" , TimeFormatLocalization::HourFormat::k24hr },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<UnitLocalization::UnitLocalizationFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<UnitLocalization::TempUnit> from_json(const nlohmann::json& value) {
    const std::map< std::string, UnitLocalization::TempUnit> 
        table = {
            { "Fahrenheit" , UnitLocalization::TempUnit::kFahrenheit },
            { "Celsius" , UnitLocalization::TempUnit::kCelsius },
            { "Kelvin" , UnitLocalization::TempUnit::kKelvin },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<PowerSource::PowerSourceFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const PowerSource::Structs::BatChargeFaultChangeType::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const PowerSource::Structs::BatFaultChangeType::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const PowerSource::Structs::WiredFaultChangeType::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<PowerSource::BatChargeFault> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::BatChargeFault> 
        table = {
            { "Unspecfied" , PowerSource::BatChargeFault::kUnspecfied },
            { "AmbientTooHot" , PowerSource::BatChargeFault::kAmbientTooHot },
            { "AmbientTooCold" , PowerSource::BatChargeFault::kAmbientTooCold },
            { "BatteryTooHot" , PowerSource::BatChargeFault::kBatteryTooHot },
            { "BatteryTooCold" , PowerSource::BatChargeFault::kBatteryTooCold },
            { "BatteryAbsent" , PowerSource::BatChargeFault::kBatteryAbsent },
            { "BatteryOverVoltage" , PowerSource::BatChargeFault::kBatteryOverVoltage },
            { "BatteryUnderVoltage" , PowerSource::BatChargeFault::kBatteryUnderVoltage },
            { "ChargerOverVoltage" , PowerSource::BatChargeFault::kChargerOverVoltage },
            { "ChargerUnderVoltage" , PowerSource::BatChargeFault::kChargerUnderVoltage },
            { "SafetyTimeout" , PowerSource::BatChargeFault::kSafetyTimeout },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::BatChargeLevel> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::BatChargeLevel> 
        table = {
            { "Ok" , PowerSource::BatChargeLevel::kOk },
            { "Warning" , PowerSource::BatChargeLevel::kWarning },
            { "Critical" , PowerSource::BatChargeLevel::kCritical },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::BatChargeState> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::BatChargeState> 
        table = {
            { "Unknown" , PowerSource::BatChargeState::kUnknown },
            { "IsCharging" , PowerSource::BatChargeState::kIsCharging },
            { "IsAtFullCharge" , PowerSource::BatChargeState::kIsAtFullCharge },
            { "IsNotCharging" , PowerSource::BatChargeState::kIsNotCharging },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::BatFault> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::BatFault> 
        table = {
            { "Unspecfied" , PowerSource::BatFault::kUnspecfied },
            { "OverTemp" , PowerSource::BatFault::kOverTemp },
            { "UnderTemp" , PowerSource::BatFault::kUnderTemp },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::BatReplaceability> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::BatReplaceability> 
        table = {
            { "Unspecified" , PowerSource::BatReplaceability::kUnspecified },
            { "NotReplaceable" , PowerSource::BatReplaceability::kNotReplaceable },
            { "UserReplaceable" , PowerSource::BatReplaceability::kUserReplaceable },
            { "FactoryReplaceable" , PowerSource::BatReplaceability::kFactoryReplaceable },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::PowerSourceStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::PowerSourceStatus> 
        table = {
            { "Unspecfied" , PowerSource::PowerSourceStatus::kUnspecfied },
            { "Active" , PowerSource::PowerSourceStatus::kActive },
            { "Standby" , PowerSource::PowerSourceStatus::kStandby },
            { "Unavailable" , PowerSource::PowerSourceStatus::kUnavailable },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::WiredCurrentType> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::WiredCurrentType> 
        table = {
            { "Ac" , PowerSource::WiredCurrentType::kAc },
            { "Dc" , PowerSource::WiredCurrentType::kDc },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PowerSource::WiredFault> from_json(const nlohmann::json& value) {
    const std::map< std::string, PowerSource::WiredFault> 
        table = {
            { "Unspecfied" , PowerSource::WiredFault::kUnspecfied },
            { "OverVoltage" , PowerSource::WiredFault::kOverVoltage },
            { "UnderVoltage" , PowerSource::WiredFault::kUnderVoltage },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const GeneralCommissioning::Structs::BasicCommissioningInfo::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<GeneralCommissioning::CommissioningError> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralCommissioning::CommissioningError> 
        table = {
            { "Ok" , GeneralCommissioning::CommissioningError::kOk },
            { "ValueOutsideRange" , GeneralCommissioning::CommissioningError::kValueOutsideRange },
            { "InvalidAuthentication" , GeneralCommissioning::CommissioningError::kInvalidAuthentication },
            { "NoFailSafe" , GeneralCommissioning::CommissioningError::kNoFailSafe },
            { "BusyWithOtherAdmin" , GeneralCommissioning::CommissioningError::kBusyWithOtherAdmin },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<GeneralCommissioning::RegulatoryLocationType> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralCommissioning::RegulatoryLocationType> 
        table = {
            { "Indoor" , GeneralCommissioning::RegulatoryLocationType::kIndoor },
            { "Outdoor" , GeneralCommissioning::RegulatoryLocationType::kOutdoor },
            { "IndoorOutdoor" , GeneralCommissioning::RegulatoryLocationType::kIndoorOutdoor },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<NetworkCommissioning::NetworkCommissioningFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<NetworkCommissioning::WiFiSecurity, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const NetworkCommissioning::Structs::NetworkInfo::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const NetworkCommissioning::Structs::ThreadInterfaceScanResult::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const NetworkCommissioning::Structs::WiFiInterfaceScanResult::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<NetworkCommissioning::NetworkCommissioningStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, NetworkCommissioning::NetworkCommissioningStatus> 
        table = {
            { "Success" , NetworkCommissioning::NetworkCommissioningStatus::kSuccess },
            { "OutOfRange" , NetworkCommissioning::NetworkCommissioningStatus::kOutOfRange },
            { "BoundsExceeded" , NetworkCommissioning::NetworkCommissioningStatus::kBoundsExceeded },
            { "NetworkIDNotFound" , NetworkCommissioning::NetworkCommissioningStatus::kNetworkIDNotFound },
            { "DuplicateNetworkID" , NetworkCommissioning::NetworkCommissioningStatus::kDuplicateNetworkID },
            { "NetworkNotFound" , NetworkCommissioning::NetworkCommissioningStatus::kNetworkNotFound },
            { "RegulatoryError" , NetworkCommissioning::NetworkCommissioningStatus::kRegulatoryError },
            { "AuthFailure" , NetworkCommissioning::NetworkCommissioningStatus::kAuthFailure },
            { "UnsupportedSecurity" , NetworkCommissioning::NetworkCommissioningStatus::kUnsupportedSecurity },
            { "OtherConnectionFailure" , NetworkCommissioning::NetworkCommissioningStatus::kOtherConnectionFailure },
            { "IPV6Failed" , NetworkCommissioning::NetworkCommissioningStatus::kIPV6Failed },
            { "IPBindFailed" , NetworkCommissioning::NetworkCommissioningStatus::kIPBindFailed },
            { "UnknownError" , NetworkCommissioning::NetworkCommissioningStatus::kUnknownError },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<NetworkCommissioning::WiFiBand> from_json(const nlohmann::json& value) {
    const std::map< std::string, NetworkCommissioning::WiFiBand> 
        table = {
            { "2g4" , NetworkCommissioning::WiFiBand::k2g4 },
            { "3g65" , NetworkCommissioning::WiFiBand::k3g65 },
            { "5g" , NetworkCommissioning::WiFiBand::k5g },
            { "6g" , NetworkCommissioning::WiFiBand::k6g },
            { "60g" , NetworkCommissioning::WiFiBand::k60g },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<DiagnosticLogs::LogsIntent> from_json(const nlohmann::json& value) {
    const std::map< std::string, DiagnosticLogs::LogsIntent> 
        table = {
            { "EndUserSupport" , DiagnosticLogs::LogsIntent::kEndUserSupport },
            { "NetworkDiag" , DiagnosticLogs::LogsIntent::kNetworkDiag },
            { "CrashLogs" , DiagnosticLogs::LogsIntent::kCrashLogs },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DiagnosticLogs::LogsStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, DiagnosticLogs::LogsStatus> 
        table = {
            { "Success" , DiagnosticLogs::LogsStatus::kSuccess },
            { "Exhausted" , DiagnosticLogs::LogsStatus::kExhausted },
            { "NoLogs" , DiagnosticLogs::LogsStatus::kNoLogs },
            { "Busy" , DiagnosticLogs::LogsStatus::kBusy },
            { "Denied" , DiagnosticLogs::LogsStatus::kDenied },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DiagnosticLogs::LogsTransferProtocol> from_json(const nlohmann::json& value) {
    const std::map< std::string, DiagnosticLogs::LogsTransferProtocol> 
        table = {
            { "ResponsePayload" , DiagnosticLogs::LogsTransferProtocol::kResponsePayload },
            { "Bdx" , DiagnosticLogs::LogsTransferProtocol::kBdx },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const GeneralDiagnostics::Structs::NetworkInterfaceType::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<GeneralDiagnostics::BootReasonType> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralDiagnostics::BootReasonType> 
        table = {
            { "Unspecified" , GeneralDiagnostics::BootReasonType::kUnspecified },
            { "PowerOnReboot" , GeneralDiagnostics::BootReasonType::kPowerOnReboot },
            { "BrownOutReset" , GeneralDiagnostics::BootReasonType::kBrownOutReset },
            { "SoftwareWatchdogReset" , GeneralDiagnostics::BootReasonType::kSoftwareWatchdogReset },
            { "HardwareWatchdogReset" , GeneralDiagnostics::BootReasonType::kHardwareWatchdogReset },
            { "SoftwareUpdateCompleted" , GeneralDiagnostics::BootReasonType::kSoftwareUpdateCompleted },
            { "SoftwareReset" , GeneralDiagnostics::BootReasonType::kSoftwareReset },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<GeneralDiagnostics::HardwareFaultType> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralDiagnostics::HardwareFaultType> 
        table = {
            { "Unspecified" , GeneralDiagnostics::HardwareFaultType::kUnspecified },
            { "Radio" , GeneralDiagnostics::HardwareFaultType::kRadio },
            { "Sensor" , GeneralDiagnostics::HardwareFaultType::kSensor },
            { "ResettableOverTemp" , GeneralDiagnostics::HardwareFaultType::kResettableOverTemp },
            { "NonResettableOverTemp" , GeneralDiagnostics::HardwareFaultType::kNonResettableOverTemp },
            { "PowerSource" , GeneralDiagnostics::HardwareFaultType::kPowerSource },
            { "VisualDisplayFault" , GeneralDiagnostics::HardwareFaultType::kVisualDisplayFault },
            { "AudioOutputFault" , GeneralDiagnostics::HardwareFaultType::kAudioOutputFault },
            { "UserInterfaceFault" , GeneralDiagnostics::HardwareFaultType::kUserInterfaceFault },
            { "NonVolatileMemoryError" , GeneralDiagnostics::HardwareFaultType::kNonVolatileMemoryError },
            { "TamperDetected" , GeneralDiagnostics::HardwareFaultType::kTamperDetected },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<GeneralDiagnostics::InterfaceType> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralDiagnostics::InterfaceType> 
        table = {
            { "Unspecified" , GeneralDiagnostics::InterfaceType::kUnspecified },
            { "WiFi" , GeneralDiagnostics::InterfaceType::kWiFi },
            { "Ethernet" , GeneralDiagnostics::InterfaceType::kEthernet },
            { "Cellular" , GeneralDiagnostics::InterfaceType::kCellular },
            { "Thread" , GeneralDiagnostics::InterfaceType::kThread },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<GeneralDiagnostics::NetworkFaultType> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralDiagnostics::NetworkFaultType> 
        table = {
            { "Unspecified" , GeneralDiagnostics::NetworkFaultType::kUnspecified },
            { "HardwareFailure" , GeneralDiagnostics::NetworkFaultType::kHardwareFailure },
            { "NetworkJammed" , GeneralDiagnostics::NetworkFaultType::kNetworkJammed },
            { "ConnectionFailed" , GeneralDiagnostics::NetworkFaultType::kConnectionFailed },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<GeneralDiagnostics::RadioFaultType> from_json(const nlohmann::json& value) {
    const std::map< std::string, GeneralDiagnostics::RadioFaultType> 
        table = {
            { "Unspecified" , GeneralDiagnostics::RadioFaultType::kUnspecified },
            { "WiFiFault" , GeneralDiagnostics::RadioFaultType::kWiFiFault },
            { "CellularFault" , GeneralDiagnostics::RadioFaultType::kCellularFault },
            { "ThreadFault" , GeneralDiagnostics::RadioFaultType::kThreadFault },
            { "NFCFault" , GeneralDiagnostics::RadioFaultType::kNFCFault },
            { "BLEFault" , GeneralDiagnostics::RadioFaultType::kBLEFault },
            { "EthernetFault" , GeneralDiagnostics::RadioFaultType::kEthernetFault },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<SoftwareDiagnostics::SoftwareDiagnosticsFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const SoftwareDiagnostics::Structs::ThreadMetrics::Type& value) {
//    return "no struct support";
//}
//
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<ThreadNetworkDiagnostics::ThreadNetworkDiagnosticsFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const ThreadNetworkDiagnostics::Structs::NeighborTable::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ThreadNetworkDiagnostics::Structs::OperationalDatasetComponents::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ThreadNetworkDiagnostics::Structs::RouteTable::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ThreadNetworkDiagnostics::Structs::SecurityPolicy::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<ThreadNetworkDiagnostics::NetworkFault> from_json(const nlohmann::json& value) {
    const std::map< std::string, ThreadNetworkDiagnostics::NetworkFault> 
        table = {
            { "Unspecified" , ThreadNetworkDiagnostics::NetworkFault::kUnspecified },
            { "LinkDown" , ThreadNetworkDiagnostics::NetworkFault::kLinkDown },
            { "HardwareFailure" , ThreadNetworkDiagnostics::NetworkFault::kHardwareFailure },
            { "NetworkJammed" , ThreadNetworkDiagnostics::NetworkFault::kNetworkJammed },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ThreadNetworkDiagnostics::RoutingRole> from_json(const nlohmann::json& value) {
    const std::map< std::string, ThreadNetworkDiagnostics::RoutingRole> 
        table = {
            { "Unspecified" , ThreadNetworkDiagnostics::RoutingRole::kUnspecified },
            { "Unassigned" , ThreadNetworkDiagnostics::RoutingRole::kUnassigned },
            { "SleepyEndDevice" , ThreadNetworkDiagnostics::RoutingRole::kSleepyEndDevice },
            { "EndDevice" , ThreadNetworkDiagnostics::RoutingRole::kEndDevice },
            { "Reed" , ThreadNetworkDiagnostics::RoutingRole::kReed },
            { "Router" , ThreadNetworkDiagnostics::RoutingRole::kRouter },
            { "Leader" , ThreadNetworkDiagnostics::RoutingRole::kLeader },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ThreadNetworkDiagnostics::ThreadConnectionStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, ThreadNetworkDiagnostics::ThreadConnectionStatus> 
        table = {
            { "Connected" , ThreadNetworkDiagnostics::ThreadConnectionStatus::kConnected },
            { "NotConnected" , ThreadNetworkDiagnostics::ThreadConnectionStatus::kNotConnected },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<WiFiNetworkDiagnostics::AssociationFailureCause> from_json(const nlohmann::json& value) {
    const std::map< std::string, WiFiNetworkDiagnostics::AssociationFailureCause> 
        table = {
            { "Unknown" , WiFiNetworkDiagnostics::AssociationFailureCause::kUnknown },
            { "AssociationFailed" , WiFiNetworkDiagnostics::AssociationFailureCause::kAssociationFailed },
            { "AuthenticationFailed" , WiFiNetworkDiagnostics::AssociationFailureCause::kAuthenticationFailed },
            { "SsidNotFound" , WiFiNetworkDiagnostics::AssociationFailureCause::kSsidNotFound },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<WiFiNetworkDiagnostics::SecurityType> from_json(const nlohmann::json& value) {
    const std::map< std::string, WiFiNetworkDiagnostics::SecurityType> 
        table = {
            { "Unspecified" , WiFiNetworkDiagnostics::SecurityType::kUnspecified },
            { "None" , WiFiNetworkDiagnostics::SecurityType::kNone },
            { "Wep" , WiFiNetworkDiagnostics::SecurityType::kWep },
            { "Wpa" , WiFiNetworkDiagnostics::SecurityType::kWpa },
            { "Wpa2" , WiFiNetworkDiagnostics::SecurityType::kWpa2 },
            { "Wpa3" , WiFiNetworkDiagnostics::SecurityType::kWpa3 },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<WiFiNetworkDiagnostics::WiFiConnectionStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, WiFiNetworkDiagnostics::WiFiConnectionStatus> 
        table = {
            { "Connected" , WiFiNetworkDiagnostics::WiFiConnectionStatus::kConnected },
            { "NotConnected" , WiFiNetworkDiagnostics::WiFiConnectionStatus::kNotConnected },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<WiFiNetworkDiagnostics::WiFiVersionType> from_json(const nlohmann::json& value) {
    const std::map< std::string, WiFiNetworkDiagnostics::WiFiVersionType> 
        table = {
            { "80211a" , WiFiNetworkDiagnostics::WiFiVersionType::k80211a },
            { "80211b" , WiFiNetworkDiagnostics::WiFiVersionType::k80211b },
            { "80211g" , WiFiNetworkDiagnostics::WiFiVersionType::k80211g },
            { "80211n" , WiFiNetworkDiagnostics::WiFiVersionType::k80211n },
            { "80211ac" , WiFiNetworkDiagnostics::WiFiVersionType::k80211ac },
            { "80211ax" , WiFiNetworkDiagnostics::WiFiVersionType::k80211ax },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<EthernetNetworkDiagnostics::PHYRateType> from_json(const nlohmann::json& value) {
    const std::map< std::string, EthernetNetworkDiagnostics::PHYRateType> 
        table = {
            { "10m" , EthernetNetworkDiagnostics::PHYRateType::k10m },
            { "100m" , EthernetNetworkDiagnostics::PHYRateType::k100m },
            { "1000m" , EthernetNetworkDiagnostics::PHYRateType::k1000m },
            { "25g" , EthernetNetworkDiagnostics::PHYRateType::k25g },
            { "5g" , EthernetNetworkDiagnostics::PHYRateType::k5g },
            { "10g" , EthernetNetworkDiagnostics::PHYRateType::k10g },
            { "40g" , EthernetNetworkDiagnostics::PHYRateType::k40g },
            { "100g" , EthernetNetworkDiagnostics::PHYRateType::k100g },
            { "200g" , EthernetNetworkDiagnostics::PHYRateType::k200g },
            { "400g" , EthernetNetworkDiagnostics::PHYRateType::k400g },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const TimeSynchronization::Structs::DstOffsetType::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TimeSynchronization::Structs::TimeZoneType::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<TimeSynchronization::GranularityEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, TimeSynchronization::GranularityEnum> 
        table = {
            { "NoTimeGranularity" , TimeSynchronization::GranularityEnum::kNoTimeGranularity },
            { "MinutesGranularity" , TimeSynchronization::GranularityEnum::kMinutesGranularity },
            { "SecondsGranularity" , TimeSynchronization::GranularityEnum::kSecondsGranularity },
            { "MillisecondsGranularity" , TimeSynchronization::GranularityEnum::kMillisecondsGranularity },
            { "MicrosecondsGranularity" , TimeSynchronization::GranularityEnum::kMicrosecondsGranularity },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<TimeSynchronization::TimeSourceEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, TimeSynchronization::TimeSourceEnum> 
        table = {
            { "None" , TimeSynchronization::TimeSourceEnum::kNone },
            { "Unknown" , TimeSynchronization::TimeSourceEnum::kUnknown },
            { "Admin" , TimeSynchronization::TimeSourceEnum::kAdmin },
            { "NodeTimeCluster" , TimeSynchronization::TimeSourceEnum::kNodeTimeCluster },
            { "NonFabricSntp" , TimeSynchronization::TimeSourceEnum::kNonFabricSntp },
            { "NonFabricNtp" , TimeSynchronization::TimeSourceEnum::kNonFabricNtp },
            { "FabricSntp" , TimeSynchronization::TimeSourceEnum::kFabricSntp },
            { "FabricNtp" , TimeSynchronization::TimeSourceEnum::kFabricNtp },
            { "MixedNtp" , TimeSynchronization::TimeSourceEnum::kMixedNtp },
            { "NonFabricSntpNts" , TimeSynchronization::TimeSourceEnum::kNonFabricSntpNts },
            { "NonFabricNtpNts" , TimeSynchronization::TimeSourceEnum::kNonFabricNtpNts },
            { "FabricSntpNts" , TimeSynchronization::TimeSourceEnum::kFabricSntpNts },
            { "FabricNtpNts" , TimeSynchronization::TimeSourceEnum::kFabricNtpNts },
            { "MixedNtpNts" , TimeSynchronization::TimeSourceEnum::kMixedNtpNts },
            { "CloudSource" , TimeSynchronization::TimeSourceEnum::kCloudSource },
            { "Ptp" , TimeSynchronization::TimeSourceEnum::kPtp },
            { "Gnss" , TimeSynchronization::TimeSourceEnum::kGnss },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<Switch::SwitchFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<AdministratorCommissioning::CommissioningWindowStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, AdministratorCommissioning::CommissioningWindowStatus> 
        table = {
            { "WindowNotOpen" , AdministratorCommissioning::CommissioningWindowStatus::kWindowNotOpen },
            { "EnhancedWindowOpen" , AdministratorCommissioning::CommissioningWindowStatus::kEnhancedWindowOpen },
            { "BasicWindowOpen" , AdministratorCommissioning::CommissioningWindowStatus::kBasicWindowOpen },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<AdministratorCommissioning::StatusCode> from_json(const nlohmann::json& value) {
    const std::map< std::string, AdministratorCommissioning::StatusCode> 
        table = {
            { "Busy" , AdministratorCommissioning::StatusCode::kBusy },
            { "PAKEParameterError" , AdministratorCommissioning::StatusCode::kPAKEParameterError },
            { "WindowNotOpen" , AdministratorCommissioning::StatusCode::kWindowNotOpen },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const OperationalCredentials::Structs::FabricDescriptor::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const OperationalCredentials::Structs::NOCStruct::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<OperationalCredentials::OperationalCertStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, OperationalCredentials::OperationalCertStatus> 
        table = {
            { "Success" , OperationalCredentials::OperationalCertStatus::kSuccess },
            { "InvalidPublicKey" , OperationalCredentials::OperationalCertStatus::kInvalidPublicKey },
            { "InvalidNodeOpId" , OperationalCredentials::OperationalCertStatus::kInvalidNodeOpId },
            { "InvalidNOC" , OperationalCredentials::OperationalCertStatus::kInvalidNOC },
            { "MissingCsr" , OperationalCredentials::OperationalCertStatus::kMissingCsr },
            { "TableFull" , OperationalCredentials::OperationalCertStatus::kTableFull },
            { "InvalidAdminSubject" , OperationalCredentials::OperationalCertStatus::kInvalidAdminSubject },
            { "FabricConflict" , OperationalCredentials::OperationalCertStatus::kFabricConflict },
            { "LabelConflict" , OperationalCredentials::OperationalCertStatus::kLabelConflict },
            { "InvalidFabricIndex" , OperationalCredentials::OperationalCertStatus::kInvalidFabricIndex },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const GroupKeyManagement::Structs::GroupInfoMapStruct::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const GroupKeyManagement::Structs::GroupKeyMapStruct::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const GroupKeyManagement::Structs::GroupKeySetStruct::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<GroupKeyManagement::GroupKeySecurityPolicy> from_json(const nlohmann::json& value) {
    const std::map< std::string, GroupKeyManagement::GroupKeySecurityPolicy> 
        table = {
            { "TrustFirst" , GroupKeyManagement::GroupKeySecurityPolicy::kTrustFirst },
            { "CacheAndSync" , GroupKeyManagement::GroupKeySecurityPolicy::kCacheAndSync },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const FixedLabel::Structs::LabelStruct::Type& value) {
//    return "no struct support";
//}
//
//



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const UserLabel::Structs::LabelStruct::Type& value) {
//    return "no struct support";
//}
//
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<ModeSelect::ModeSelectFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const ModeSelect::Structs::SemanticTag::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ModeSelect::Structs::ModeOptionStruct::Type& value) {
//    return "no struct support";
//}
//
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlCredentialRuleMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlCredentialRulesSupport, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlDaysMaskMap, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlDefaultConfigurationRegister, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlKeypadOperationEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlKeypadProgrammingEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlLocalProgrammingFeatures, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlManualOperationEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlRFIDOperationEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlRFIDProgrammingEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlRemoteOperationEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlRemoteProgrammingEventMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DlSupportedOperatingModes, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DoorLockDayOfWeek, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<DoorLock::DoorLockFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const DoorLock::Structs::DlCredential::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<DoorLock::DlAlarmCode> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlAlarmCode> 
        table = {
            { "LockJammed" , DoorLock::DlAlarmCode::kLockJammed },
            { "LockFactoryReset" , DoorLock::DlAlarmCode::kLockFactoryReset },
            { "LockRadioPowerCycled" , DoorLock::DlAlarmCode::kLockRadioPowerCycled },
            { "WrongCodeEntryLimit" , DoorLock::DlAlarmCode::kWrongCodeEntryLimit },
            { "FrontEsceutcheonRemoved" , DoorLock::DlAlarmCode::kFrontEsceutcheonRemoved },
            { "DoorForcedOpen" , DoorLock::DlAlarmCode::kDoorForcedOpen },
            { "DoorAjar" , DoorLock::DlAlarmCode::kDoorAjar },
            { "ForcedUser" , DoorLock::DlAlarmCode::kForcedUser },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlCredentialRule> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlCredentialRule> 
        table = {
            { "Single" , DoorLock::DlCredentialRule::kSingle },
            { "Double" , DoorLock::DlCredentialRule::kDouble },
            { "Tri" , DoorLock::DlCredentialRule::kTri },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlCredentialType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlCredentialType> 
        table = {
            { "ProgrammingPIN" , DoorLock::DlCredentialType::kProgrammingPIN },
            { "Pin" , DoorLock::DlCredentialType::kPin },
            { "Rfid" , DoorLock::DlCredentialType::kRfid },
            { "Fingerprint" , DoorLock::DlCredentialType::kFingerprint },
            { "FingerVein" , DoorLock::DlCredentialType::kFingerVein },
            { "Face" , DoorLock::DlCredentialType::kFace },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlDataOperationType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlDataOperationType> 
        table = {
            { "Add" , DoorLock::DlDataOperationType::kAdd },
            { "Clear" , DoorLock::DlDataOperationType::kClear },
            { "Modify" , DoorLock::DlDataOperationType::kModify },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlDoorState> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlDoorState> 
        table = {
            { "DoorOpen" , DoorLock::DlDoorState::kDoorOpen },
            { "DoorClosed" , DoorLock::DlDoorState::kDoorClosed },
            { "DoorJammed" , DoorLock::DlDoorState::kDoorJammed },
            { "DoorForcedOpen" , DoorLock::DlDoorState::kDoorForcedOpen },
            { "DoorUnspecifiedError" , DoorLock::DlDoorState::kDoorUnspecifiedError },
            { "DoorAjar" , DoorLock::DlDoorState::kDoorAjar },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlLockDataType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlLockDataType> 
        table = {
            { "Unspecified" , DoorLock::DlLockDataType::kUnspecified },
            { "ProgrammingCode" , DoorLock::DlLockDataType::kProgrammingCode },
            { "UserIndex" , DoorLock::DlLockDataType::kUserIndex },
            { "WeekDaySchedule" , DoorLock::DlLockDataType::kWeekDaySchedule },
            { "YearDaySchedule" , DoorLock::DlLockDataType::kYearDaySchedule },
            { "HolidaySchedule" , DoorLock::DlLockDataType::kHolidaySchedule },
            { "Pin" , DoorLock::DlLockDataType::kPin },
            { "Rfid" , DoorLock::DlLockDataType::kRfid },
            { "Fingerprint" , DoorLock::DlLockDataType::kFingerprint },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlLockOperationType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlLockOperationType> 
        table = {
            { "Lock" , DoorLock::DlLockOperationType::kLock },
            { "Unlock" , DoorLock::DlLockOperationType::kUnlock },
            { "NonAccessUserEvent" , DoorLock::DlLockOperationType::kNonAccessUserEvent },
            { "ForcedUserEvent" , DoorLock::DlLockOperationType::kForcedUserEvent },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlLockState> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlLockState> 
        table = {
            { "NotFullyLocked" , DoorLock::DlLockState::kNotFullyLocked },
            { "Locked" , DoorLock::DlLockState::kLocked },
            { "Unlocked" , DoorLock::DlLockState::kUnlocked },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlLockType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlLockType> 
        table = {
            { "DeadBolt" , DoorLock::DlLockType::kDeadBolt },
            { "Magnetic" , DoorLock::DlLockType::kMagnetic },
            { "Other" , DoorLock::DlLockType::kOther },
            { "Mortise" , DoorLock::DlLockType::kMortise },
            { "Rim" , DoorLock::DlLockType::kRim },
            { "LatchBolt" , DoorLock::DlLockType::kLatchBolt },
            { "CylindricalLock" , DoorLock::DlLockType::kCylindricalLock },
            { "TubularLock" , DoorLock::DlLockType::kTubularLock },
            { "InterconnectedLock" , DoorLock::DlLockType::kInterconnectedLock },
            { "DeadLatch" , DoorLock::DlLockType::kDeadLatch },
            { "DoorFurniture" , DoorLock::DlLockType::kDoorFurniture },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlOperatingMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlOperatingMode> 
        table = {
            { "Normal" , DoorLock::DlOperatingMode::kNormal },
            { "Vacation" , DoorLock::DlOperatingMode::kVacation },
            { "Privacy" , DoorLock::DlOperatingMode::kPrivacy },
            { "NoRemoteLockUnlock" , DoorLock::DlOperatingMode::kNoRemoteLockUnlock },
            { "Passage" , DoorLock::DlOperatingMode::kPassage },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlOperationError> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlOperationError> 
        table = {
            { "Unspecified" , DoorLock::DlOperationError::kUnspecified },
            { "InvalidCredential" , DoorLock::DlOperationError::kInvalidCredential },
            { "DisabledUserDenied" , DoorLock::DlOperationError::kDisabledUserDenied },
            { "Restricted" , DoorLock::DlOperationError::kRestricted },
            { "InsufficientBattery" , DoorLock::DlOperationError::kInsufficientBattery },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlOperationSource> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlOperationSource> 
        table = {
            { "Unspecified" , DoorLock::DlOperationSource::kUnspecified },
            { "Manual" , DoorLock::DlOperationSource::kManual },
            { "ProprietaryRemote" , DoorLock::DlOperationSource::kProprietaryRemote },
            { "Keypad" , DoorLock::DlOperationSource::kKeypad },
            { "Auto" , DoorLock::DlOperationSource::kAuto },
            { "Button" , DoorLock::DlOperationSource::kButton },
            { "Schedule" , DoorLock::DlOperationSource::kSchedule },
            { "Remote" , DoorLock::DlOperationSource::kRemote },
            { "Rfid" , DoorLock::DlOperationSource::kRfid },
            { "Biometric" , DoorLock::DlOperationSource::kBiometric },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlStatus> 
        table = {
            { "Success" , DoorLock::DlStatus::kSuccess },
            { "Failure" , DoorLock::DlStatus::kFailure },
            { "Duplicate" , DoorLock::DlStatus::kDuplicate },
            { "Occupied" , DoorLock::DlStatus::kOccupied },
            { "InvalidField" , DoorLock::DlStatus::kInvalidField },
            { "ResourceExhausted" , DoorLock::DlStatus::kResourceExhausted },
            { "NotFound" , DoorLock::DlStatus::kNotFound },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlUserStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlUserStatus> 
        table = {
            { "Available" , DoorLock::DlUserStatus::kAvailable },
            { "OccupiedEnabled" , DoorLock::DlUserStatus::kOccupiedEnabled },
            { "OccupiedDisabled" , DoorLock::DlUserStatus::kOccupiedDisabled },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DlUserType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DlUserType> 
        table = {
            { "UnrestrictedUser" , DoorLock::DlUserType::kUnrestrictedUser },
            { "YearDayScheduleUser" , DoorLock::DlUserType::kYearDayScheduleUser },
            { "WeekDayScheduleUser" , DoorLock::DlUserType::kWeekDayScheduleUser },
            { "ProgrammingUser" , DoorLock::DlUserType::kProgrammingUser },
            { "NonAccessUser" , DoorLock::DlUserType::kNonAccessUser },
            { "ForcedUser" , DoorLock::DlUserType::kForcedUser },
            { "DisposableUser" , DoorLock::DlUserType::kDisposableUser },
            { "ExpiringUser" , DoorLock::DlUserType::kExpiringUser },
            { "ScheduleRestrictedUser" , DoorLock::DlUserType::kScheduleRestrictedUser },
            { "RemoteOnlyUser" , DoorLock::DlUserType::kRemoteOnlyUser },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DoorLockOperationEventCode> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DoorLockOperationEventCode> 
        table = {
            { "UnknownOrMfgSpecific" , DoorLock::DoorLockOperationEventCode::kUnknownOrMfgSpecific },
            { "Lock" , DoorLock::DoorLockOperationEventCode::kLock },
            { "Unlock" , DoorLock::DoorLockOperationEventCode::kUnlock },
            { "LockInvalidPinOrId" , DoorLock::DoorLockOperationEventCode::kLockInvalidPinOrId },
            { "LockInvalidSchedule" , DoorLock::DoorLockOperationEventCode::kLockInvalidSchedule },
            { "UnlockInvalidPinOrId" , DoorLock::DoorLockOperationEventCode::kUnlockInvalidPinOrId },
            { "UnlockInvalidSchedule" , DoorLock::DoorLockOperationEventCode::kUnlockInvalidSchedule },
            { "OneTouchLock" , DoorLock::DoorLockOperationEventCode::kOneTouchLock },
            { "KeyLock" , DoorLock::DoorLockOperationEventCode::kKeyLock },
            { "KeyUnlock" , DoorLock::DoorLockOperationEventCode::kKeyUnlock },
            { "AutoLock" , DoorLock::DoorLockOperationEventCode::kAutoLock },
            { "ScheduleLock" , DoorLock::DoorLockOperationEventCode::kScheduleLock },
            { "ScheduleUnlock" , DoorLock::DoorLockOperationEventCode::kScheduleUnlock },
            { "ManualLock" , DoorLock::DoorLockOperationEventCode::kManualLock },
            { "ManualUnlock" , DoorLock::DoorLockOperationEventCode::kManualUnlock },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DoorLockProgrammingEventCode> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DoorLockProgrammingEventCode> 
        table = {
            { "UnknownOrMfgSpecific" , DoorLock::DoorLockProgrammingEventCode::kUnknownOrMfgSpecific },
            { "MasterCodeChanged" , DoorLock::DoorLockProgrammingEventCode::kMasterCodeChanged },
            { "PinAdded" , DoorLock::DoorLockProgrammingEventCode::kPinAdded },
            { "PinDeleted" , DoorLock::DoorLockProgrammingEventCode::kPinDeleted },
            { "PinChanged" , DoorLock::DoorLockProgrammingEventCode::kPinChanged },
            { "IdAdded" , DoorLock::DoorLockProgrammingEventCode::kIdAdded },
            { "IdDeleted" , DoorLock::DoorLockProgrammingEventCode::kIdDeleted },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DoorLockSetPinOrIdStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DoorLockSetPinOrIdStatus> 
        table = {
            { "Success" , DoorLock::DoorLockSetPinOrIdStatus::kSuccess },
            { "GeneralFailure" , DoorLock::DoorLockSetPinOrIdStatus::kGeneralFailure },
            { "MemoryFull" , DoorLock::DoorLockSetPinOrIdStatus::kMemoryFull },
            { "DuplicateCodeError" , DoorLock::DoorLockSetPinOrIdStatus::kDuplicateCodeError },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DoorLockUserStatus> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DoorLockUserStatus> 
        table = {
            { "Available" , DoorLock::DoorLockUserStatus::kAvailable },
            { "OccupiedEnabled" , DoorLock::DoorLockUserStatus::kOccupiedEnabled },
            { "OccupiedDisabled" , DoorLock::DoorLockUserStatus::kOccupiedDisabled },
            { "NotSupported" , DoorLock::DoorLockUserStatus::kNotSupported },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<DoorLock::DoorLockUserType> from_json(const nlohmann::json& value) {
    const std::map< std::string, DoorLock::DoorLockUserType> 
        table = {
            { "Unrestricted" , DoorLock::DoorLockUserType::kUnrestricted },
            { "YearDayScheduleUser" , DoorLock::DoorLockUserType::kYearDayScheduleUser },
            { "WeekDayScheduleUser" , DoorLock::DoorLockUserType::kWeekDayScheduleUser },
            { "MasterUser" , DoorLock::DoorLockUserType::kMasterUser },
            { "NonAccessUser" , DoorLock::DoorLockUserType::kNonAccessUser },
            { "NotSupported" , DoorLock::DoorLockUserType::kNotSupported },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<WindowCovering::ConfigStatus, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<WindowCovering::Feature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<WindowCovering::Mode, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<WindowCovering::OperationalStatus, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<WindowCovering::SafetyStatus, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<WindowCovering::EndProductType> from_json(const nlohmann::json& value) {
    const std::map< std::string, WindowCovering::EndProductType> 
        table = {
            { "RollerShade" , WindowCovering::EndProductType::kRollerShade },
            { "RomanShade" , WindowCovering::EndProductType::kRomanShade },
            { "BalloonShade" , WindowCovering::EndProductType::kBalloonShade },
            { "WovenWood" , WindowCovering::EndProductType::kWovenWood },
            { "PleatedShade" , WindowCovering::EndProductType::kPleatedShade },
            { "CellularShade" , WindowCovering::EndProductType::kCellularShade },
            { "LayeredShade" , WindowCovering::EndProductType::kLayeredShade },
            { "LayeredShade2D" , WindowCovering::EndProductType::kLayeredShade2D },
            { "SheerShade" , WindowCovering::EndProductType::kSheerShade },
            { "TiltOnlyInteriorBlind" , WindowCovering::EndProductType::kTiltOnlyInteriorBlind },
            { "InteriorBlind" , WindowCovering::EndProductType::kInteriorBlind },
            { "VerticalBlindStripCurtain" , WindowCovering::EndProductType::kVerticalBlindStripCurtain },
            { "InteriorVenetianBlind" , WindowCovering::EndProductType::kInteriorVenetianBlind },
            { "ExteriorVenetianBlind" , WindowCovering::EndProductType::kExteriorVenetianBlind },
            { "LateralLeftCurtain" , WindowCovering::EndProductType::kLateralLeftCurtain },
            { "LateralRightCurtain" , WindowCovering::EndProductType::kLateralRightCurtain },
            { "CentralCurtain" , WindowCovering::EndProductType::kCentralCurtain },
            { "RollerShutter" , WindowCovering::EndProductType::kRollerShutter },
            { "ExteriorVerticalScreen" , WindowCovering::EndProductType::kExteriorVerticalScreen },
            { "AwningTerracePatio" , WindowCovering::EndProductType::kAwningTerracePatio },
            { "AwningVerticalScreen" , WindowCovering::EndProductType::kAwningVerticalScreen },
            { "TiltOnlyPergola" , WindowCovering::EndProductType::kTiltOnlyPergola },
            { "SwingingShutter" , WindowCovering::EndProductType::kSwingingShutter },
            { "SlidingShutter" , WindowCovering::EndProductType::kSlidingShutter },
            { "Unknown" , WindowCovering::EndProductType::kUnknown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<WindowCovering::Type> from_json(const nlohmann::json& value) {
    const std::map< std::string, WindowCovering::Type> 
        table = {
            { "RollerShade" , WindowCovering::Type::kRollerShade },
            { "RollerShade2Motor" , WindowCovering::Type::kRollerShade2Motor },
            { "RollerShadeExterior" , WindowCovering::Type::kRollerShadeExterior },
            { "RollerShadeExterior2Motor" , WindowCovering::Type::kRollerShadeExterior2Motor },
            { "Drapery" , WindowCovering::Type::kDrapery },
            { "Awning" , WindowCovering::Type::kAwning },
            { "Shutter" , WindowCovering::Type::kShutter },
            { "TiltBlindTiltOnly" , WindowCovering::Type::kTiltBlindTiltOnly },
            { "TiltBlindLiftAndTilt" , WindowCovering::Type::kTiltBlindLiftAndTilt },
            { "ProjectorScreen" , WindowCovering::Type::kProjectorScreen },
            { "Unknown" , WindowCovering::Type::kUnknown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<PumpConfigurationAndControl::PumpStatus, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<PumpConfigurationAndControl::PumpControlMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, PumpConfigurationAndControl::PumpControlMode> 
        table = {
            { "ConstantSpeed" , PumpConfigurationAndControl::PumpControlMode::kConstantSpeed },
            { "ConstantPressure" , PumpConfigurationAndControl::PumpControlMode::kConstantPressure },
            { "ProportionalPressure" , PumpConfigurationAndControl::PumpControlMode::kProportionalPressure },
            { "ConstantFlow" , PumpConfigurationAndControl::PumpControlMode::kConstantFlow },
            { "ConstantTemperature" , PumpConfigurationAndControl::PumpControlMode::kConstantTemperature },
            { "Automatic" , PumpConfigurationAndControl::PumpControlMode::kAutomatic },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<PumpConfigurationAndControl::PumpOperationMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, PumpConfigurationAndControl::PumpOperationMode> 
        table = {
            { "Normal" , PumpConfigurationAndControl::PumpOperationMode::kNormal },
            { "Minimum" , PumpConfigurationAndControl::PumpOperationMode::kMinimum },
            { "Maximum" , PumpConfigurationAndControl::PumpOperationMode::kMaximum },
            { "Local" , PumpConfigurationAndControl::PumpOperationMode::kLocal },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<Thermostat::DayOfWeek, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<Thermostat::ModeForSequence, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<Thermostat::ThermostatFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Thermostat::Structs::ThermostatScheduleTransition::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<Thermostat::SetpointAdjustMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, Thermostat::SetpointAdjustMode> 
        table = {
            { "HeatSetpoint" , Thermostat::SetpointAdjustMode::kHeatSetpoint },
            { "CoolSetpoint" , Thermostat::SetpointAdjustMode::kCoolSetpoint },
            { "HeatAndCoolSetpoints" , Thermostat::SetpointAdjustMode::kHeatAndCoolSetpoints },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Thermostat::ThermostatControlSequence> from_json(const nlohmann::json& value) {
    const std::map< std::string, Thermostat::ThermostatControlSequence> 
        table = {
            { "CoolingOnly" , Thermostat::ThermostatControlSequence::kCoolingOnly },
            { "CoolingWithReheat" , Thermostat::ThermostatControlSequence::kCoolingWithReheat },
            { "HeatingOnly" , Thermostat::ThermostatControlSequence::kHeatingOnly },
            { "HeatingWithReheat" , Thermostat::ThermostatControlSequence::kHeatingWithReheat },
            { "CoolingAndHeating" , Thermostat::ThermostatControlSequence::kCoolingAndHeating },
            { "CoolingAndHeatingWithReheat" , Thermostat::ThermostatControlSequence::kCoolingAndHeatingWithReheat },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Thermostat::ThermostatRunningMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, Thermostat::ThermostatRunningMode> 
        table = {
            { "Off" , Thermostat::ThermostatRunningMode::kOff },
            { "Cool" , Thermostat::ThermostatRunningMode::kCool },
            { "Heat" , Thermostat::ThermostatRunningMode::kHeat },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Thermostat::ThermostatSystemMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, Thermostat::ThermostatSystemMode> 
        table = {
            { "Off" , Thermostat::ThermostatSystemMode::kOff },
            { "Auto" , Thermostat::ThermostatSystemMode::kAuto },
            { "Cool" , Thermostat::ThermostatSystemMode::kCool },
            { "Heat" , Thermostat::ThermostatSystemMode::kHeat },
            { "EmergencyHeating" , Thermostat::ThermostatSystemMode::kEmergencyHeating },
            { "Precooling" , Thermostat::ThermostatSystemMode::kPrecooling },
            { "FanOnly" , Thermostat::ThermostatSystemMode::kFanOnly },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<FanControl::FanControlFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<FanControl::RockSupportMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<FanControl::WindSettingMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<FanControl::WindSupportMask, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<FanControl::FanModeSequenceType> from_json(const nlohmann::json& value) {
    const std::map< std::string, FanControl::FanModeSequenceType> 
        table = {
            { "OffLowMedHigh" , FanControl::FanModeSequenceType::kOffLowMedHigh },
            { "OffLowHigh" , FanControl::FanModeSequenceType::kOffLowHigh },
            { "OffLowMedHighAuto" , FanControl::FanModeSequenceType::kOffLowMedHighAuto },
            { "OffLowHighAuto" , FanControl::FanModeSequenceType::kOffLowHighAuto },
            { "OffOnAuto" , FanControl::FanModeSequenceType::kOffOnAuto },
            { "OffOn" , FanControl::FanModeSequenceType::kOffOn },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<FanControl::FanModeType> from_json(const nlohmann::json& value) {
    const std::map< std::string, FanControl::FanModeType> 
        table = {
            { "Off" , FanControl::FanModeType::kOff },
            { "Low" , FanControl::FanModeType::kLow },
            { "Medium" , FanControl::FanModeType::kMedium },
            { "High" , FanControl::FanModeType::kHigh },
            { "On" , FanControl::FanModeType::kOn },
            { "Auto" , FanControl::FanModeType::kAuto },
            { "Smart" , FanControl::FanModeType::kSmart },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<ColorControl::ColorCapabilities, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<ColorControl::ColorControlFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<ColorControl::ColorLoopUpdateFlags, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<ColorControl::ColorLoopAction> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::ColorLoopAction> 
        table = {
            { "Deactivate" , ColorControl::ColorLoopAction::kDeactivate },
            { "ActivateFromColorLoopStartEnhancedHue" , ColorControl::ColorLoopAction::kActivateFromColorLoopStartEnhancedHue },
            { "ActivateFromEnhancedCurrentHue" , ColorControl::ColorLoopAction::kActivateFromEnhancedCurrentHue },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::ColorLoopDirection> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::ColorLoopDirection> 
        table = {
            { "DecrementHue" , ColorControl::ColorLoopDirection::kDecrementHue },
            { "IncrementHue" , ColorControl::ColorLoopDirection::kIncrementHue },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::ColorMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::ColorMode> 
        table = {
            { "CurrentHueAndCurrentSaturation" , ColorControl::ColorMode::kCurrentHueAndCurrentSaturation },
            { "CurrentXAndCurrentY" , ColorControl::ColorMode::kCurrentXAndCurrentY },
            { "ColorTemperature" , ColorControl::ColorMode::kColorTemperature },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::HueDirection> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::HueDirection> 
        table = {
            { "ShortestDistance" , ColorControl::HueDirection::kShortestDistance },
            { "LongestDistance" , ColorControl::HueDirection::kLongestDistance },
            { "Up" , ColorControl::HueDirection::kUp },
            { "Down" , ColorControl::HueDirection::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::HueMoveMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::HueMoveMode> 
        table = {
            { "Stop" , ColorControl::HueMoveMode::kStop },
            { "Up" , ColorControl::HueMoveMode::kUp },
            { "Down" , ColorControl::HueMoveMode::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::HueStepMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::HueStepMode> 
        table = {
            { "Up" , ColorControl::HueStepMode::kUp },
            { "Down" , ColorControl::HueStepMode::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::SaturationMoveMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::SaturationMoveMode> 
        table = {
            { "Stop" , ColorControl::SaturationMoveMode::kStop },
            { "Up" , ColorControl::SaturationMoveMode::kUp },
            { "Down" , ColorControl::SaturationMoveMode::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ColorControl::SaturationStepMode> from_json(const nlohmann::json& value) {
    const std::map< std::string, ColorControl::SaturationStepMode> 
        table = {
            { "Up" , ColorControl::SaturationStepMode::kUp },
            { "Down" , ColorControl::SaturationStepMode::kDown },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<IlluminanceMeasurement::LightSensorType> from_json(const nlohmann::json& value) {
    const std::map< std::string, IlluminanceMeasurement::LightSensorType> 
        table = {
            { "Photodiode" , IlluminanceMeasurement::LightSensorType::kPhotodiode },
            { "Cmos" , IlluminanceMeasurement::LightSensorType::kCmos },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<PressureMeasurement::PressureFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<Channel::ChannelFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const Channel::Structs::ChannelInfo::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const Channel::Structs::LineupInfo::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<Channel::ChannelStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, Channel::ChannelStatusEnum> 
        table = {
            { "Success" , Channel::ChannelStatusEnum::kSuccess },
            { "MultipleMatches" , Channel::ChannelStatusEnum::kMultipleMatches },
            { "NoMatches" , Channel::ChannelStatusEnum::kNoMatches },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<Channel::LineupInfoTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, Channel::LineupInfoTypeEnum> 
        table = {
            { "Mso" , Channel::LineupInfoTypeEnum::kMso },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const TargetNavigator::Structs::TargetInfo::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<TargetNavigator::TargetNavigatorStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, TargetNavigator::TargetNavigatorStatusEnum> 
        table = {
            { "Success" , TargetNavigator::TargetNavigatorStatusEnum::kSuccess },
            { "TargetNotFound" , TargetNavigator::TargetNavigatorStatusEnum::kTargetNotFound },
            { "NotAllowed" , TargetNavigator::TargetNavigatorStatusEnum::kNotAllowed },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<MediaPlayback::MediaPlaybackFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const MediaPlayback::Structs::PlaybackPosition::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<MediaPlayback::MediaPlaybackStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, MediaPlayback::MediaPlaybackStatusEnum> 
        table = {
            { "Success" , MediaPlayback::MediaPlaybackStatusEnum::kSuccess },
            { "InvalidStateForCommand" , MediaPlayback::MediaPlaybackStatusEnum::kInvalidStateForCommand },
            { "NotAllowed" , MediaPlayback::MediaPlaybackStatusEnum::kNotAllowed },
            { "NotActive" , MediaPlayback::MediaPlaybackStatusEnum::kNotActive },
            { "SpeedOutOfRange" , MediaPlayback::MediaPlaybackStatusEnum::kSpeedOutOfRange },
            { "SeekOutOfRange" , MediaPlayback::MediaPlaybackStatusEnum::kSeekOutOfRange },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<MediaPlayback::PlaybackStateEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, MediaPlayback::PlaybackStateEnum> 
        table = {
            { "Playing" , MediaPlayback::PlaybackStateEnum::kPlaying },
            { "Paused" , MediaPlayback::PlaybackStateEnum::kPaused },
            { "NotPlaying" , MediaPlayback::PlaybackStateEnum::kNotPlaying },
            { "Buffering" , MediaPlayback::PlaybackStateEnum::kBuffering },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<MediaInput::MediaInputFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const MediaInput::Structs::InputInfo::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<MediaInput::InputTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, MediaInput::InputTypeEnum> 
        table = {
            { "Internal" , MediaInput::InputTypeEnum::kInternal },
            { "Aux" , MediaInput::InputTypeEnum::kAux },
            { "Coax" , MediaInput::InputTypeEnum::kCoax },
            { "Composite" , MediaInput::InputTypeEnum::kComposite },
            { "Hdmi" , MediaInput::InputTypeEnum::kHdmi },
            { "Input" , MediaInput::InputTypeEnum::kInput },
            { "Line" , MediaInput::InputTypeEnum::kLine },
            { "Optical" , MediaInput::InputTypeEnum::kOptical },
            { "Video" , MediaInput::InputTypeEnum::kVideo },
            { "Scart" , MediaInput::InputTypeEnum::kScart },
            { "Usb" , MediaInput::InputTypeEnum::kUsb },
            { "Other" , MediaInput::InputTypeEnum::kOther },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<KeypadInput::KeypadInputFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//


template<> inline std::optional<KeypadInput::CecKeyCode> from_json(const nlohmann::json& value) {
    const std::map< std::string, KeypadInput::CecKeyCode> 
        table = {
            { "Select" , KeypadInput::CecKeyCode::kSelect },
            { "Up" , KeypadInput::CecKeyCode::kUp },
            { "Down" , KeypadInput::CecKeyCode::kDown },
            { "Left" , KeypadInput::CecKeyCode::kLeft },
            { "Right" , KeypadInput::CecKeyCode::kRight },
            { "RightUp" , KeypadInput::CecKeyCode::kRightUp },
            { "RightDown" , KeypadInput::CecKeyCode::kRightDown },
            { "LeftUp" , KeypadInput::CecKeyCode::kLeftUp },
            { "LeftDown" , KeypadInput::CecKeyCode::kLeftDown },
            { "RootMenu" , KeypadInput::CecKeyCode::kRootMenu },
            { "SetupMenu" , KeypadInput::CecKeyCode::kSetupMenu },
            { "ContentsMenu" , KeypadInput::CecKeyCode::kContentsMenu },
            { "FavoriteMenu" , KeypadInput::CecKeyCode::kFavoriteMenu },
            { "Exit" , KeypadInput::CecKeyCode::kExit },
            { "MediaTopMenu" , KeypadInput::CecKeyCode::kMediaTopMenu },
            { "MediaContextSensitiveMenu" , KeypadInput::CecKeyCode::kMediaContextSensitiveMenu },
            { "NumberEntryMode" , KeypadInput::CecKeyCode::kNumberEntryMode },
            { "Number11" , KeypadInput::CecKeyCode::kNumber11 },
            { "Number12" , KeypadInput::CecKeyCode::kNumber12 },
            { "Number0OrNumber10" , KeypadInput::CecKeyCode::kNumber0OrNumber10 },
            { "Numbers1" , KeypadInput::CecKeyCode::kNumbers1 },
            { "Numbers2" , KeypadInput::CecKeyCode::kNumbers2 },
            { "Numbers3" , KeypadInput::CecKeyCode::kNumbers3 },
            { "Numbers4" , KeypadInput::CecKeyCode::kNumbers4 },
            { "Numbers5" , KeypadInput::CecKeyCode::kNumbers5 },
            { "Numbers6" , KeypadInput::CecKeyCode::kNumbers6 },
            { "Numbers7" , KeypadInput::CecKeyCode::kNumbers7 },
            { "Numbers8" , KeypadInput::CecKeyCode::kNumbers8 },
            { "Numbers9" , KeypadInput::CecKeyCode::kNumbers9 },
            { "Dot" , KeypadInput::CecKeyCode::kDot },
            { "Enter" , KeypadInput::CecKeyCode::kEnter },
            { "Clear" , KeypadInput::CecKeyCode::kClear },
            { "NextFavorite" , KeypadInput::CecKeyCode::kNextFavorite },
            { "ChannelUp" , KeypadInput::CecKeyCode::kChannelUp },
            { "ChannelDown" , KeypadInput::CecKeyCode::kChannelDown },
            { "PreviousChannel" , KeypadInput::CecKeyCode::kPreviousChannel },
            { "SoundSelect" , KeypadInput::CecKeyCode::kSoundSelect },
            { "InputSelect" , KeypadInput::CecKeyCode::kInputSelect },
            { "DisplayInformation" , KeypadInput::CecKeyCode::kDisplayInformation },
            { "Help" , KeypadInput::CecKeyCode::kHelp },
            { "PageUp" , KeypadInput::CecKeyCode::kPageUp },
            { "PageDown" , KeypadInput::CecKeyCode::kPageDown },
            { "Power" , KeypadInput::CecKeyCode::kPower },
            { "VolumeUp" , KeypadInput::CecKeyCode::kVolumeUp },
            { "VolumeDown" , KeypadInput::CecKeyCode::kVolumeDown },
            { "Mute" , KeypadInput::CecKeyCode::kMute },
            { "Play" , KeypadInput::CecKeyCode::kPlay },
            { "Stop" , KeypadInput::CecKeyCode::kStop },
            { "Pause" , KeypadInput::CecKeyCode::kPause },
            { "Record" , KeypadInput::CecKeyCode::kRecord },
            { "Rewind" , KeypadInput::CecKeyCode::kRewind },
            { "FastForward" , KeypadInput::CecKeyCode::kFastForward },
            { "Eject" , KeypadInput::CecKeyCode::kEject },
            { "Forward" , KeypadInput::CecKeyCode::kForward },
            { "Backward" , KeypadInput::CecKeyCode::kBackward },
            { "StopRecord" , KeypadInput::CecKeyCode::kStopRecord },
            { "PauseRecord" , KeypadInput::CecKeyCode::kPauseRecord },
            { "Reserved" , KeypadInput::CecKeyCode::kReserved },
            { "Angle" , KeypadInput::CecKeyCode::kAngle },
            { "SubPicture" , KeypadInput::CecKeyCode::kSubPicture },
            { "VideoOnDemand" , KeypadInput::CecKeyCode::kVideoOnDemand },
            { "ElectronicProgramGuide" , KeypadInput::CecKeyCode::kElectronicProgramGuide },
            { "TimerProgramming" , KeypadInput::CecKeyCode::kTimerProgramming },
            { "InitialConfiguration" , KeypadInput::CecKeyCode::kInitialConfiguration },
            { "SelectBroadcastType" , KeypadInput::CecKeyCode::kSelectBroadcastType },
            { "SelectSoundPresentation" , KeypadInput::CecKeyCode::kSelectSoundPresentation },
            { "PlayFunction" , KeypadInput::CecKeyCode::kPlayFunction },
            { "PausePlayFunction" , KeypadInput::CecKeyCode::kPausePlayFunction },
            { "RecordFunction" , KeypadInput::CecKeyCode::kRecordFunction },
            { "PauseRecordFunction" , KeypadInput::CecKeyCode::kPauseRecordFunction },
            { "StopFunction" , KeypadInput::CecKeyCode::kStopFunction },
            { "MuteFunction" , KeypadInput::CecKeyCode::kMuteFunction },
            { "RestoreVolumeFunction" , KeypadInput::CecKeyCode::kRestoreVolumeFunction },
            { "TuneFunction" , KeypadInput::CecKeyCode::kTuneFunction },
            { "SelectMediaFunction" , KeypadInput::CecKeyCode::kSelectMediaFunction },
            { "SelectAvInputFunction" , KeypadInput::CecKeyCode::kSelectAvInputFunction },
            { "SelectAudioInputFunction" , KeypadInput::CecKeyCode::kSelectAudioInputFunction },
            { "PowerToggleFunction" , KeypadInput::CecKeyCode::kPowerToggleFunction },
            { "PowerOffFunction" , KeypadInput::CecKeyCode::kPowerOffFunction },
            { "PowerOnFunction" , KeypadInput::CecKeyCode::kPowerOnFunction },
            { "F1Blue" , KeypadInput::CecKeyCode::kF1Blue },
            { "F2Red" , KeypadInput::CecKeyCode::kF2Red },
            { "F3Green" , KeypadInput::CecKeyCode::kF3Green },
            { "F4Yellow" , KeypadInput::CecKeyCode::kF4Yellow },
            { "F5" , KeypadInput::CecKeyCode::kF5 },
            { "Data" , KeypadInput::CecKeyCode::kData },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<KeypadInput::KeypadInputStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, KeypadInput::KeypadInputStatusEnum> 
        table = {
            { "Success" , KeypadInput::KeypadInputStatusEnum::kSuccess },
            { "UnsupportedKey" , KeypadInput::KeypadInputStatusEnum::kUnsupportedKey },
            { "InvalidKeyInCurrentState" , KeypadInput::KeypadInputStatusEnum::kInvalidKeyInCurrentState },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<ContentLauncher::ContentLauncherFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<ContentLauncher::SupportedStreamingProtocol, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const ContentLauncher::Structs::Dimension::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ContentLauncher::Structs::AdditionalInfo::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ContentLauncher::Structs::Parameter::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ContentLauncher::Structs::ContentSearch::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ContentLauncher::Structs::StyleInformation::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ContentLauncher::Structs::BrandingInformation::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<ContentLauncher::ContentLaunchStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, ContentLauncher::ContentLaunchStatusEnum> 
        table = {
            { "Success" , ContentLauncher::ContentLaunchStatusEnum::kSuccess },
            { "UrlNotAvailable" , ContentLauncher::ContentLaunchStatusEnum::kUrlNotAvailable },
            { "AuthFailed" , ContentLauncher::ContentLaunchStatusEnum::kAuthFailed },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ContentLauncher::MetricTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, ContentLauncher::MetricTypeEnum> 
        table = {
            { "Pixels" , ContentLauncher::MetricTypeEnum::kPixels },
            { "Percentage" , ContentLauncher::MetricTypeEnum::kPercentage },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


template<> inline std::optional<ContentLauncher::ParameterEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, ContentLauncher::ParameterEnum> 
        table = {
            { "Actor" , ContentLauncher::ParameterEnum::kActor },
            { "Channel" , ContentLauncher::ParameterEnum::kChannel },
            { "Character" , ContentLauncher::ParameterEnum::kCharacter },
            { "Director" , ContentLauncher::ParameterEnum::kDirector },
            { "Event" , ContentLauncher::ParameterEnum::kEvent },
            { "Franchise" , ContentLauncher::ParameterEnum::kFranchise },
            { "Genre" , ContentLauncher::ParameterEnum::kGenre },
            { "League" , ContentLauncher::ParameterEnum::kLeague },
            { "Popularity" , ContentLauncher::ParameterEnum::kPopularity },
            { "Provider" , ContentLauncher::ParameterEnum::kProvider },
            { "Sport" , ContentLauncher::ParameterEnum::kSport },
            { "SportsTeam" , ContentLauncher::ParameterEnum::kSportsTeam },
            { "Type" , ContentLauncher::ParameterEnum::kType },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<AudioOutput::AudioOutputFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const AudioOutput::Structs::OutputInfo::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<AudioOutput::OutputTypeEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, AudioOutput::OutputTypeEnum> 
        table = {
            { "Hdmi" , AudioOutput::OutputTypeEnum::kHdmi },
            { "Bt" , AudioOutput::OutputTypeEnum::kBt },
            { "Optical" , AudioOutput::OutputTypeEnum::kOptical },
            { "Headphone" , AudioOutput::OutputTypeEnum::kHeadphone },
            { "Internal" , AudioOutput::OutputTypeEnum::kInternal },
            { "Other" , AudioOutput::OutputTypeEnum::kOther },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<ApplicationLauncher::ApplicationLauncherFeature, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const ApplicationLauncher::Structs::Application::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const ApplicationLauncher::Structs::ApplicationEP::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<ApplicationLauncher::ApplicationLauncherStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, ApplicationLauncher::ApplicationLauncherStatusEnum> 
        table = {
            { "Success" , ApplicationLauncher::ApplicationLauncherStatusEnum::kSuccess },
            { "AppNotAvailable" , ApplicationLauncher::ApplicationLauncherStatusEnum::kAppNotAvailable },
            { "SystemBusy" , ApplicationLauncher::ApplicationLauncherStatusEnum::kSystemBusy },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const ApplicationBasic::Structs::ApplicationBasicApplication::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<ApplicationBasic::ApplicationStatusEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, ApplicationBasic::ApplicationStatusEnum> 
        table = {
            { "Stopped" , ApplicationBasic::ApplicationStatusEnum::kStopped },
            { "ActiveVisibleFocus" , ApplicationBasic::ApplicationStatusEnum::kActiveVisibleFocus },
            { "ActiveHidden" , ApplicationBasic::ApplicationStatusEnum::kActiveHidden },
            { "ActiveVisibleNotFocus" , ApplicationBasic::ApplicationStatusEnum::kActiveVisibleNotFocus },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//



//
/***************************** Struct Convertes **************/
//



//
//template<> inline nlohmann::json to_json(const chip::BitFlags<TestCluster::Bitmap16MaskMap, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<TestCluster::Bitmap32MaskMap, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<TestCluster::Bitmap64MaskMap, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<TestCluster::Bitmap8MaskMap, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


//template<> inline nlohmann::json to_json(const chip::BitFlags<TestCluster::SimpleBitmap, uint8_t>& value) {
//    return "{\"no bitmap support\"}";
//}


/***************************** Struct Convertes **************/
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::SimpleStruct::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::TestFabricScoped::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::NullablesAndOptionalsStruct::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::NestedStruct::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::NestedStructList::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::DoubleNestedStructList::Type& value) {
//    return "no struct support";
//}
//
//
//template<> inline nlohmann::json to_json(const TestCluster::Structs::TestListStructOctet::Type& value) {
//    return "no struct support";
//}
//
//


template<> inline std::optional<TestCluster::SimpleEnum> from_json(const nlohmann::json& value) {
    const std::map< std::string, TestCluster::SimpleEnum> 
        table = {
            { "Unspecified" , TestCluster::SimpleEnum::kUnspecified },
            { "ValueA" , TestCluster::SimpleEnum::kValueA },
            { "ValueB" , TestCluster::SimpleEnum::kValueB },
            { "ValueC" , TestCluster::SimpleEnum::kValueC },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}



//
/***************************** Struct Convertes **************/
//


template<> inline std::optional<FaultInjection::FaultType> from_json(const nlohmann::json& value) {
    const std::map< std::string, FaultInjection::FaultType> 
        table = {
            { "Unspecified" , FaultInjection::FaultType::kUnspecified },
            { "SystemFault" , FaultInjection::FaultType::kSystemFault },
            { "InetFault" , FaultInjection::FaultType::kInetFault },
            { "ChipFault" , FaultInjection::FaultType::kChipFault },
            { "CertFault" , FaultInjection::FaultType::kCertFault },
        };

    auto i  = table.find( value );
    if( i != table.end() ) {
        return i->second;
    } else {
        return std::nullopt;
    }
}


