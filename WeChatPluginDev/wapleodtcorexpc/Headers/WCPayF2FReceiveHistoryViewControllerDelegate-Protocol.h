//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCPayF2FReceiveHistoryViewControllerDelegate <NSObject>
- (void)f2fReceiveHistoryViewControllerLoadMoreNewItem:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerLoadMorePreviousItem:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerDidSelectTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerClickItemWithTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerBack;
@end

