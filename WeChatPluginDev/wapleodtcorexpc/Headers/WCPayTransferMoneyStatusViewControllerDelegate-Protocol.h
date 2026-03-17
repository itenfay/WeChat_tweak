//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, OpenMinimchGuide;

@protocol WCPayTransferMoneyStatusViewControllerDelegate <NSObject>
- (void)onWCPayTransferMoneyStatusViewControllerSetSubTitleClickInfo:(NSDictionary *)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerReshowOpenMinimchGuide:(OpenMinimchGuide *)arg1;
- (_Bool)OnWCPayTransferMoneyStatusViewControllerBackBlock;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQTWithTraceInfo:(NSString *)arg1;
- (void)OnWCPayTransferMoneyStatusViewControllerRefresh;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
@end

