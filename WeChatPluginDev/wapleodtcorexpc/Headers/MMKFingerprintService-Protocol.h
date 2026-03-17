//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMKRect, MMVoidBinaryI32Callback, MMVoidBoolCallback, MMVoidCallback, MMVoidStringBinaryCallback, MMVoidStringCallback, MMVoidStringStringCallback, NSString;

@protocol MMKFingerprintService <NSObject>
- (void)tryInitBiometricImpl:(MMVoidCallback *)arg1;
- (MMKRect *)getFingerPosition;
- (long long)getFingerType;
- (void)showBioAuthViewImpl:(NSString *)arg1 challenge:(NSString *)arg2 successEvent:(MMVoidStringBinaryCallback *)arg3 failEvent:(MMVoidCallback *)arg4 cancelEvent:(MMVoidCallback *)arg5 forgetPwdEvent:(MMVoidCallback *)arg6;
- (void)changeAuthKey:(_Bool)arg1 isPayOk:(_Bool)arg2 pwd:(NSString *)arg3;
- (_Bool)isNeedChangeAuthKey;
- (void)setNeedChangeAuthKey:(_Bool)arg1;
- (void)userCancel;
- (void)showFaceIdAuthDialogImpl:(NSString *)arg1 success:(MMVoidBinaryI32Callback *)arg2 fail:(MMVoidCallback *)arg3 cancel:(MMVoidCallback *)arg4;
- (void)reGenFpRsaKeyImpl:(_Bool)arg1 fid:(int)arg2 reqKey:(NSString *)arg3 success:(MMVoidStringStringCallback *)arg4 fail:(MMVoidCallback *)arg5;
- (void)releaseService;
- (void)authenticateImpl:(NSString *)arg1 challenge:(NSString *)arg2 extra:(MMITransmitKvData *)arg3 success:(MMVoidBinaryI32Callback *)arg4 fail:(MMVoidCallback *)arg5 change2Pwd:(MMVoidBoolCallback *)arg6 showErrThenChange2Pwd:(MMVoidStringCallback *)arg7;
- (long long)supportBioType;
@end

