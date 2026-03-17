//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneGetHisRcvrsResp;

@protocol WCPayTransferPhoneHistoryPageDelegate <NSObject>
- (void)onWCPayTransferPhoneHistoryPageDel:(NSString *)arg1;
- (void)onWCPayTransferPhoneHistoryPageLoadMore;
- (TransferPhoneGetHisRcvrsResp *)onWCPayTransferPhoneHistoryPageGetHisRcvrsResp;
- (void)onWCPayTransferPhoneHistoryPageSelect:(NSString *)arg1;
- (void)onWCPayTransferPhoneHistoryPageBack;
@end

