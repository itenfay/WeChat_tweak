//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAContact;

@protocol WAAppTaskMgrExt <NSObject>

@optional
- (void)onBackgroundLocatingWeAppCountChanged;
- (void)onAppTaskWillChangeOrientation:(NSString *)arg1 to:(long long)arg2;
- (void)onAppTaskDidEnterBackground:(NSString *)arg1 mode:(long long)arg2;
- (void)onLeaveWeAppWhenClickBackBtnOrWeAppTerminateWithUsername:(NSString *)arg1;
- (void)onAppPackageDidBeSweep:(NSString *)arg1 debugMode:(unsigned long long)arg2;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(NSString *)arg1;
- (void)onAppTaskTerminateWithContact:(WAContact *)arg1;
- (void)onAppTaskTerminate:(NSString *)arg1;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidCancelColdLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidColdLaunchFailedWithAppId:(NSString *)arg1;
- (void)onAppTaskDidFinishHotLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidFinishColdLaunchWithAppId:(NSString *)arg1;
- (void)onAppTaskDidFinishLaunchWithAppId:(NSString *)arg1;
@end

