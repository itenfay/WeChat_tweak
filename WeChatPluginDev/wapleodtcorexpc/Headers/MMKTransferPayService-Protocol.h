//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMVoidCallback, MMVoidI64Callback, MMVoidStringCallback;

@protocol MMKTransferPayService <NSObject>
- (void)stopTransferCheckAmount;
- (void)startTransferCheckAmountImpl:(MMITransmitKvData *)arg1 cancel:(MMVoidCallback *)arg2 confirm:(MMVoidI64Callback *)arg3;
- (void)startTransferCheckSurnameImpl:(MMITransmitKvData *)arg1 cancel:(MMVoidCallback *)arg2 confirm:(MMVoidStringCallback *)arg3;
@end

