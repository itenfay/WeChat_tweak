//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAUtilityProxy : NSObject
{
}

+ (double)autoSwitchingCameraLensPosition;
+ (_Bool)enableScanAutoSwitchCameraWhenFocusing;
+ (id)getCameraZoomFactorInfo;
+ (id)cameraWithPosition:(long long)arg1 deviceType:(id)arg2 needFallBackDevice:(_Bool)arg3;
+ (id)createNativeViewWithName:(id)arg1;
+ (id)flutterRevision;
+ (void)sendDebugFileToFileHelper:(id)arg1;
+ (id)wechatUUID;
+ (_Bool)isSpecialRenderModeOn;
+ (_Bool)isElderModeOn;
+ (_Bool)isWeworkAppInstalled;
+ (id)createImageWithSvgData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
+ (Class)fetchImageScrollViewClass;
+ (id)fetchImageScrollViewWithFrame:(struct CGRect)arg1;
+ (id)extendBytesModelArrary;
+ (id)userAgentForWeApp;
+ (id)extendScriptModelToInjectWithWAContact:(id)arg1;
+ (_Bool)useCustomNavigationBar;
+ (void)updateUserAgentIfNeeded;
+ (id)getAppServiceConfigResPath;
+ (unsigned int)appDidFinishLaunchTimeStampInSecond;
+ (_Bool)isOverSeaUserAndOpenForbiddenSwitch;
+ (id)valueForKey:(id)arg1 config:(id)arg2;
+ (unsigned int)uintFromDynamicConfigForKey:(id)arg1 defaultValue:(unsigned int)arg2;
+ (id)valueFromDynamicConfigForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

