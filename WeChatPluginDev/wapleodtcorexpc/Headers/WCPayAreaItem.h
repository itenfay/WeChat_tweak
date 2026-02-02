//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSArray, NSString;
@protocol WCPayAreaItemDelegate;

@interface WCPayAreaItem
{
    MMUIViewController *m_currentViewController;
    NSString *m_country;
    NSString *m_province;
    NSString *m_city;
    _Bool _disableLocation;
    _Bool _chinaFirst;
    _Bool _openSearch;
    id <WCPayAreaItemDelegate> m_payAreaItemDelegate;
    NSArray *_bannedCountryCodes;
}

- (void).cxx_destruct;
@property(retain) NSArray *bannedCountryCodes; // @synthesize bannedCountryCodes=_bannedCountryCodes;
@property(nonatomic) _Bool openSearch; // @synthesize openSearch=_openSearch;
@property(nonatomic) _Bool chinaFirst; // @synthesize chinaFirst=_chinaFirst;
@property(nonatomic) _Bool disableLocation; // @synthesize disableLocation=_disableLocation;
@property(nonatomic) __weak id <WCPayAreaItemDelegate> m_payAreaItemDelegate; // @synthesize m_payAreaItemDelegate;
- (id)currentAccessibilityDesc;
- (void)picker:(id)arg1 didPick:(id)arg2;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)setCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)becomeFirstResponder;
- (_Bool)bannedCode:(id)arg1;
- (id)allCountrys;
- (id)getCity;
- (id)getProvince;
- (id)getCountry;
- (_Bool)isUSorCA;
- (void)setCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

