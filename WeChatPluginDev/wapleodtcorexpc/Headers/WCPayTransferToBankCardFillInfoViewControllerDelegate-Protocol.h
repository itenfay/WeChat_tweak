//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayTransferToBankCardFillInfoViewControllerDelegate <NSObject>
- (void)OnWCPayTransferToBankCardFillInfoViewControllerSelectReceiver:(WCPayControlData *)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerFillBankCardNum:(WCPayControlData *)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryReceiver;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryRecord;
- (void)FillTransferToBankCardInfoOnNext:(WCPayControlData *)arg1;
- (void)FillTransferToBankCardInfoCancel;
@end

