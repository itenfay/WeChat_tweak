//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDynamicColor, MMKSwitchViewOnChangeSwitchCallback, NSString, UISwitch;
@protocol MMKImage;

@interface KindaSwitchView
{
    MMKSwitchViewOnChangeSwitchCallback *_m_changeSwitchCallback;
    UISwitch *_m_switch;
    MMDynamicColor *_m_onTintColor;
    MMDynamicColor *_m_tintColor;
    MMDynamicColor *_m_thumbTintColor;
    id <MMKImage> _m_onImage;
    id <MMKImage> _m_offImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMKImage> m_offImage; // @synthesize m_offImage=_m_offImage;
@property(retain, nonatomic) id <MMKImage> m_onImage; // @synthesize m_onImage=_m_onImage;
@property(retain, nonatomic) MMDynamicColor *m_thumbTintColor; // @synthesize m_thumbTintColor=_m_thumbTintColor;
@property(retain, nonatomic) MMDynamicColor *m_tintColor; // @synthesize m_tintColor=_m_tintColor;
@property(retain, nonatomic) MMDynamicColor *m_onTintColor; // @synthesize m_onTintColor=_m_onTintColor;
@property(retain, nonatomic) UISwitch *m_switch; // @synthesize m_switch=_m_switch;
@property(retain, nonatomic) MMKSwitchViewOnChangeSwitchCallback *m_changeSwitchCallback; // @synthesize m_changeSwitchCallback=_m_changeSwitchCallback;
- (void)changeSwitch;
- (void)setOnChangeSwitchCallback:(id)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)getOn;
- (void)setOn:(_Bool)arg1;
- (id)getOffImage;
- (void)setOffImage:(id)arg1;
- (id)getOnImage;
- (void)setOnImage:(id)arg1;
- (id)getThumbTintColor;
- (void)setThumbTintColor:(id)arg1;
- (id)getTintColor;
- (void)setTintColor:(id)arg1;
- (id)getOnTintColor;
- (void)setOnTintColor:(id)arg1;
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

