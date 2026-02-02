//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMVoidCallback, MMVoidITransmitKvDataCallback, NSString;

@protocol MMKindaWalletMixManager <NSObject>
- (void)startWalletMixUseCaseImpl:(NSString *)arg1 data:(MMITransmitKvData *)arg2 successCallback:(MMVoidITransmitKvDataCallback *)arg3 cancelCallback:(MMVoidCallback *)arg4 failCallback:(MMVoidCallback *)arg5;
@end

