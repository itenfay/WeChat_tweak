//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CountryCodeWrap, NSArray, NSString, UILabel;
@protocol WCPayCountryCodeItemDelegate;

@interface WCPayCountryCodeItem
{
    _Bool _hideCode;
    id <WCPayCountryCodeItemDelegate> _delegate;
    NSArray *_bannedCountryCodes;
    NSString *_noCountryCodeTip;
    UILabel *_countryLabel;
    CountryCodeWrap *_currentCountryCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CountryCodeWrap *currentCountryCode; // @synthesize currentCountryCode=_currentCountryCode;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) NSString *noCountryCodeTip; // @synthesize noCountryCodeTip=_noCountryCodeTip;
@property(retain, nonatomic) NSArray *bannedCountryCodes; // @synthesize bannedCountryCodes=_bannedCountryCodes;
@property(nonatomic) _Bool hideCode; // @synthesize hideCode=_hideCode;
@property(nonatomic) __weak id <WCPayCountryCodeItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentAccessibilityDesc;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)reloadCountryLabel;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3 getDefaultCode:(_Bool)arg4;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setISOCountryCode:(id)arg1;
- (void)setCountryCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

