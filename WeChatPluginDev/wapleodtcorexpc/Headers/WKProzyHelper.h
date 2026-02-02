//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WKProzyHelper : NSObject
{
}

+ (void)deleteLocalWKProzyInfo;
+ (void)preLoadWKProxyInfo;
+ (void)checkProzyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)cleanAndDlWK:(CDUnknownBlockType)arg1;
+ (void)cleanupCrashState;
+ (void)downloadProzyInfoIfNecessary;
+ (void)resetStateWhenAppEnterBackground;
+ (void)crashProtectionEnd;
+ (void)crashProtectionBegin;
+ (_Bool)isProzyAvailable;
+ (_Bool)enableWKProzy:(id *)arg1;
+ (void)clearProzyMemory;
+ (void)handleTerminateNotification;
+ (void)removeObserverForTerminate;
+ (void)addObserverForTerminate;
+ (_Bool)setProxyInfoLocallyWithError:(id *)arg1;
+ (void)doDownloadProxy:(CDUnknownBlockType)arg1;
+ (void)downloadProxyInfo;
+ (void)initialize;
+ (_Bool)shouldPreload;
+ (_Bool)shouldDownloadWKProzy;
+ (_Bool)isWKProzyHasSucceedBefore;
+ (void)setWKProzyHasSucceedBefore:(_Bool)arg1;
+ (id)phoneID;
+ (void)setCrashReported:(_Bool)arg1;
+ (_Bool)isCrashHasReported;
+ (_Bool)isDetectedCrashWithTimes:(long long)arg1;
+ (_Bool)isDetectedCrash;
+ (long long)proxyResult;
+ (void)setProxyResult:(long long)arg1 sync:(_Bool)arg2;
+ (void)setProxyResult:(long long)arg1;
+ (void)setProxyActionState:(long long)arg1 sync:(_Bool)arg2;
+ (void)setProxyActionState:(long long)arg1;
+ (long long)proxyActionState;
+ (void)finishActionOptimized:(long long)arg1;
+ (void)finishActionWithResult:(long long)arg1;
+ (void)checkProxyActionState;
+ (void)mtt_reset_wkcrashstate;
+ (void)markAndReportWith3SecondCrash:(_Bool)arg1;
+ (void)downloadWKProzyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (id)prozyInfoWithMachineInfo:(id)arg1;
+ (_Bool)setWithProxyInfo:(id)arg1;
+ (_Bool)isProzyInfoValid:(id)arg1;
+ (const struct mach_header *)getWebkitHeader;
- (id)init;

@end

