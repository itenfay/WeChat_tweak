//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMVoidCallback, MMVoidITransmitKvDataCallback, NSString;

@protocol MMKindaRealNameManager <NSObject>
- (void)startRealNameVerifyPhone:(NSString *)arg1;
- (void)goToRealNameInputUIImpl:(MMVoidCallback *)arg1 cancelCallback:(MMVoidCallback *)arg2 data:(MMITransmitKvData *)arg3;
- (void)callPrivacyDutyPageImpl:(MMVoidITransmitKvDataCallback *)arg1;
- (void)reportRealnameAction:(int)arg1;
- (void)startRealNameImpl:(MMVoidCallback *)arg1 cancelCallback:(MMVoidCallback *)arg2 data:(MMITransmitKvData *)arg3;
@end

