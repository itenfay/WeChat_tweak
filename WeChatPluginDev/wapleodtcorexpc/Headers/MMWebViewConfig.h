//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebViewConfig : NSObject
{
}

+ (id)limitModeReplaceUrl;
+ (_Bool)shouldCheckMpFastLoadAlive;
+ (_Bool)shouldTrickKBSnapshot;
+ (_Bool)shouldUsePlaybackPauseWhenDelayRelease;
+ (_Bool)shouldUseNewWebAttachmentDownloadInterface;
+ (_Bool)shouldDisableWebviewBottomBarWhenContentSizeChangedAdjustment;
+ (_Bool)shouldRecallWebviewBottomBarBugfix;
+ (unsigned int)webviewMaxFontLevel;
+ (id)arrWebViewFontSizes;
+ (_Bool)isDisableWebViewIPadNewFontSolution;
+ (_Bool)isEnableWebDebugFunctions;
+ (_Bool)shouldCloseMinimize;
+ (long long)abTestTriggerReportCount;
+ (_Bool)isABTestUseNativeOauth;
+ (_Bool)isABTestAllowForceSyncA8Key;

@end

