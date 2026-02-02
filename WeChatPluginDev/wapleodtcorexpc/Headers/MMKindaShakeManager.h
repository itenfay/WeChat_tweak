//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CShakeChecker, MMVoidCallback, NSString;

@interface MMKindaShakeManager : NSObject
{
    int _m_delayMs;
    CShakeChecker *_shakeChecker;
    MMVoidCallback *_onShakeCallback;
    MMVoidCallback *_m_onDelayNotifyCallback;
}

- (void).cxx_destruct;
@property(nonatomic) int m_delayMs; // @synthesize m_delayMs=_m_delayMs;
@property(retain, nonatomic) MMVoidCallback *m_onDelayNotifyCallback; // @synthesize m_onDelayNotifyCallback=_m_onDelayNotifyCallback;
@property(retain, nonatomic) MMVoidCallback *onShakeCallback; // @synthesize onShakeCallback=_onShakeCallback;
@property(retain, nonatomic) CShakeChecker *shakeChecker; // @synthesize shakeChecker=_shakeChecker;
- (void)doDelayNotifyCallback;
- (void)playShakeMatch:(_Bool)arg1;
- (void)playShakeSound;
- (void)OnShake;
- (void)setDelayNotifyCallBackImpl:(id)arg1 delayMs:(int)arg2;
- (void)setOnShakeCallBackImpl:(id)arg1;
- (void)stopCheck;
- (void)startCheck;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

