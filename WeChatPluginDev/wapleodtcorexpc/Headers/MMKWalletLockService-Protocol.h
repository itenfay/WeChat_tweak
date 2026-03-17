//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMVoidITransmitKvDataCallback, NSString;

@protocol MMKWalletLockService <NSObject>
- (void)callPatternLockOpImpl:(int)arg1 nowHash:(NSString *)arg2 newHash:(NSString *)arg3 callback:(MMVoidITransmitKvDataCallback *)arg4;
- (void)callPatternLockRegisterImpl:(NSString *)arg1 token:(NSString *)arg2 callback:(MMVoidITransmitKvDataCallback *)arg3;
- (void)setPatternLockVerifyErrorCount:(int)arg1;
- (int)getPatternLockVerifyErrorCount;
- (void)setPatternLockBlock;
- (long long)getPatternLockBlockTimeInterval;
- (_Bool)isPatternLockBlock;
- (void)prepareAndroidTouchLockAuthImpl:(NSString *)arg1 isOffline:(_Bool)arg2 callback:(MMVoidITransmitKvDataCallback *)arg3;
- (void)releaseTouchLockService;
- (void)showTouchLockAuthViewImpl:(MMVoidITransmitKvDataCallback *)arg1;
- (void)checkIfPatternLockVerifyLocalImpl:(MMVoidITransmitKvDataCallback *)arg1;
- (_Bool)isPatternLockOpenLocal;
- (void)setPatternLockOpen:(MMITransmitKvData *)arg1;
- (_Bool)isTouchLockOpenLocal;
- (void)setTouchLockClose:(MMITransmitKvData *)arg1;
- (void)setTouchLockOpen:(MMITransmitKvData *)arg1;
- (void)setWalletlockClose;
- (_Bool)isAndroidDeviceUsingFaceID;
- (_Bool)isDeviceEnrolledBioData;
- (_Bool)isiOSDeviceUsingFaceID;
- (_Bool)isDeviceSupportUseTouchLock;
@end

