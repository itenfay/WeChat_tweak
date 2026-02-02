//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UILabel;
@protocol WCPayAddressItemDelegate;

@interface WCPayAddressItem
{
    _Bool _disableLocation;
    _Bool _chinaFirst;
    _Bool _openSearch;
    NSMutableArray *_bannedCountryCodes;
    id <WCPayAddressItemDelegate> _addressDelegate;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_address;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *province; // @synthesize province=_province;
@property(retain) NSString *country; // @synthesize country=_country;
@property __weak id <WCPayAddressItemDelegate> addressDelegate; // @synthesize addressDelegate=_addressDelegate;
@property(retain) NSMutableArray *bannedCountryCodes; // @synthesize bannedCountryCodes=_bannedCountryCodes;
@property(nonatomic) _Bool openSearch; // @synthesize openSearch=_openSearch;
@property(nonatomic) _Bool chinaFirst; // @synthesize chinaFirst=_chinaFirst;
@property(nonatomic) _Bool disableLocation; // @synthesize disableLocation=_disableLocation;
- (id)currentAccessibilityDesc;
- (id)onWCPayAddressViewControllerBannedCountryCodes;
- (id)onWCPayAddressViewControllerPresetAddress;
- (id)onWCPayAddressViewControllerPresetCity;
- (id)onWCPayAddressViewControllerPresetProvince;
- (id)onWCPayAddressViewControllerPresetCountry;
- (_Bool)onWCPayAddressViewControllerOpenSearch;
- (_Bool)onWCPayAddressViewControllerChinaFirst;
- (_Bool)onWCPayAddressViewControllerDisableLocation;
- (void)onWCPayAddressViewControllerDoneWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 address:(id)arg4;
- (void)onWCPayAddressViewControllerBack;
- (void)becomeFirstResponder;
- (void)updateText;
- (void)setCountry:(id)arg1 province:(id)arg2 city:(id)arg3 address:(id)arg4;
- (id)getAdministrationAddress;
- (id)getAddress;
- (id)getCity;
- (id)getProvince;
- (id)getCountry;
- (_Bool)isUSorCA;
- (void)onTapLabel;
- (void)updateLabel;
- (double)maxContentWidth;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

