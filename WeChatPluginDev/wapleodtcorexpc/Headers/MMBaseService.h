//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext, NSRecursiveLock;

@interface MMBaseService : NSObject
{
    _Bool m_isServiceRemoved;
    _Bool m_isInitFinished;
    NSRecursiveLock *m_initLock;
    MMContext *m_context;
}

+ (_Bool)canUseInSafemode;
- (void).cxx_destruct;
@property(nonatomic) _Bool isServiceRemoved; // @synthesize isServiceRemoved=m_isServiceRemoved;
- (void)onServiceClearData;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (id)unsafeUnwrap;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) MMContext *context;
- (void)dealloc;
- (id)strongContextObjectWithContext:(id)arg1;
- (id)strongContextObject;
- (id)weakContextObjectWithContext:(id)arg1;
- (id)weakContextObject;

@end

