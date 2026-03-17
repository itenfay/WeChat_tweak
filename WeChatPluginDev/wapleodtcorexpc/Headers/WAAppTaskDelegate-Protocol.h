//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAAppTask;

@protocol WAAppTaskDelegate <NSObject>
- (void)taskBackgroundNetworkInterruptedTimeout:(WAAppTask *)arg1;
- (void)taskDidClose:(WAAppTask *)arg1;

@optional
- (void)taskDidRestoreIntermediatePageWhenLaunch:(NSString *)arg1;
- (void)taskWillRestoreIntermediatePageWhenLaunch:(NSString *)arg1;
- (void)taskNavigatonViewDidDisappear:(WAAppTask *)arg1;
- (void)taskNavigatonViewWillAppear:(WAAppTask *)arg1;
- (void)taskDidCancelColdLaunchWithAppID:(NSString *)arg1;
- (void)taskDidColdLaunchFaiedWithAppID:(NSString *)arg1;
- (void)taskDidFinishLaunchWithAppID:(NSString *)arg1;
- (void)taskDidFinishHotLaunchWithAppID:(NSString *)arg1;
- (void)taskDidFinishColdLaunchWithAppID:(NSString *)arg1;
- (void)taskDidResignBackgroundLocating:(NSString *)arg1;
- (void)taskDidTriggerBackgroundLocating:(NSString *)arg1;
@end

