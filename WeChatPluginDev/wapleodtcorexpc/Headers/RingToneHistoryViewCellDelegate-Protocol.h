//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingToneDetail, RingToneHistoryViewCell;

@protocol RingToneHistoryViewCellDelegate <NSObject>
- (void)jumpToPlayerPage:(RingToneDetail *)arg1 index:(long long)arg2;
- (void)onExclusiveRingPlay:(RingToneHistoryViewCell *)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(RingToneDetail *)arg1;
@end

