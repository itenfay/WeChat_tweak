//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingToneDetail, RingTonePickCollectionViewCell;

@protocol RingToneSearchProxyDelegate <NSObject>
- (void)setSearchState:(_Bool)arg1;
- (void)jumpToPlayerPage:(RingToneDetail *)arg1 index:(long long)arg2 searchID:(long long)arg3;
- (void)stopAllRingPlay;
- (void)onExclusiveRingPlay:(RingTonePickCollectionViewCell *)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(RingToneDetail *)arg1;
@end

