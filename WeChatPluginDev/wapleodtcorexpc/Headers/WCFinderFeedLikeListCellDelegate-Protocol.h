//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedLikeListCollectionViewCell;

@protocol WCFinderFeedLikeListCellDelegate <NSObject>

@optional
- (void)onLikeListCell:(WCFinderFeedLikeListCollectionViewCell *)arg1 emitThanksMagicAnimationWithAnimStyle:(unsigned long long)arg2;
- (void)onLikeListCell:(WCFinderFeedLikeListCollectionViewCell *)arg1 clickThankButtonWithThankState:(_Bool)arg2;
- (void)onLikeListCellClickUser:(WCFinderFeedLikeListCollectionViewCell *)arg1;
@end

