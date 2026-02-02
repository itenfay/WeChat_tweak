//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCStatTimerHelper
{
    _Bool _bHadAddObserver;
    unsigned long long _u64ActiveTime;
    unsigned long long _u64TotalTime;
}

- (unsigned long long)endAndReturnTimeInMs;
- (void)start;
- (void)calculateTotalTime;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)resetTotalTime;
- (void)clearActiveTime;
- (void)resetActiveTime;
- (void)reset;
- (void)removeObserver;
- (void)tryAddObserver;
- (void)dealloc;
- (id)init;

@end

