//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface PhoneNumberFormatLogic
{
    NSMutableDictionary *m_dicConfig;
}

- (void).cxx_destruct;
- (id)getPrivacyPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryIsoCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryInfo:(id)arg2;
- (id)formatedNumAfterTrimAutoFillNum:(id)arg1 fullNum:(id)arg2;
- (id)formatedNumForFullNum:(id)arg1 fullNum:(id)arg2;
- (id)autoFullLengthNum:(id)arg1 countryInfo:(id)arg2;
- (id)formatInfoForPhoneNum:(id)arg1 countryInfo:(id)arg2;
- (id)countrFormatConfigForCountryId:(id)arg1;
- (id)getPurePhoneNum:(id)arg1;
- (id)getMatch:(id)arg1 withRegex:(id)arg2;
- (_Bool)matchLeadingString:(id)arg1 withRegex:(id)arg2;
- (id)init;
- (void)loadConfig;

@end

