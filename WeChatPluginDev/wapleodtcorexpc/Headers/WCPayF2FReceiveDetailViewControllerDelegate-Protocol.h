//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayF2FReceiveRecordItem;

@protocol WCPayF2FReceiveDetailViewControllerDelegate <NSObject>
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (unsigned long long)getCurrentDetailFromScene;
- (void)f2fReceiveDetailViewControllerDeleteRecord:(WCPayF2FReceiveRecordItem *)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerLoadMoreRecordWithLastRecord:(WCPayF2FReceiveRecordItem *)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerDidSelectRecord:(WCPayF2FReceiveRecordItem *)arg1;
- (void)f2fReceiveDetailViewControllerClickHistoryBtn;
- (void)f2fReceiveDetailViewControllerBack;
@end

