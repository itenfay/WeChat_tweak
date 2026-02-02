//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface MMServiceCenter : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dictService;
    id m_context;
    _Bool m_isCallClearData;
    _Bool m_shouldAssert;
    unsigned long long m_userState;
}

- (void).cxx_destruct;
- (void)userDidLogout;
- (void)userWillLogin;
- (void)commonInClearData:(id)arg1;
- (void)callClearDataAfter;
- (void)callClearData;
- (void)removeAllServices;
- (void)callResumeBackgroundTask:(unsigned long long)arg1;
- (void)callPauseBackgroundTask:(unsigned long long)arg1;
- (void)callClearMemoryCacheInBackground;
- (void)callClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)callMemoryWarning;
- (void)callTerminate;
- (void)callEnterBackground;
- (void)callEnterForeground;
- (void)removeService:(Class)arg1;
- (void)setService:(id)arg1 for:(Class)arg2;
- (id)getService:(Class)arg1;
- (_Bool)isServiceExist:(Class)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

