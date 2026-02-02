//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKCountryCallingCodeViewOnSelectCallback, NSString, UITextField, WCPayCountryCodeItem;

@interface KindaCountryCallingCodeView
{
    UITextField *m_textField;
    MMKCountryCallingCodeViewOnSelectCallback *m_callback;
    WCPayCountryCodeItem *_m_countryCodeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCountryCodeItem *m_countryCodeItem; // @synthesize m_countryCodeItem=_m_countryCodeItem;
- (id)getPlaceHolder;
- (void)setPlaceHolder:(id)arg1;
- (void)setHideCode:(_Bool)arg1;
- (_Bool)getHideCode;
- (void)setNationalityExcludeArray:(id)arg1;
- (void)setNationality:(id)arg1;
- (id)getNationality;
- (void)setOnSelectCallback:(id)arg1;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (id)getCountryCode;
- (void)setCountryCode:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

