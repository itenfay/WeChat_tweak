//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureDevice, NSArray, NSData, NSString, UIImage, UIScrollView, WAContact, WAJSCServiceInjectExtendScriptModel, WANativeView, WAReportJSApiActionItem, WAReportUserCloseWeAppWhenLoadingItem, _TtC9WeAppCore22WACameraZoomFactorInfo;
@protocol WAImageScrollViewProtocol;

@protocol IWAUtilityService <NSObject>
+ (NSString *)userAgentForWeApp;
+ (_Bool)isOverSeaUserAndOpenForbiddenSwitch;

@optional
+ (double)autoSwitchingCameraLensPosition;
+ (_Bool)enableScanAutoSwitchCameraWhenFocusing;
+ (_TtC9WeAppCore22WACameraZoomFactorInfo *)getCameraZoomFactorInfo;
+ (AVCaptureDevice *)cameraWithPosition:(long long)arg1 deviceType:(NSString *)arg2 needFallBackDevice:(_Bool)arg3;
+ (WANativeView *)createNativeViewWithName:(NSString *)arg1;
+ (void)sendDebugFileToFileHelper:(NSString *)arg1;
+ (unsigned int)appDidFinishLaunchTimeStampInSecond;
+ (NSString *)flutterRevision;
+ (NSString *)wechatUUID;
+ (_Bool)isSpecialRenderModeOn;
+ (_Bool)isElderModeOn;
+ (_Bool)canShowStartWording;
+ (void)onWeAppNavigateToWeApp:(NSString *)arg1 from:(NSString *)arg2;
+ (void)onWeAppClose:(NSString *)arg1;
+ (_Bool)isWeworkAppInstalled;
+ (UIImage *)createImageWithSvgData:(NSData *)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
+ (UIImage *)createImageWithData:(NSData *)arg1;
+ (void)wmpf_reportUserCloseWeAppWhenLoading:(WAReportUserCloseWeAppWhenLoadingItem *)arg1;
+ (void)wmpf_reportJSApiAction:(WAReportJSApiActionItem *)arg1;
+ (Class)fetchImageScrollViewClass;
+ (UIScrollView<WAImageScrollViewProtocol> *)fetchImageScrollViewWithFrame:(struct CGRect)arg1;
+ (NSArray *)extendBytesModelArrary;
+ (WAJSCServiceInjectExtendScriptModel *)extendScriptModelToInjectWithWAContact:(WAContact *)arg1;
+ (_Bool)useCustomNavigationBar;
+ (void)updateUserAgentIfNeeded;
+ (NSString *)getAppServiceConfigResPath;
+ (id)valueForKey:(NSString *)arg1 config:(NSString *)arg2;
+ (unsigned int)uintFromDynamicConfigForKey:(NSString *)arg1 defaultValue:(unsigned int)arg2;
+ (NSString *)valueFromDynamicConfigForKey:(NSString *)arg1;
@end

