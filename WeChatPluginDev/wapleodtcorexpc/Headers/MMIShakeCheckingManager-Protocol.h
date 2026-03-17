//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback;

@protocol MMIShakeCheckingManager <NSObject>
- (void)playShakeMatch:(_Bool)arg1;
- (void)playShakeSound;
- (void)setDelayNotifyCallBackImpl:(MMVoidCallback *)arg1 delayMs:(int)arg2;
- (void)setOnShakeCallBackImpl:(MMVoidCallback *)arg1;
- (void)stopCheck;
- (void)startCheck;
@end

