//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AAListRecord;

@protocol WCPayGPOrderHistoryControllerDelegate <NSObject>
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)arg1;
- (void)onOrderHistoryViewControllerUserSelectRecord:(AAListRecord *)arg1;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onOrderHistoryViewControllerCancel;
@end

