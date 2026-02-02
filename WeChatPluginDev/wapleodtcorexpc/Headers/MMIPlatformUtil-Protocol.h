//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMLocationInfoStruct, MMVoidF32F32BoolCallback, MMVoidStringCallback, NSArray, NSData, NSString;
@protocol MMKView;

@protocol MMIPlatformUtil <NSObject>
- (int)getAccessibilityIsTouchExplorationEnabled;
- (void)setPaySafeAccessibilityServiceListCache:(NSArray *)arg1 serviceListName:(NSArray *)arg2;
- (NSArray *)getAccessibilityServiceList;
- (void)reportDidTakeScreenshot:(MMITransmitKvData *)arg1;
- (_Bool)isLocationAuthorized;
- (void)getUserLocationImpl:(MMVoidF32F32BoolCallback *)arg1;
- (int)getLQTVersion;
- (_Bool)isForAndroidTest;
- (MMLocationInfoStruct *)getCachedLocationInfo;
- (_Bool)isScreenCaptured;
- (NSString *)getAndroidRepairConfig:(NSString *)arg1;
- (_Bool)isDarkModeOn;
- (_Bool)isCareModeOn;
- (void)openTinyApp:(MMITransmitKvData *)arg1;
- (float)getScreenDensity;
- (float)getViewScale;
- (float)getScaleByFontLevel:(int)arg1;
- (float)dynamicSizeByFontLevel:(float)arg1 level:(int)arg2;
- (int)getFontLevel;
- (float)dynamicFontSize:(float)arg1;
- (float)dynamicSize:(float)arg1;
- (void)accessibilityAnnounce:(id <MMKView>)arg1 key:(NSString *)arg2;
- (void)accessibilityFocus:(id <MMKView>)arg1;
- (_Bool)delSecurityStore:(NSString *)arg1;
- (NSData *)loadSecurityStore:(NSString *)arg1;
- (_Bool)saveSecurityStore:(NSString *)arg1 data:(NSData *)arg2;
- (_Bool)supportSecurityStore;
- (NSString *)resolveLanguageStringForGlobal:(NSString *)arg1;
- (NSString *)resolveURLStringForGlobal:(NSString *)arg1;
- (void)setReportLocationState:(_Bool)arg1 cellInfoState:(_Bool)arg2;
- (_Bool)shouldReportLocation;
- (_Bool)shouldReportCellInfo;
- (_Bool)shouldReportWifiSsid;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
- (_Bool)getIsAccessibilityServiceRunning;
- (float)getIphoneSafeAreaBottomHeight;
- (NSString *)getMemoryKVString:(NSString *)arg1;
- (void)setIdleTimerDisable:(_Bool)arg1;
- (void)makesureLonglink;
- (void)setScreenBrightness:(float)arg1;
- (float)getScreenBrightness;
- (void)playVibration;
- (float)getPadSplitHeight;
- (float)getPadSplitWidth;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRedDotStatus:(NSString *)arg1 value:(_Bool)arg2;
- (NSString *)getRedDotWording:(NSString *)arg1;
- (int)getRedDotStatus:(NSString *)arg1;
- (NSString *)base64DecodeString:(NSString *)arg1;
- (NSString *)base64Encode:(NSData *)arg1;
- (NSData *)base64Decode:(NSString *)arg1;
- (NSString *)genUUID;
- (NSString *)sha256:(NSData *)arg1 uppercase:(_Bool)arg2;
- (NSString *)md5:(NSString *)arg1;
- (_Bool)isNetworkConnected;
- (_Bool)isPad;
- (NSString *)getPlatformString:(NSString *)arg1;
- (_Bool)getExptBoolValue:(NSString *)arg1;
- (float)getBottomSafeAreaHeight;
- (float)getNavigationBarHeight;
- (float)getStatusBarHeight;
- (float)getLoigcalResolutionHeight;
- (float)getLoigcalResolutionWidth;
- (float)getPx:(float)arg1;
- (long long)iOSDevice;
- (long long)androidDpiLevel;
- (NSString *)iOSVersion;
- (int)androidAPILevel;
- (void)setLanguageChangeCallbackImpl:(MMVoidStringCallback *)arg1;
- (NSString *)currentLanguageCode;
- (long long)currentPlatform;
- (void)launchFlutter:(_Bool)arg1;
- (_Bool)isFlutterOnTop;
@end

