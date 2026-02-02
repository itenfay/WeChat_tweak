//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidITransmitKvDataCallback, NSString;

@interface KindaWalletLockService : NSObject
{
    MMVoidITransmitKvDataCallback *_registerCallback;
    MMVoidITransmitKvDataCallback *_opCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *opCallback; // @synthesize opCallback=_opCallback;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *registerCallback; // @synthesize registerCallback=_registerCallback;
- (void)onGetOpPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetRegisterNewPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isAndroidDeviceUsingFaceID;
- (void)callPatternLockOpImpl:(int)arg1 nowHash:(id)arg2 newHash:(id)arg3 callback:(id)arg4;
- (void)callPatternLockRegisterImpl:(id)arg1 token:(id)arg2 callback:(id)arg3;
- (void)setPatternLockVerifyErrorCount:(int)arg1;
- (int)getPatternLockVerifyErrorCount;
- (void)setPatternLockBlock;
- (long long)getPatternLockBlockTimeInterval;
- (_Bool)isPatternLockBlock;
- (void)prepareAndroidTouchLockAuthImpl:(id)arg1 isOffline:(_Bool)arg2 callback:(id)arg3;
- (void)releaseTouchLockService;
- (void)showTouchLockAuthViewImpl:(id)arg1;
- (void)checkIfPatternLockVerifyLocalImpl:(id)arg1;
- (_Bool)isPatternLockOpenLocal;
- (void)setPatternLockOpen:(id)arg1;
- (_Bool)isTouchLockOpenLocal;
- (void)setTouchLockClose:(id)arg1;
- (void)setTouchLockOpen:(id)arg1;
- (void)setWalletlockClose;
- (_Bool)isDeviceEnrolledBioData;
- (_Bool)isiOSDeviceUsingFaceID;
- (_Bool)isDeviceSupportUseTouchLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

