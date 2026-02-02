//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLocatingCoordinateLogic, NSMutableArray, NSString;

@interface MMIPlatformUtilImpl : NSObject
{
    NSMutableArray *_lanageCallbacks;
    MMLocatingCoordinateLogic *_logic;
}

+ (id)getRedDotTipsId:(id)arg1;
+ (id)getRedDotKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) NSMutableArray *lanageCallbacks; // @synthesize lanageCallbacks=_lanageCallbacks;
- (void)reportScreenshotKeyPage:(id)arg1 data:(id)arg2;
- (void)setPaySafeAccessibilityServiceListCache:(id)arg1 serviceListName:(id)arg2;
- (_Bool)isDarkModeOn;
- (int)getAccessibilityIsTouchExplorationEnabled;
- (id)getAccessibilityServiceList;
- (void)reportDidTakeScreenshot:(id)arg1;
- (_Bool)isFlutterOnTop;
- (float)getScreenDensity;
- (void)launchFlutter:(_Bool)arg1;
- (int)getLQTVersion;
- (_Bool)isLocationAuthorized;
- (void)getUserLocationImpl:(id)arg1;
- (_Bool)isForAndroidTest;
- (id)getCachedLocationInfo;
- (id)getAndroidRepairConfig:(id)arg1;
- (_Bool)isScreenCaptured;
- (_Bool)delSecurityStore:(id)arg1;
- (id)loadSecurityStore:(id)arg1;
- (_Bool)saveSecurityStore:(id)arg1 data:(id)arg2;
- (_Bool)supportSecurityStore;
- (id)resolveURLStringForGlobal:(id)arg1;
- (id)resolveLanguageStringForGlobal:(id)arg1;
- (void)setReportLocationState:(_Bool)arg1 cellInfoState:(_Bool)arg2;
- (_Bool)shouldReportLocation;
- (_Bool)shouldReportCellInfo;
- (_Bool)shouldReportWifiSsid;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
- (void)onLanguageChange;
- (_Bool)isCareModeOn;
- (float)getViewScale;
- (float)getScaleByFontLevel:(int)arg1;
- (int)getFontLevel;
- (float)dynamicSizeByFontLevel:(float)arg1 level:(int)arg2;
- (float)dynamicFontSize:(float)arg1;
- (float)dynamicSize:(float)arg1;
- (void)accessibilityAnnounce:(id)arg1 key:(id)arg2;
- (void)accessibilityFocus:(id)arg1;
- (float)getIphoneSafeAreaBottomHeight;
- (id)getMemoryKVString:(id)arg1;
- (void)setIdleTimerDisable:(_Bool)arg1;
- (void)makesureLonglink;
- (void)setScreenBrightness:(float)arg1;
- (float)getScreenBrightness;
- (void)playVibration;
- (float)getPadSplitHeight;
- (float)getPadSplitWidth;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRedDotStatus:(id)arg1 value:(_Bool)arg2;
- (id)getRedDotWording:(id)arg1;
- (int)getRedDotStatus:(id)arg1;
- (id)base64DecodeString:(id)arg1;
- (id)base64Encode:(id)arg1;
- (id)base64Decode:(id)arg1;
- (id)genUUID;
- (id)sha256:(id)arg1 uppercase:(_Bool)arg2;
- (id)md5:(id)arg1;
- (_Bool)isNetworkConnected;
- (_Bool)isPad;
- (id)getPlatformString:(id)arg1;
- (_Bool)getExptBoolValue:(id)arg1;
- (_Bool)getIsAccessibilityServiceRunning;
- (float)getBottomSafeAreaHeight;
- (float)getNavigationBarHeight;
- (float)getStatusBarHeight;
- (float)getLoigcalResolutionHeight;
- (float)getLoigcalResolutionWidth;
- (id)iOSVersion;
- (float)getPx:(float)arg1;
- (int)iOSScreenScale;
- (long long)iOSDevice;
- (long long)currentPlatform;
- (void)setLanguageChangeCallbackImpl:(id)arg1;
- (id)currentLanguageCode;
- (long long)androidDpiLevel;
- (int)androidAPILevel;
- (id)init;
- (void)openTinyApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

