//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppBaseViewController
{
    _Bool _acceptSmallKeyboardHeightEvent;
    _Bool _keyboardShow;
    float _fontScale;
    float _lastBatteryLevel;
    float _lastVolume;
    long long _lastOrientation;
}

@property(nonatomic) float lastVolume; // @synthesize lastVolume=_lastVolume;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) float lastBatteryLevel; // @synthesize lastBatteryLevel=_lastBatteryLevel;
@property(nonatomic) float fontScale; // @synthesize fontScale=_fontScale;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(nonatomic) _Bool acceptSmallKeyboardHeightEvent; // @synthesize acceptSmallKeyboardHeightEvent=_acceptSmallKeyboardHeightEvent;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)parseGlobalPkg:(id)arg1;
- (void)onVolumeDidChangeAfterIOS15:(id)arg1;
- (void)onVolumeDidChangeBeforeIOS15:(id)arg1;
- (void)lowPowerModeDidChange:(id)arg1;
- (void)batteryLevelDidChange:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)SystemFontSizeChanged:(id)arg1;
- (void)boldTextStatusChanged:(id)arg1;
- (void)keyboardDidHideShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)preDealloc;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

