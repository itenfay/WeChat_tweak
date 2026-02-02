//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCPayTransferMoneyPaidSuccessViewV2Delegate <NSObject>

@optional
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void)onWCPayTransferMoneyPaidSuccessViewV2DidFinishLottery;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
@end

