//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCPayRealnameGuideInfo;

@protocol WCPayPaidOrderDetailViewControllerDelegate <NSObject>

@optional
- (void)onWCPayPaidOrderDetailViewControllerlClickFavMchWithParam:(NSString *)arg1 stateBefore:(unsigned int)arg2 stateAfter:(unsigned int)arg3;
- (void)OnWCPayPaidOrderDetailViewControllerReturnWithoutDrawLottery;
- (void)OnWCPayPaidOrderDetailViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerClickLotteryBtn:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerClearGuideInfo;
- (WCPayRealnameGuideInfo *)OnWCPayPaidOrderDetailViewControllerRequestGuideInfo;
- (void)OnWCPayPaidOrderDetailViewControllerShowOpenTouchIDConfirmViewIfNeed;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(NSArray *)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(NSArray *)arg1;
@end

