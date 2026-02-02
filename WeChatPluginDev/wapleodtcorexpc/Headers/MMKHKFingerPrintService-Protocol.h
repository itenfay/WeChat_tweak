//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMKRect, MMVoidBinaryI32Callback, MMVoidBoolCallback, MMVoidCallback, MMVoidStringCallback, MMVoidStringStringStringCallback, NSString;

@protocol MMKHKFingerPrintService <NSObject>
- (void)authenticateImpl:(NSString *)arg1 challenge:(NSString *)arg2 extra:(MMITransmitKvData *)arg3 success:(MMVoidBinaryI32Callback *)arg4 fail:(MMVoidCallback *)arg5 change2Pwd:(MMVoidBoolCallback *)arg6 showErrThenChange2Pwd:(MMVoidStringCallback *)arg7;
- (void)showFaceIdAuthDialogImpl:(NSString *)arg1 success:(MMVoidBinaryI32Callback *)arg2 fail:(MMVoidCallback *)arg3 cancel:(MMVoidCallback *)arg4;
- (MMKRect *)getFingerPosition;
- (long long)getFingerType;
- (void)showBioAuthViewImpl:(NSString *)arg1 challenge:(NSString *)arg2 successEvent:(MMVoidStringStringStringCallback *)arg3 failEvent:(MMVoidCallback *)arg4 cancelEvent:(MMVoidCallback *)arg5 forgetPwdEvent:(MMVoidCallback *)arg6;
- (void)releaseService;
- (long long)supportBioType;
@end

