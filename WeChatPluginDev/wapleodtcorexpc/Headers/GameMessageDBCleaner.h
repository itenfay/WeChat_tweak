//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameMessageDBCleaner : NSObject
{
    unsigned int interactiveMaxCount;
    unsigned int interactiveMaxRetentionDays;
    unsigned int notifyMaxCount;
    unsigned int notifyMaxRetentionDays;
    unsigned int reddotMaxRetentionDays;
    _Bool enableCleanStrategy;
    unsigned int checkIntervalDays;
    _Bool shouldStopTask;
    double timeTaskStart;
}

- (void)reportStatus:(id)arg1;
- (void)reportComplete;
- (void)reportStart;
- (void)cleanInteractiveMsg;
- (void)cleanNotifyMsg;
- (void)cleanRedDot;
- (void)cleanDBExecute;
- (_Bool)checkCleanFrequency;
- (void)onUserLogout;
- (void)onAppWillClose;
- (void)onAppEnterForeground;
- (void)onAppEnterBackground;
- (void)uninit;
- (void)clean;
- (void)makeDefaultValue;
- (_Bool)getConfigFromGlobalConfig;
- (void)initSetting;

@end

