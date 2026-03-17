//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedFavListCollectionViewCell;

@protocol WCFinderFeedFavListCellDelegate <NSObject>

@optional
- (void)onFavListCell:(WCFinderFeedFavListCollectionViewCell *)arg1 emitThanksMagicAnimationWithAnimStyle:(unsigned long long)arg2;
- (void)onFavListCell:(WCFinderFeedFavListCollectionViewCell *)arg1 clickThankButtonWithThankState:(_Bool)arg2;
- (void)onFavListCellClickUser:(WCFinderFeedFavListCollectionViewCell *)arg1;
@end

