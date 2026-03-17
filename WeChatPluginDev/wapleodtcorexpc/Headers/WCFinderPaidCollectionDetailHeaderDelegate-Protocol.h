//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderPaidCollectionDetailHeaderView;

@protocol WCFinderPaidCollectionDetailHeaderDelegate <NSObject>

@optional
- (_Bool)paidCollectionDetailHeaderIsAuthorScene:(WCFinderPaidCollectionDetailHeaderView *)arg1;
- (_Bool)paidCollectionDetailHeaderIsHalfScreen:(WCFinderPaidCollectionDetailHeaderView *)arg1;
- (void)onPaidCollectionDetailHeaderHeightChanged:(WCFinderPaidCollectionDetailHeaderView *)arg1;
- (void)onPaidCollectionDetailHeaderDidClickMoreBtn:(WCFinderPaidCollectionDetailHeaderView *)arg1;
@end

