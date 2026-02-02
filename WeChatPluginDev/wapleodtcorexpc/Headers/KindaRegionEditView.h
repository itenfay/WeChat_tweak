//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKRegionEditViewOnRegionSelectedCallback, NSArray, NSString, UITextField;

@interface KindaRegionEditView
{
    UITextField *m_view;
    NSString *m_country;
    NSString *m_province;
    NSString *m_city;
    MMKRegionEditViewOnRegionSelectedCallback *m_callback;
    _Bool _m_showDomesticCity;
    _Bool _m_showSelectedLocation;
    _Bool _m_autoLocation;
    NSArray *_areaExcudeArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *areaExcudeArray; // @synthesize areaExcudeArray=_areaExcudeArray;
@property(nonatomic) _Bool m_autoLocation; // @synthesize m_autoLocation=_m_autoLocation;
@property(nonatomic) _Bool m_showSelectedLocation; // @synthesize m_showSelectedLocation=_m_showSelectedLocation;
@property(nonatomic) _Bool m_showDomesticCity; // @synthesize m_showDomesticCity=_m_showDomesticCity;
- (_Bool)getSupportDynamicSize;
- (void)setAreaExcludeArray:(id)arg1;
- (void)setOriginRegion:(id)arg1 province:(id)arg2 city:(id)arg3 areaStr:(id)arg4;
- (void)setOnRegionSelectedCallback:(id)arg1;
- (_Bool)isUSOrCA;
- (id)getCity;
- (id)getProvince;
- (id)getCountry;
- (void)picker:(id)arg1 didPick:(id)arg2;
- (_Bool)bannedCode:(id)arg1;
- (id)getAllCountries;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (_Bool)getAutoLocation;
- (void)setAutoLocation:(_Bool)arg1;
- (_Bool)getShowSelectedLocation;
- (void)setShowSelectedLocation:(_Bool)arg1;
- (_Bool)getShowDomesticCity;
- (void)setShowDomesticCity:(_Bool)arg1;
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

