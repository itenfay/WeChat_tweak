//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface WCPaySecureEnclaveManager : NSObject
{
    NSRecursiveLock *m_lock;
    _Bool _needChangeAuthKey;
    int _taskCount;
    unsigned long long _currenScene;
}

+ (id)shared;
- (void).cxx_destruct;
@property int taskCount; // @synthesize taskCount=_taskCount;
@property unsigned long long currenScene; // @synthesize currenScene=_currenScene;
@property(nonatomic) _Bool needChangeAuthKey; // @synthesize needChangeAuthKey=_needChangeAuthKey;
- (void)report:(long long)arg1 errCode:(long long)arg2;
- (void)startAuthKeyCgi:(id)arg1 cgiInstance:(id)arg2 pem:(id)arg3;
- (long long)resetSEKey;
- (id)getPayTag;
- (int)biometryType;
- (void)reset;
- (void)showTouchIDAuthView:(id)arg1 withNeedSignString:(id)arg2 disableFallBack:(_Bool)arg3 whenSuccessData:(CDUnknownBlockType)arg4 whenFail:(CDUnknownBlockType)arg5;
- (void)getChallenge:(int)arg1 cgiInstance:(id)arg2;
- (void)updateAuthKey:(id)arg1 cgiInstance:(id)arg2 needReset:(_Bool)arg3;
- (void)updateAuthKey:(id)arg1 cgiInstance:(id)arg2 needReset:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)signatureData:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getError:(long long)arg1;
- (id)initOnce;

@end

