//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayCreditPayCardDetailInfoViewControllerDelegate <NSObject>
- (void)WCPayCreditPayCardDetailInfoViewControllerViewWillAppear;
- (void)WCPayCreditPayCardDetailInfoViewControllerHelpGuider;
- (void)WCPayCreditPayCardDetailInfoViewControllerRepayment;
- (void)WCPayCreditPayCardDetailInfoViewControllerShowCreditDetail;
- (void)WCPayCreditPayCardDetailInfoViewControllerShowCreditRights;
- (void)WCPayCreditPayCardDetailInfoViewControllerIncreaseLimit;
- (void)WCPayCreditPayCardDetailInfoViewControllerViewBill;
- (void)WCPayCreditPayCardDetailInfoViewControllerSetMainBankCard:(WCPayControlData *)arg1;
- (void)WCPayCreditPayCardDetailInfoViewControllerUnbindCard:(WCPayControlData *)arg1;
- (void)WCPayCreditPayCardDetailInfoViewControllerContactBrandProfile;
- (void)WCPayCreditPayCardDetailInfoViewControllerContactBrandChat;
- (void)WCPayCreditPayCardDetailInfoViewControllerBack;
@end

