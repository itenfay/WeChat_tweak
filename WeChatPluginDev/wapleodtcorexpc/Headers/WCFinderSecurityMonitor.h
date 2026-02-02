//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderSecurityMonitor
{
    NSMutableDictionary *_screenShotBlockDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *screenShotBlockDict; // @synthesize screenShotBlockDict=_screenShotBlockDict;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onReceivewTakeScreenShotNotification:(id)arg1;
- (void)cleanBlockForObject:(id)arg1;
- (void)setReceiveScreenShootBlock:(CDUnknownBlockType)arg1 forObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

